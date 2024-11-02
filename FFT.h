#pragma once
#include <math.h>
#include <chrono> 
#include <random> 
#include <cmath>

typedef struct cmplx { double real; double image; };
void FFFF(struct cmplx* data, int n, int is)
{
	int i, j, istep;
	int m, mmax;
	double r, r1, theta, w_r, w_i, temp_r, temp_i;

	r = M_PI * is;
	j = 0;
	for (i = 0; i < n; i++)
	{
		if (i < j)
		{
			temp_r = data[j].real;
			temp_i = data[j].image;
			data[j].real = data[i].real;
			data[j].image = data[i].image;
			data[i].real = temp_r;
			data[i].image = temp_i;
		}
		m = n >> 1;
		while (j >= m) { j -= m; m = (m + 1) / 2; }
		j += m;
	}
	mmax = 1;
	while (mmax < n)
	{
		istep = mmax << 1;
		r1 = r / (double)mmax;
		for (m = 0; m < mmax; m++)
		{
			theta = r1 * m;
			w_r = (double)cos((double)theta);
			w_i = (double)sin((double)theta);
			for (i = m; i < n; i += istep)
			{
				j = i + mmax;
				temp_r = w_r * data[j].real - w_i * data[j].image;
				temp_i = w_r * data[j].image + w_i * data[j].real;
				data[j].real = data[i].real - temp_r;
				data[j].image = data[i].image - temp_i;
				data[i].real += temp_r;
				data[i].image += temp_i;
			}
		}
		mmax = istep;
	}
	if (is > 0)
		for (i = 0; i < n; i++)
		{
			data[i].real /= (double)n;
			data[i].image /= (double)n;
		}

}

double otklonenie(double A[], struct cmplx* B, int N)
{
	double result = 0;
	double res = 0;
	for (int i = 0; i < N; i++)
	{

		result += (B[i].real - A[i]) * (B[i].real - A[i]);
	}
	return result / N;
}


double Shum(double k)
{
	unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
	std::default_random_engine e(seed);
	std::normal_distribution<double> distN(-1, 1);
	return distN(e) * k;
}
double Energy(struct cmplx* A, int N)
{
	double E = 0;
	for (int i = 0; i < N; i++)
	{
		E += sqrt(A[i].real * A[i].real + A[i].image * A[i].image);
	}
	return E;
}


