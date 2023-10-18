#pragma once
#include"Pila.h"

namespace StackPropio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			pila = gcnew Pila();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvTablero;
	protected:
	private: System::Windows::Forms::Button^ btnLeerAr;
	private: System::Windows::Forms::Button^ btnTablero;
	private: Pila^ pila;

	private: System::Windows::Forms::TextBox^ txtPilas;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAbrirAr;


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
			this->dgvTablero = (gcnew System::Windows::Forms::DataGridView());
			this->btnLeerAr = (gcnew System::Windows::Forms::Button());
			this->btnTablero = (gcnew System::Windows::Forms::Button());
			this->txtPilas = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAbrirAr = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTablero))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvTablero
			// 
			this->dgvTablero->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTablero->Location = System::Drawing::Point(356, 44);
			this->dgvTablero->Name = L"dgvTablero";
			this->dgvTablero->RowHeadersWidth = 51;
			this->dgvTablero->RowTemplate->Height = 24;
			this->dgvTablero->Size = System::Drawing::Size(706, 394);
			this->dgvTablero->TabIndex = 0;
			// 
			// btnLeerAr
			// 
			this->btnLeerAr->Location = System::Drawing::Point(126, 44);
			this->btnLeerAr->Name = L"btnLeerAr";
			this->btnLeerAr->Size = System::Drawing::Size(115, 48);
			this->btnLeerAr->TabIndex = 1;
			this->btnLeerAr->Text = L"Leer Archivo";
			this->btnLeerAr->UseVisualStyleBackColor = true;
			this->btnLeerAr->Click += gcnew System::EventHandler(this, &MainForm::btnLeerAr_Click);
			// 
			// btnTablero
			// 
			this->btnTablero->Location = System::Drawing::Point(126, 220);
			this->btnTablero->Name = L"btnTablero";
			this->btnTablero->Size = System::Drawing::Size(115, 48);
			this->btnTablero->TabIndex = 2;
			this->btnTablero->Text = L"Tablero";
			this->btnTablero->UseVisualStyleBackColor = true;
			this->btnTablero->Click += gcnew System::EventHandler(this, &MainForm::btnTablero_Click);
			// 
			// txtPilas
			// 
			this->txtPilas->Location = System::Drawing::Point(108, 355);
			this->txtPilas->Name = L"txtPilas";
			this->txtPilas->Size = System::Drawing::Size(156, 22);
			this->txtPilas->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(105, 322);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Pilas";
			// 
			// btnAbrirAr
			// 
			this->btnAbrirAr->Location = System::Drawing::Point(126, 134);
			this->btnAbrirAr->Name = L"btnAbrirAr";
			this->btnAbrirAr->Size = System::Drawing::Size(115, 48);
			this->btnAbrirAr->TabIndex = 6;
			this->btnAbrirAr->Text = L"abrir";
			this->btnAbrirAr->UseVisualStyleBackColor = true;
			this->btnAbrirAr->Click += gcnew System::EventHandler(this, &MainForm::btnAbrirAr_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1131, 511);
			this->Controls->Add(this->btnAbrirAr);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtPilas);
			this->Controls->Add(this->btnTablero);
			this->Controls->Add(this->btnLeerAr);
			this->Controls->Add(this->dgvTablero);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTablero))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLeerAr_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = "MapaInicial.txt"; // Nombre del archivo
		try {
			// Utilizamos StreamWriter para crear el archivo y escribir en él
			StreamWriter^ writer = gcnew StreamWriter(fileName);



			// Cierra el StreamWriter
			writer->Close();

			MessageBox::Show("Archivo MapaInicial creado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al crear el archivo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   ArrayList^ pilas;

		   void dibujarPila(int cantidadFilas, int columna, Pila^ pila) {
			   Pila^ temp = gcnew Pila();

			   while (pila->count > 0) {
				   temp->Push(pila->Pop());
			   }

			   for (int i = 0; i < cantidadFilas; i++) {
				   dgvTablero->Rows[i]->Cells[columna]->Value = "";
			   }

			   int index = cantidadFilas-1;
			   while (temp->count > 0) {
				   pila->Push(temp->Pop());
				   dgvTablero->Rows[index]->Cells[columna]->Value = pila->Peek();
				   index--;
			   }


		   }

	private: System::Void btnTablero_Click(System::Object^ sender, System::EventArgs^ e) {

		bool valueX = false;
		valueX= ComprobarX();

		if (valueX != false) {
			String^ filename = "MapaInicial.txt";
			StreamReader^ reader = gcnew StreamReader(filename);

			String^ linea;

			while ((linea = reader->ReadLine()) != nullptr)
			{
				// Divide la línea en letras individuales utilizando la coma como separador.
				array<String^>^ letras = linea->Split(',');

				// Agrega las letras a la pila.
				for (int i = letras->Length-1; i >= 0; i--)
				{
					String^ letra = letras[i];
					pila->Push(letra);
				}
			}

			// Cierra el lector del archivo.
			reader->Close();

			int cantidadFilas = Convert::ToInt32(txtPilas->Text);
			int cantidadColumnas = Convert::ToInt32(txtPilas->Text);

			dgvTablero->ColumnCount = cantidadColumnas;
			dgvTablero->RowCount = cantidadFilas;

			for (int j = 0; j < cantidadColumnas; j++)
			{
				for (int i = 0; i < cantidadFilas; i++)
				{
					if (pila->count > 0)
					{
						String^ letra = pila->Pop();
						if (letra != "X") {
							dgvTablero->Rows[i]->Cells[j]->Value = letra;
						}

					}
				}
			}

		}


		else if(valueX!=true) {
			String^ file = "MapaInicial.txt";
			Process::Start(file);
			Console::Read();
			ComprobarX();
		}
		
	}
		 


private: System::Void btnDataGrid_Click(System::Object^ sender, System::EventArgs^ e) {

}

	   bool ComprobarX() {
		   String^ fileName = "MapaInicial.txt"; // Nombre del archivo
		   int contadorX = 0;

		   try {
			   while (true) {

				   // Abre el archivo con el programa predeterminado
				   StreamReader^ sr = gcnew StreamReader(fileName);
				   while (!sr->EndOfStream) {
					   String^ linea = sr->ReadLine();
					   for each (Char c in linea) {
						   if (c == 'X') {
							   contadorX++;
						   }
					   }
				   }


				   sr->Close();

				   int numPilas = Convert::ToInt32(txtPilas->Text);

				   if (contadorX == numPilas - 1) {
					   MessageBox::Show("Resultado permitido", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Information);
					   break; // Sal del bucle si el resultado es permitido.
					   return true;
				   }
				   else {
					   MessageBox::Show("Resultado no permitido", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   return false;
				   }
			   }
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Error al abrir el archivo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   return false;
		   }
	   }


private: System::Void btnAbrirAr_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = "MapaInicial.txt"; // Nombre del archivo
	try {
		// Abre el archivo con el programa predeterminado
		Process::Start(fileName);

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al abrir el archivo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
