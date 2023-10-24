#pragma once
#include "MainForm.h"

namespace StackPropio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormInicio
	/// </summary>
	public ref class FormInicio : public System::Windows::Forms::Form
	{
	public:
		FormInicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnFacil;
	protected:
	private: System::Windows::Forms::Button^ btnMedio;
	private: System::Windows::Forms::Button^ btnDificil;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnFacil = (gcnew System::Windows::Forms::Button());
			this->btnMedio = (gcnew System::Windows::Forms::Button());
			this->btnDificil = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnFacil
			// 
			this->btnFacil->Location = System::Drawing::Point(54, 185);
			this->btnFacil->Name = L"btnFacil";
			this->btnFacil->Size = System::Drawing::Size(149, 60);
			this->btnFacil->TabIndex = 1;
			this->btnFacil->Text = L"Fácil";
			this->btnFacil->UseVisualStyleBackColor = true;
			this->btnFacil->Click += gcnew System::EventHandler(this, &FormInicio::btnFacil_Click);
			// 
			// btnMedio
			// 
			this->btnMedio->Location = System::Drawing::Point(258, 185);
			this->btnMedio->Name = L"btnMedio";
			this->btnMedio->Size = System::Drawing::Size(149, 60);
			this->btnMedio->TabIndex = 2;
			this->btnMedio->Text = L"Medio";
			this->btnMedio->UseVisualStyleBackColor = true;
			this->btnMedio->Click += gcnew System::EventHandler(this, &FormInicio::btnMedio_Click);
			// 
			// btnDificil
			// 
			this->btnDificil->Location = System::Drawing::Point(156, 276);
			this->btnDificil->Name = L"btnDificil";
			this->btnDificil->Size = System::Drawing::Size(149, 60);
			this->btnDificil->TabIndex = 3;
			this->btnDificil->Text = L"Díficil";
			this->btnDificil->UseVisualStyleBackColor = true;
			this->btnDificil->Click += gcnew System::EventHandler(this, &FormInicio::btnDificil_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->label1->Location = System::Drawing::Point(39, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 49);
			this->label1->TabIndex = 4;
			this->label1->Text = L"C";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(76, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 49);
			this->label2->TabIndex = 5;
			this->label2->Text = L"o";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LimeGreen;
			this->label3->Location = System::Drawing::Point(109, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 49);
			this->label3->TabIndex = 6;
			this->label3->Text = L"l";
			this->label3->Click += gcnew System::EventHandler(this, &FormInicio::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(136, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 49);
			this->label4->TabIndex = 7;
			this->label4->Text = L"o";
			this->label4->Click += gcnew System::EventHandler(this, &FormInicio::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::BlueViolet;
			this->label5->Location = System::Drawing::Point(171, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 49);
			this->label5->TabIndex = 8;
			this->label5->Text = L"r";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(245, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 49);
			this->label6->TabIndex = 9;
			this->label6->Text = L"M";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label7->Location = System::Drawing::Point(296, 39);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 49);
			this->label7->TabIndex = 10;
			this->label7->Text = L"a";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DeepPink;
			this->label8->Location = System::Drawing::Point(331, 39);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 49);
			this->label8->TabIndex = 11;
			this->label8->Text = L"n";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->label9->Location = System::Drawing::Point(364, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(32, 49);
			this->label9->TabIndex = 12;
			this->label9->Text = L"i";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Indigo;
			this->label10->Location = System::Drawing::Point(392, 39);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 49);
			this->label10->TabIndex = 13;
			this->label10->Text = L"a";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(52, 150);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(151, 16);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Seleccione su dificultad:";
			// 
			// FormInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(474, 416);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnDificil);
			this->Controls->Add(this->btnMedio);
			this->Controls->Add(this->btnFacil);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FormInicio";
			this->Text = L"Color Mania";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnFacil_Click(System::Object^ sender, System::EventArgs^ e) {
	int timeJuego = 1000;
	int moveJuego = 100;
	
	MainForm^ tableroJuego = gcnew MainForm();
	this->Visible = false;
	tableroJuego->timeRecibir = timeJuego;
	tableroJuego->moveRecibir = moveJuego;
	tableroJuego->ShowDialog();
	this->Visible = true;


}
	private: System::Void btnMedio_Click(System::Object^ sender, System::EventArgs^ e) {
		int timeJuego = 10;
		int moveJuego = 25;
		MainForm^ tableroJuego = gcnew MainForm();
		this->Visible = false;
		tableroJuego->timeRecibir = timeJuego;
		tableroJuego->moveRecibir = moveJuego;
		tableroJuego->ShowDialog();
		this->Visible = true;

	}
private: System::Void btnDificil_Click(System::Object^ sender, System::EventArgs^ e) {
	int timeJuego = 5;
	int moveJuego = 50;
	MainForm^ tableroJuego = gcnew MainForm();
	this->Visible = false;
	tableroJuego->timeRecibir = timeJuego;
	tableroJuego->moveRecibir = moveJuego;
	tableroJuego->ShowDialog();
	this->Visible = true;

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
