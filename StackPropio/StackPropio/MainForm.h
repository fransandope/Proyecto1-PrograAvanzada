#pragma once
#include"Pila.h"
#include"Cola.h"

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
	private: System::Windows::Forms::Button^ CambiarPilaACola;
	private: System::Windows::Forms::ComboBox^ PilasExistentes;




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
			this->CambiarPilaACola = (gcnew System::Windows::Forms::Button());
			this->PilasExistentes = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTablero))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvTablero
			// 
			this->dgvTablero->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTablero->Location = System::Drawing::Point(267, 36);
			this->dgvTablero->Margin = System::Windows::Forms::Padding(2);
			this->dgvTablero->Name = L"dgvTablero";
			this->dgvTablero->RowHeadersWidth = 51;
			this->dgvTablero->RowTemplate->Height = 24;
			this->dgvTablero->Size = System::Drawing::Size(530, 320);
			this->dgvTablero->TabIndex = 0;
			// 
			// btnLeerAr
			// 
			this->btnLeerAr->Location = System::Drawing::Point(33, 36);
			this->btnLeerAr->Margin = System::Windows::Forms::Padding(2);
			this->btnLeerAr->Name = L"btnLeerAr";
			this->btnLeerAr->Size = System::Drawing::Size(86, 39);
			this->btnLeerAr->TabIndex = 1;
			this->btnLeerAr->Text = L"Leer Archivo";
			this->btnLeerAr->UseVisualStyleBackColor = true;
			this->btnLeerAr->Click += gcnew System::EventHandler(this, &MainForm::btnLeerAr_Click);
			// 
			// btnTablero
			// 
			this->btnTablero->Location = System::Drawing::Point(152, 98);
			this->btnTablero->Margin = System::Windows::Forms::Padding(2);
			this->btnTablero->Name = L"btnTablero";
			this->btnTablero->Size = System::Drawing::Size(86, 39);
			this->btnTablero->TabIndex = 2;
			this->btnTablero->Text = L"Tablero";
			this->btnTablero->UseVisualStyleBackColor = true;
			this->btnTablero->Click += gcnew System::EventHandler(this, &MainForm::btnTablero_Click);
			// 
			// txtPilas
			// 
			this->txtPilas->Location = System::Drawing::Point(145, 159);
			this->txtPilas->Margin = System::Windows::Forms::Padding(2);
			this->txtPilas->Name = L"txtPilas";
			this->txtPilas->Size = System::Drawing::Size(118, 20);
			this->txtPilas->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(194, 144);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Pilas";
			// 
			// btnAbrirAr
			// 
			this->btnAbrirAr->Location = System::Drawing::Point(152, 36);
			this->btnAbrirAr->Margin = System::Windows::Forms::Padding(2);
			this->btnAbrirAr->Name = L"btnAbrirAr";
			this->btnAbrirAr->Size = System::Drawing::Size(86, 39);
			this->btnAbrirAr->TabIndex = 6;
			this->btnAbrirAr->Text = L"abrir";
			this->btnAbrirAr->UseVisualStyleBackColor = true;
			this->btnAbrirAr->Click += gcnew System::EventHandler(this, &MainForm::btnAbrirAr_Click);
			// 
			// btnMover
			// 
			this->btnMover->Location = System::Drawing::Point(97, 347);
			this->btnMover->Name = L"btnMover";
			this->btnMover->Size = System::Drawing::Size(75, 23);
			this->btnMover->TabIndex = 24;
			this->btnMover->Text = L"Mover";
			this->btnMover->UseVisualStyleBackColor = true;
			this->btnMover->Click += gcnew System::EventHandler(this, &MainForm::btnMover_Click);
			// 
			// txtDestino
			// 
			this->txtDestino->Location = System::Drawing::Point(109, 293);
			this->txtDestino->Name = L"txtDestino";
			this->txtDestino->Size = System::Drawing::Size(100, 20);
			this->txtDestino->TabIndex = 23;
			// 
			// txtOrigen
			// 
			this->txtOrigen->Location = System::Drawing::Point(109, 257);
			this->txtOrigen->Name = L"txtOrigen";
			this->txtOrigen->Size = System::Drawing::Size(100, 20);
			this->txtOrigen->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 297);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Destino:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 262);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Origen";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(513, 375);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"label2";
			// 
			// CambiarPilaACola
			// 
			this->CambiarPilaACola->Location = System::Drawing::Point(8, 122);
			this->CambiarPilaACola->Name = L"CambiarPilaACola";
			this->CambiarPilaACola->Size = System::Drawing::Size(82, 35);
			this->CambiarPilaACola->TabIndex = 26;
			this->CambiarPilaACola->Text = L"Cambiar Pila/Cola";
			this->CambiarPilaACola->UseVisualStyleBackColor = true;
			// 
			// PilasExistentes
				this->PilasExistentes->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(5) {
					L"", L"a", L"a", L"a",
						L"a"
				});
				this->PilasExistentes->FormattingEnabled = true;
				this->PilasExistentes->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
					L"a", L"a", L"a", L"a", L"a", L"a", L"a",
						L"a"
				});
				this->PilasExistentes->Location = System::Drawing::Point(23, 176);
				this->PilasExistentes->Name = L"PilasExistentes";
				this->PilasExistentes->Size = System::Drawing::Size(58, 21);
				this->PilasExistentes->TabIndex = 27;
				this->PilasExistentes->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox1_SelectedIndexChanged);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(848, 415);
			this->Controls->Add(this->PilasExistentes);
			this->Controls->Add(this->CambiarPilaACola);
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
			this->Margin = System::Windows::Forms::Padding(2);
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
		   //void convertirPila(int cantidadFilas, int columna, Pila^ pila) {
			  // Cola^ temp = gcnew Cola();

			  // while (pila->count > 0) {
				 //  temp->PushCola(pila->PopPila());
			  // }

			  // for (int i = 0; i < cantidadFilas; i++) {
				 ////  dgvTablero->Rows[i]->Cells[columna]->Value = "";
			  // }

			  // int index = cantidadFilas - 1;
			  // while (temp->count > 0) {
				 //  pila->PushPila(temp->PopPila());
				 //  dgvTablero->Rows[index]->Cells[columna]->Value = pila->PeekPila();
				 //  index--;
			  // }


		   //}
		   

		   void dibujarPila(int cantidadFilas, int columna, Pila^ pila) {
			   Pila^ temp = gcnew Pila();

			   while (pila->count > 0) {
				   temp->PushPila(pila->PopPila());
			   }

			   for (int i = 0; i < cantidadFilas; i++) {
				   dgvTablero->Rows[i]->Cells[columna]->Value = "";
			   }

			   int index = cantidadFilas-1;
			   while (temp->count > 0) {
				   pila->PushPila(temp->PopPila());
				   dgvTablero->Rows[index]->Cells[columna]->Value = pila->PeekPila();
				   index--;
			   }


		   }
		   //
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
						pila->PushPila(letra);
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
						String^ letra = pila->PopPila();
						if (letra != "X") {
							((Pila^)pilas[j])->PushPila(letra);
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
	   /*bool CheckGanador(Pila^ pila, int cantidadFilas) {
		   Pila^ temp = gcnew Pila();

		   while (pila->count > 0) {
			   temp->PushPila(pila->PopPila());
			   char = temporal;
			   if (temp->PeekPila){

		   }

		   for (int i = 0; i < cantidadFilas; i++) {   
		   }

		   int index = cantidadFilas - 1;
		   while (temp->count > 0) {
			   pila->PushPila(temp->PopPila());
			   dgvTablero->Rows[index]->Cells[columna]->Value = pila->PeekPila();
			   index--;
		   }
	   }*/


private: System::Void btnMover_Click(System::Object^ sender, System::EventArgs^ e) {

	Pila^ pilaOrigen = (Pila^)pilas[Convert::ToInt32(txtOrigen->Text)];
	Pila^ pilaDestino = (Pila^)pilas[Convert::ToInt32(txtDestino->Text)];
	pilaDestino->PushPila(pilaOrigen->PopPila());

	dibujarPila(dgvTablero->RowCount, Convert::ToInt32(txtOrigen->Text), pilaOrigen);
	dibujarPila(dgvTablero->RowCount, Convert::ToInt32(txtDestino->Text), pilaDestino);
	


	}

}

	   void ActualizarDataGridView() {
		   int cantidadFilas = pila->count;
		   int cantidadColumnas = 1;

		   dgvTablero->ColumnCount = cantidadColumnas;
		   dgvTablero->RowCount = cantidadFilas;

		   for (int i = 0; i < cantidadFilas; i++) {
			   String^ valor = pila->PeekPila(); // Usar Peek para obtener el elemento sin eliminarlo
			   dgvTablero->Rows[i]->Cells[0]->Value = valor;
		   }
	   }

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
