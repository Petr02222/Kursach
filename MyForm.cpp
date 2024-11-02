#include "MyForm.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include "FFT.h"



using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Kursach::MyForm form;
	Application::Run(% form);
}

System::Void Kursach::MyForm::sgen_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart1->Series[0]->Points->Clear();
	this->chart2->Series[0]->Points->Clear();
	this->chart2->Series[1]->Points->Clear();
	this->chart3->Series[0]->Points->Clear();
	this->chart4->Series[0]->Points->Clear();

	double A1 = 0; 
	double F1 = 0; 
	double Phi1 = 0;   
	int N = 0;
	int Fd = 0;
	double t = 0;
	double M = 0;
	double M1 = 0;
	double S = 0, F0 = 0, F2 = 0, K = 0, shum = 0;

	A1 = System::Convert::ToDouble(a1->Text);
	F1 = System::Convert::ToDouble(f1->Text);
	Phi1 = System::Convert::ToDouble(phi1->Text);
	M = System::Convert::ToDouble(m->Text);
	M1 = System::Convert::ToDouble(m1->Text);
	Fd = System::Convert::ToDouble(fd->Text);
	N = System::Convert::ToDouble(n->Text);
	F0 = System::Convert::ToDouble(fw->Text);
	F2 = System::Convert::ToDouble(fa->Text);
	K = System::Convert::ToDouble(k->Text);

	struct cmplx* Signal = new struct cmplx[N];
	struct cmplx* Signal1 = new struct cmplx[N];
	double* SIN = new double[N];
	
	for (int i = 0; i < N; i++)
	{

		t = double(i) / Fd;
		double A = A1 * (1 + M * sin(F2 * t));
		double w = F1 * (1 + M1 * sin(F0 * t));
		 S = A * cos((w * t) + Phi1);
		SIN[i] = A;
		Signal[i].real = S;
		Signal[i].image = 0;
		this->chart2->Series[1]->Points->AddXY(t*Fd, A);

	}
	shum = Energy(Signal, N) * K / 100 / N;
	for (int i = 0; i < N; i++)
	{
		Signal[i].real = Signal[i].real + Shum(shum);
		this->chart1->Series[0]->Points->AddXY(i/Fd, Signal[i].real);
	}
	FFFF(Signal, N, 1);
	
	for (int i = 0; i < N; i++)
	{
		if (i>N/2 )
		{
			Signal[i].real = 2 * Signal[i].real;
			Signal[i].image = 2 * Signal[i].image;
			
		}
		else
		{
			Signal[i].real = 0;
			Signal[i].image = 0;
		}
		
	}
	

	FFFF(Signal, N, -1);
	for (int i = 0; i < N; i++)
	{
		t = double(i) / Fd;
		double F = sqrt(Signal[i].real * Signal[i].real + Signal[i].image * Signal[i].image);

		this->chart2->Series[0]->Points->AddXY(t*Fd, F);
	}
	for (int i = 0; i < N; i++)
	{
		double result = 0;
		for (int i = 0; i < N; i++)
		{

			result += (SIN[i] - sqrt(Signal[i].real * Signal[i].real + Signal[i].image * Signal[i].image)) * (SIN[i] - sqrt(Signal[i].real * Signal[i].real + Signal[i].image * Signal[i].image));
		}
		alfa->Text = result.ToString();
		
	}
	M1 = -0.05;
	for (int l = 0; l < 20; l++)
	{

		M1 = M1 + 0.05;
		for (int i = 0; i < N; i++)
		{
			
			t = double(i) / Fd;
			double A = A1 * (1 + M * sin(F2 * t));
			double w = F1 * (1 + M1 * sin(F0 * t));
			S = A * cos((w * t) + Phi1);
			SIN[i] = A;
			Signal[i].real = S;
			Signal[i].image = 0;

		}
		
		FFFF(Signal, N, 1);

		for (int i = 0; i < N; i++)
		{
			if (i > N / 2)
			{
				Signal[i].real = 2 * Signal[i].real;
				Signal[i].image = 2 * Signal[i].image;

			}
			else
			{
				Signal[i].real = 0;
				Signal[i].image = 0;
			}

		}


		FFFF(Signal, N, -1);
		for (int i = 0; i < N; i++)
		{
		
			double F = sqrt(Signal[i].real * Signal[i].real + Signal[i].image * Signal[i].image);

		}
		double res;
		for (int i = 0; i < N; i++)
		{

			res += (SIN[i] - sqrt(Signal[i].real * Signal[i].real + Signal[i].image * Signal[i].image)) * (SIN[i] - sqrt(Signal[i].real * Signal[i].real + Signal[i].image * Signal[i].image));
		}
			
		this->chart3->Series[0]->Points->AddXY(M1, ((res/Fd)+1)*2);

		
	}
	K = -1;
	for (int j = 0; j < 20; j++)
	{
		for (int i = 0; i < N; i++)
		{

			t = double(i) / Fd;
			double A = A1 * (1 + M * sin(F2 * t));
			double w = 1;
			S = A * cos((w * t) + Phi1);
			SIN[i] = A;
			Signal[i].real = S;
			Signal[i].image = 0;

		}
		
		shum = Energy(Signal, N) * K / 100 / N;
		K++;
		for (int i = 0; i < N; i++)
		{
			Signal[i].real = Signal[i].real + Shum(shum);
		}
		FFFF(Signal, N, 1);

		for (int i = 0; i < N; i++)
		{
			if (i > N / 2)
			{
				Signal[i].real = 2 * Signal[i].real;
				Signal[i].image = 2 * Signal[i].image;

			}
			else
			{
				Signal[i].real = 0;
				Signal[i].image = 0;
			}

		}


		FFFF(Signal, N, -1);
		for (int i = 0; i < N; i++)
		{
			t = double(i) / Fd;
			double F = sqrt(Signal[i].real * Signal[i].real + Signal[i].image * Signal[i].image);

		}
		double resul;
		for (int i = 0; i < N; i++)
		{
			
			for (int i = 0; i < N; i++)
			{

				resul += (SIN[i] - sqrt(Signal[i].real * Signal[i].real + Signal[i].image * Signal[i].image)) * (SIN[i] - sqrt(Signal[i].real * Signal[i].real + Signal[i].image * Signal[i].image));
			}

		}
		this->chart4->Series[0]->Points->AddXY(K, (resul / Fd)/500);

	}
	return System::Void();
}
