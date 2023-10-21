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
			//TODO: agregar c�digo de constructor aqu�
			//
			pila = gcnew Pila();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::Button^ btnGanador;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtElementos;






























	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvTablero = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->btnGanador = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtElementos = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTablero))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvTablero
			// 
			this->dgvTablero->ColumnHeadersHeight = 29;
			this->dgvTablero->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10, this->Column11
			});
			this->dgvTablero->Location = System::Drawing::Point(356, 44);
			this->dgvTablero->Name = L"dgvTablero";
			this->dgvTablero->RowHeadersWidth = 51;
			this->dgvTablero->RowTemplate->Height = 24;
			this->dgvTablero->Size = System::Drawing::Size(747, 394);
			this->dgvTablero->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column 0";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column1";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column2";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column3";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column4";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column5";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 110;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Column6";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Column7";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Column8";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Column9";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Column10";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column11->Width = 125;
			// 
			// btnLeerAr
			// 
			this->btnLeerAr->Location = System::Drawing::Point(44, 44);
			this->btnLeerAr->Name = L"btnLeerAr";
			this->btnLeerAr->Size = System::Drawing::Size(115, 48);
			this->btnLeerAr->TabIndex = 1;
			this->btnLeerAr->Text = L"Crear Archivo";
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
			this->btnAbrirAr->Text = L"Abrir";
			this->btnAbrirAr->UseVisualStyleBackColor = true;
			this->btnAbrirAr->Click += gcnew System::EventHandler(this, &MainForm::btnAbrirAr_Click);
			// 
			// btnMover
			// 
			this->btnMover->Location = System::Drawing::Point(123, 503);
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
			this->txtDestino->Location = System::Drawing::Point(139, 437);
			this->txtDestino->Margin = System::Windows::Forms::Padding(4);
			this->txtDestino->Name = L"txtDestino";
			this->txtDestino->Size = System::Drawing::Size(132, 22);
			this->txtDestino->TabIndex = 23;
			// 
			// txtOrigen
			// 
			this->txtOrigen->Location = System::Drawing::Point(139, 392);
			this->txtOrigen->Margin = System::Windows::Forms::Padding(4);
			this->txtOrigen->Name = L"txtOrigen";
			this->txtOrigen->Size = System::Drawing::Size(132, 22);
			this->txtOrigen->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(53, 441);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 16);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Destino:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(53, 398);
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
			// btnGanador
			// 
			this->btnGanador->Location = System::Drawing::Point(376, 461);
			this->btnGanador->Name = L"btnGanador";
			this->btnGanador->Size = System::Drawing::Size(143, 27);
			this->btnGanador->TabIndex = 26;
			this->btnGanador->Text = L"Ganador";
			this->btnGanador->UseVisualStyleBackColor = true;
			this->btnGanador->Click += gcnew System::EventHandler(this, &MainForm::btnGanador_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(96, 276);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 16);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Elementos";
			// 
			// txtElementos
			// 
			this->txtElementos->Location = System::Drawing::Point(99, 310);
			this->txtElementos->Name = L"txtElementos";
			this->txtElementos->Size = System::Drawing::Size(156, 22);
			this->txtElementos->TabIndex = 28;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1136, 564);
			this->Controls->Add(this->txtElementos);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnGanador);
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
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTablero))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnLeerAr_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = "MapaInicial.txt"; // Nombre del archivo
		try {
			// Utilizamos StreamWriter para crear el archivo y escribir en �l
			StreamWriter^ writer = gcnew StreamWriter(fileName);



			// Cierra el StreamWriter
			writer->Close();

			MessageBox::Show("Archivo MapaInicial creado exitosamente.", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);


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

		   void DibujarPilas() {
			   int cantidadFilas = Convert::ToInt32(txtElementos->Text);
			   int cantidadColumnas = pilas->Count;

			   dgvTablero->ColumnCount = cantidadColumnas;
			   dgvTablero->RowCount = cantidadFilas;

			   for (int j = 0; j < cantidadColumnas; j++) {
				   dibujarPila(cantidadFilas, j, (Pila^)pilas[j]);
			   }
		   }

		   ArrayList^ pilas;

	private: System::Void btnTablero_Click(System::Object^ sender, System::EventArgs^ e) {

		int cantidadX = ContarX();
		int cantidadPilas = Convert::ToInt32(txtPilas->Text);

		if (cantidadX == cantidadPilas - 1) {
			CrearPilas();
			DibujarPilas();
		}
		else {
			MessageBox::Show("Resultado no permitido", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
		   int ContarX() {
			   String^ filename = "MapaInicial.txt";
			   StreamReader^ reader = gcnew StreamReader(filename);
			   int cantidadX = 0;
			   String^ linea;

			   while ((linea = reader->ReadLine()) != nullptr) {
				   array<String^>^ letras = linea->Split(',');

				   for (int i = 0; i < letras->Length; i++) {
					   if (letras[i] == "X") {
						   cantidadX++;
					   }
				   }
			   }

			   reader->Close();
			   return cantidadX;
		   }

		   void CrearPilas() {
			   String^ filename = "MapaInicial.txt";
			   StreamReader^ reader = gcnew StreamReader(filename);
			   String^ linea;
			   pilas = gcnew ArrayList();

			   while ((linea = reader->ReadLine()) != nullptr) {
				   array<String^>^ letras = linea->Split(',');

				   Pila^ pilaActual = gcnew Pila();

				   for (int i = 0; i < letras->Length; i++) {
					   if (letras[i] == "X") {
						   pilas->Add(pilaActual);
						   pilaActual = gcnew Pila();
					   }
					   else {
						   pilaActual->Push(letras[i]);
					   }
				   }

				   pilas->Add(pilaActual);
			   }

			   reader->Close();
		   }

private: System::Void btnDataGrid_Click(System::Object^ sender, System::EventArgs^ e) {

}

	   bool ComprobarX(int cantidadX, int cantidadFilas) {
		   int numPilas = Convert::ToInt32(txtPilas->Text);

		   return cantidadX == numPilas - 1;
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
	   //Hola Fransan :p


private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	// Configura el DataGridView
	dgvTablero->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
	dgvTablero->DefaultCellStyle->WrapMode = DataGridViewTriState::True;
	dgvTablero->CellFormatting += gcnew DataGridViewCellFormattingEventHandler(this, &MainForm::dgvTablero_CellFormatting);
}
	   private: System::Void dgvTablero_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {
		   if (e->Value) {
			   String^ cellValue = e->Value->ToString();

			   if (cellValue == "A") {
				   e->CellStyle->BackColor = System::Drawing::Color::Yellow;
			   }
			   else if (cellValue == "R") {
				   e->CellStyle->BackColor = System::Drawing::Color::Red;
			   }
			   else if (cellValue == "B") {
				   e->CellStyle->BackColor = System::Drawing::Color::Blue;
			   }
			   else if (cellValue == "V") {
				   e->CellStyle->BackColor = System::Drawing::Color::Green;
			   }
			   else if (cellValue == "N") {
				   e->CellStyle->BackColor = System::Drawing::Color::Orange;
			   }
			   else if (cellValue == "M") {
				   e->CellStyle->BackColor = System::Drawing::Color::Purple;
			   }
		   }
	   }

			  bool VerificarGanador() {
				  if (pilas == nullptr) {
					  return false; // No se han cargado las pilas
				  }

				  for (int j = 0; j < pilas->Count; j++) {
					  Pila^ pila = (Pila^)pilas[j];
					  if (pila->count == 0) {
						  return false; // La pila est� vac�a, no cumple la condici�n
					  }

					  Pila^ copiaPila = gcnew Pila(); // Copia temporal de la pila

					  // Copia el contenido de la pila original en la copia temporal
					  while (pila->count > 0) {
						  String^ letra = (String^)pila->Peek();
						  copiaPila->Push(letra);
						  pila->Pop();
					  }

					  String^ letraComparacion = nullptr;

					  while (copiaPila->count > 0) {
						  String^ letra = (String^)copiaPila->Peek();
						  if (letra != "X") {
							  if (letraComparacion == nullptr) {
								  letraComparacion = letra;
							  }
							  else if (letra != letraComparacion) {
								  return false; // La letra en la pila no es igual a la letra de comparaci�n
							  }
							  copiaPila->Pop();
						  }
					  }
				  }

				  return true; // Todas las pilas cumplen la condici�n
			  }

	private: System::Void btnGanador_Click(System::Object^ sender, System::EventArgs^ e) {

		if (VerificarGanador()) {
			MessageBox::Show("�Ganaste el juego!", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("A�n no has ganado el juego. Sigue intentando.", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}


	}
	};
}
