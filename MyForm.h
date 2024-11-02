#pragma once

namespace Kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ phi1;
	private: System::Windows::Forms::TextBox^ f1;
	private: System::Windows::Forms::TextBox^ a1;
	private: System::Windows::Forms::Button^ sgen;
	private: System::Windows::Forms::TextBox^ m;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ fd;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ n;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ m1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ fw;
	private: System::Windows::Forms::TextBox^ fa;
	private: System::Windows::Forms::TextBox^ k;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ alfa;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->alfa = (gcnew System::Windows::Forms::TextBox());
			this->k = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->fw = (gcnew System::Windows::Forms::TextBox());
			this->fa = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->m1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->n = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->fd = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->m = (gcnew System::Windows::Forms::TextBox());
			this->sgen = (gcnew System::Windows::Forms::Button());
			this->phi1 = (gcnew System::Windows::Forms::TextBox());
			this->f1 = (gcnew System::Windows::Forms::TextBox());
			this->a1 = (gcnew System::Windows::Forms::TextBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::Transparent;
			legend1->Name = L"Legend1";
			legend1->Position->Auto = false;
			legend1->Position->Height = 7.286432F;
			legend1->Position->Width = 14.1319F;
			legend1->Position->X = 82.8681F;
			legend1->Position->Y = 3;
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(44, 35);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->IsXValueIndexed = true;
			series1->Legend = L"Legend1";
			series1->LegendText = L"Сигнал";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(1392, 446);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->alfa);
			this->groupBox1->Controls->Add(this->k);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->fw);
			this->groupBox1->Controls->Add(this->fa);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->m1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->n);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->fd);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->m);
			this->groupBox1->Controls->Add(this->sgen);
			this->groupBox1->Controls->Add(this->phi1);
			this->groupBox1->Controls->Add(this->f1);
			this->groupBox1->Controls->Add(this->a1);
			this->groupBox1->Location = System::Drawing::Point(1523, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(459, 317);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(300, 225);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 17);
			this->label11->TabIndex = 22;
			this->label11->Text = L"alfa";
			// 
			// alfa
			// 
			this->alfa->AcceptsReturn = true;
			this->alfa->AcceptsTab = true;
			this->alfa->Location = System::Drawing::Point(335, 225);
			this->alfa->Name = L"alfa";
			this->alfa->ReadOnly = true;
			this->alfa->Size = System::Drawing::Size(100, 22);
			this->alfa->TabIndex = 21;
			// 
			// k
			// 
			this->k->Location = System::Drawing::Point(52, 265);
			this->k->Name = L"k";
			this->k->Size = System::Drawing::Size(100, 22);
			this->k->TabIndex = 20;
			this->k->Text = L"20";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(-3, 268);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 17);
			this->label10->TabIndex = 19;
			this->label10->Text = L"% Шума";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 225);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 17);
			this->label9->TabIndex = 18;
			this->label9->Text = L"fw";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 183);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 17);
			this->label8->TabIndex = 17;
			this->label8->Text = L"fa";
			// 
			// fw
			// 
			this->fw->Location = System::Drawing::Point(52, 225);
			this->fw->Name = L"fw";
			this->fw->Size = System::Drawing::Size(100, 22);
			this->fw->TabIndex = 16;
			this->fw->Text = L"1";
			// 
			// fa
			// 
			this->fa->Location = System::Drawing::Point(52, 183);
			this->fa->Name = L"fa";
			this->fa->Size = System::Drawing::Size(100, 22);
			this->fa->TabIndex = 15;
			this->fa->Text = L"1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(302, 183);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"mw";
			// 
			// m1
			// 
			this->m1->Location = System::Drawing::Point(335, 179);
			this->m1->Name = L"m1";
			this->m1->Size = System::Drawing::Size(100, 22);
			this->m1->TabIndex = 13;
			this->m1->Text = L"0,05";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(298, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"N";
			// 
			// n
			// 
			this->n->Location = System::Drawing::Point(335, 51);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(100, 22);
			this->n->TabIndex = 11;
			this->n->Text = L"1024";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(298, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"fd";
			// 
			// fd
			// 
			this->fd->Location = System::Drawing::Point(335, 88);
			this->fd->Name = L"fd";
			this->fd->Size = System::Drawing::Size(100, 22);
			this->fd->TabIndex = 9;
			this->fd->Text = L"64";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(299, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"ma";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"phi";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"f";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"A";
			// 
			// m
			// 
			this->m->Location = System::Drawing::Point(335, 134);
			this->m->Name = L"m";
			this->m->Size = System::Drawing::Size(100, 22);
			this->m->TabIndex = 4;
			this->m->Text = L"0,5";
			// 
			// sgen
			// 
			this->sgen->Location = System::Drawing::Point(161, 51);
			this->sgen->Name = L"sgen";
			this->sgen->Size = System::Drawing::Size(132, 234);
			this->sgen->TabIndex = 3;
			this->sgen->Text = L"Cгенерировать";
			this->sgen->UseVisualStyleBackColor = true;
			this->sgen->Click += gcnew System::EventHandler(this, &MyForm::sgen_Click);
			// 
			// phi1
			// 
			this->phi1->Location = System::Drawing::Point(52, 137);
			this->phi1->Name = L"phi1";
			this->phi1->Size = System::Drawing::Size(100, 22);
			this->phi1->TabIndex = 2;
			this->phi1->Text = L"0";
			// 
			// f1
			// 
			this->f1->Location = System::Drawing::Point(52, 93);
			this->f1->Name = L"f1";
			this->f1->Size = System::Drawing::Size(100, 22);
			this->f1->TabIndex = 1;
			this->f1->Text = L"10";
			// 
			// a1
			// 
			this->a1->Location = System::Drawing::Point(52, 51);
			this->a1->Name = L"a1";
			this->a1->Size = System::Drawing::Size(100, 22);
			this->a1->TabIndex = 0;
			this->a1->Text = L"1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->BackColor = System::Drawing::Color::White;
			legend2->Name = L"Legend1";
			legend2->Position->Auto = false;
			legend2->Position->Height = 9.698997F;
			legend2->Position->Width = 13.94422F;
			legend2->Position->X = 83.05578F;
			legend2->Position->Y = 3;
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(44, 525);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->IsXValueIndexed = true;
			series2->Legend = L"Legend1";
			series2->LegendText = L"После ПГ";
			series2->Name = L"Series1";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int64;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Red;
			series3->Legend = L"Legend1";
			series3->LegendText = L"Огибающая";
			series3->Name = L"Series2";
			this->chart2->Series->Add(series2);
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(1392, 424);
			this->chart2->TabIndex = 2;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->BackColor = System::Drawing::Color::Transparent;
			legend3->Name = L"Legend1";
			legend3->Position->Auto = false;
			legend3->Position->Height = 9.698997F;
			legend3->Position->Width = 22.92576F;
			legend3->Position->X = 74.07423F;
			legend3->Position->Y = 3;
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(1463, 382);
			this->chart3->Name = L"chart3";
			series4->BackImageTransparentColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->IsXValueIndexed = true;
			series4->Legend = L"Legend1";
			series4->LegendText = L"Сигнал(mw)";
			series4->Name = L"Series1";
			series4->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int64;
			series4->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chart3->Series->Add(series4);
			this->chart3->Size = System::Drawing::Size(546, 300);
			this->chart3->TabIndex = 3;
			this->chart3->Text = L"chart3";
			// 
			// chart4
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea4);
			legend4->BackColor = System::Drawing::Color::Transparent;
			legend4->Name = L"Legend1";
			legend4->Position->Auto = false;
			legend4->Position->Height = 9.698997F;
			legend4->Position->Width = 22.92576F;
			legend4->Position->X = 74.07423F;
			legend4->Position->Y = 3;
			this->chart4->Legends->Add(legend4);
			this->chart4->Location = System::Drawing::Point(1463, 688);
			this->chart4->Name = L"chart4";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->IsXValueIndexed = true;
			series5->Legend = L"Legend1";
			series5->LegendText = L"Сигнал(%шума)";
			series5->Name = L"Series1";
			this->chart4->Series->Add(series5);
			this->chart4->Size = System::Drawing::Size(546, 300);
			this->chart4->TabIndex = 4;
			this->chart4->Text = L"chart4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"Преобразования Гильберта";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void sgen_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
