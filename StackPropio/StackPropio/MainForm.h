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
	private: System::Windows::Forms::Button^ btnMover;
	private: System::Windows::Forms::TextBox^ txtDestino;
	private: System::Windows::Forms::TextBox^ txtOrigen;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;


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
			this->btnMover = (gcnew System::Windows::Forms::Button());
			this->txtDestino = (gcnew System::Windows::Forms::TextBox());
			this->txtOrigen = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->btnLeerAr->Location = System::Drawing::Point(44, 44);
			this->btnLeerAr->Name = L"btnLeerAr";
			this->btnLeerAr->Size = System::Drawing::Size(115, 48);
			this->btnLeerAr->TabIndex = 1;
			this->btnLeerAr->Text = L"Leer Archivo";
			this->btnLeerAr->UseVisualStyleBackColor = true;
			this->btnLeerAr->Click += gcnew System::EventHandler(this, &MainForm::btnLeerAr_Click);
			// 
			// btnTablero
			// 
			this->btnTablero->Location = System::Drawing::Point(129, 118);
			this->btnTablero->Name = L"btnTablero";
			this->btnTablero->Size = System::Drawing::Size(115, 48);
			this->btnTablero->TabIndex = 2;
			this->btnTablero->Text = L"Tablero";
			this->btnTablero->UseVisualStyleBackColor = true;
			this->btnTablero->Click += gcnew System::EventHandler(this, &MainForm::btnTablero_Click);
			// 
			// txtPilas
			// 
			this->txtPilas->Location = System::Drawing::Point(99, 227);
			this->txtPilas->Name = L"txtPilas";
			this->txtPilas->Size = System::Drawing::Size(156, 22);
			this->txtPilas->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(96, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Pilas";
			// 
			// btnAbrirAr
			// 
			this->btnAbrirAr->Location = System::Drawing::Point(202, 44);
			this->btnAbrirAr->Name = L"btnAbrirAr";
			this->btnAbrirAr->Size = System::Drawing::Size(115, 48);
			this->btnAbrirAr->TabIndex = 6;
			this->btnAbrirAr->Text = L"abrir";
			this->btnAbrirAr->UseVisualStyleBackColor = true;
			this->btnAbrirAr->Click += gcnew System::EventHandler(this, &MainForm::btnAbrirAr_Click);
			// 
			// btnMover
			// 
			this->btnMover->Location = System::Drawing::Point(129, 427);
			this->btnMover->Margin = System::Windows::Forms::Padding(4);
			this->btnMover->Name = L"btnMover";
			this->btnMover->Size = System::Drawing::Size(100, 28);
			this->btnMover->TabIndex = 24;
			this->btnMover->Text = L"Mover";
			this->btnMover->UseVisualStyleBackColor = true;
			this->btnMover->Click += gcnew System::EventHandler(this, &MainForm::btnMover_Click);
			// 
			// txtDestino
			// 
			this->txtDestino->Location = System::Drawing::Point(145, 361);
			this->txtDestino->Margin = System::Windows::Forms::Padding(4);
			this->txtDestino->Name = L"txtDestino";
			this->txtDestino->Size = System::Drawing::Size(132, 22);
			this->txtDestino->TabIndex = 23;
			// 
			// txtOrigen
			// 
			this->txtOrigen->Location = System::Drawing::Point(145, 316);
			this->txtOrigen->Margin = System::Windows::Forms::Padding(4);
			this->txtOrigen->Name = L"txtOrigen";
			this->txtOrigen->Size = System::Drawing::Size(132, 22);
			this->txtOrigen->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(59, 365);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 16);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Destino:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 322);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 16);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Origen";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(684, 461);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 25;
			this->label2->Text = L"label2";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1131, 511);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnMover);
			this->Controls->Add(this->txtDestino);
			this->Controls->Add(this->txtOrigen);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
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

		   ArrayList^ pilas;

	private: System::Void btnTablero_Click(System::Object^ sender, System::EventArgs^ e) {

		bool valueX = false;
		valueX= ComprobarX();

		if (valueX != false) {
			String^ filename = "MapaInicial.txt";
			StreamReader^ reader = gcnew StreamReader(filename);

			String^ linea;

			pilas = gcnew ArrayList();

			while ((linea = reader->ReadLine()) != nullptr)
			{
				// Divide la línea en letras individuales utilizando la coma como separador.
				array<String^>^ letras = linea->Split(',');
				

				// Agrega las letras a la pila.
				for (int i = letras->Length-1; i >= 0; i--)
				{
					
					String^ letra = letras[i];
					if (letra != "X") {
						pila->Push(letra);
					}
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
				pilas->Add(gcnew Pila());

				for (int i = 0; i < cantidadFilas; i++)
				{

					if (pila->count > 0)
					{
						String^ letra = pila->Pop();
						if (letra != "X") {
							((Pila^)pilas[j])->Push(letra);
						}

					}
				}
				dibujarPila(cantidadFilas, j, (Pila^)pilas[j]);
			}
		}
		else if(valueX!=true) {
			String^ file = "MapaInicial.txt";
			Process::Start(file);
			Console::Read();
			ComprobarX();
		}
		
	}
		   //(Pila^)pilas[j]) 
		   // int temp =peek;
		   // add temp =
		
private: System::Void btnDataGrid_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   bool ComprobarX() {
		   String^ fileName = "MapaInicial.txt"; // Nombre del archivo
		   int contadorX = 0;
		   int contadorC = 0;

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
						   else {
							   if (c != ',' && c != 'X') {
								   contadorC++;
							   }
							   
						   }
					   }
				   }


				   sr->Close();

				   int numPilas = Convert::ToInt32(txtPilas->Text);
				   int numColumnas = Convert::ToInt32(txtPilas->Text);

				   if (contadorX == numPilas - 1 && contadorC == numColumnas*numPilas) {
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


private: System::Void btnMover_Click(System::Object^ sender, System::EventArgs^ e) {

	Pila^ pilaOrigen = (Pila^)pilas[Convert::ToInt32(txtOrigen->Text)];
	Pila^ pilaDestino = (Pila^)pilas[Convert::ToInt32(txtDestino->Text)];
	pilaDestino->Push(pilaOrigen->Pop());

	dibujarPila(dgvTablero->RowCount, Convert::ToInt32(txtOrigen->Text), pilaOrigen);
	dibujarPila(dgvTablero->RowCount, Convert::ToInt32(txtDestino->Text), pilaDestino);

}

	   void ActualizarDataGridView() {
		   int cantidadFilas = pila->count;
		   int cantidadColumnas = 1;

		   dgvTablero->ColumnCount = cantidadColumnas;
		   dgvTablero->RowCount = cantidadFilas;

		   for (int i = 0; i < cantidadFilas; i++) {
			   String^ valor = pila->Peek(); // Usar Peek para obtener el elemento sin eliminarlo
			   dgvTablero->Rows[i]->Cells[0]->Value = valor;
		   }
	   }

};
}
