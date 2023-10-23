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
<<<<<<< Updated upstream
=======


		//o7
		//definiciones

		int origen;
		int destino;
		int columnas;
		int filas;



		//definen variables

		int definircolumnas() {
			try {
				int x = Convert::ToInt32(txtElementos->Text);
				return x;
			}
			catch (FormatException^) {
				return 0;
			}
		}

		int definirorigen() {
			try {
				int x = Convert::ToInt32(txtOrigen->Text);
				return x;
			}
			catch (FormatException^) {

				return 0;
			}
		}

		int definirdestino() {
			try {
				int x = Convert::ToInt32(txtDestino->Text);
				return x;
			}
			catch (FormatException^) {

				return 0;
			}
		}

		int definirfilas() {
			try {
				int x = Convert::ToInt32(txtPilas->Text);
				return x;
			}
			catch (FormatException^) {

				return 0;
			}
		}



		void CrearArchivo() {
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
		//crea las pilas
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


		//Dibuja una unica pila
		void dibujarPila(int cantidadFilas, int columna, Pila^ pila) {



			Pila^ temp = gcnew Pila();

			while (pila->count > 0) {
				temp->Push(pila->Pop());
			}

			for (int i = 0; i < cantidadFilas; i++) {

				dgvTablero->Rows[i]->Cells[columna]->Value = "";

			}

			int index = cantidadFilas - 1;
			while (temp->count > 0) {
				pila->Push(temp->Pop());
				dgvTablero->Rows[index]->Cells[columna]->Value = pila->Peek();
				index--;
			}
		}


		//Dibuja todas las pilas
		void DibujarPilas() {
			int cantidadFilas = columnas;
			int cantidadColumnas = filas;

			dgvTablero->ColumnCount = cantidadColumnas;
			dgvTablero->RowCount = cantidadFilas;

			for (int j = 0; j < cantidadColumnas; j++) {
				dibujarPila(cantidadFilas, j, (Pila^)pilas[j]);
			}
		}

		//Verifica si hay un ganador
		bool VerificarGanador() {
			if (pilas == nullptr) {
				return false; // No se han cargado las pilas
			}

			for (int j = 0; j < pilas->Count; j++) {
				Pila^ pila = (Pila^)pilas[j];
				if (pila->count == 0) {
					return false; // La pila está vacía, no cumple la condición
				}

				Pila^ copia = pila->Copiar();

				String^ letraComparacion = nullptr;
				bool primeraLetra = true;

				while (copia->count > 0) {
					String^ letra = (String^)copia->Pop();
					if (letra != "X") {
						if (primeraLetra) {
							letraComparacion = letra;
							primeraLetra = false;
						}
						else if (letra != letraComparacion) {
							return false; // La letra en la pila no es igual a la letra de comparación
						}
					}
				}
			}

			return true; // Todas las pilas cumplen la condición
		}

		bool ComprobarX(int cantidadX, int cantidadFilas) {
			int numPilas = filas;

			return cantidadX == numPilas - 1;
		}



		void ordenar() {
			List<String^>^ elementosOrdenados = gcnew List<String^>();

			for (int i = 0; i < pilas->Count; i++) {
				Pila^ pila = safe_cast<Pila^>(pilas[i]);
				while (!pila->isEmpty()) {
					elementosOrdenados->Add(pila->Pop());
				}
			}
			int columnasOrden = Convert::ToInt32(txtPilas->Text);
			// Obtén el número máximo de elementos en una fila
			int elementosPorFila = elementosOrdenados->Count / columnasOrden;

			elementosOrdenados->Sort();
			mostrarEnDataGridView(elementosOrdenados, dgvOrdenados, elementosPorFila);
		}

		//cuenta que la cantidad de X en el archivo sea la correcta
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

		bool ContarC() {
			String^ filename = "MapaInicial.txt";
			StreamReader^ reader = gcnew StreamReader(filename);
			int cantidadC = 0;
			String^ linea;

			while ((linea = reader->ReadLine()) != nullptr) {
				array<String^>^ letras = linea->Split(',');

				for (int i = 0; i < letras->Length; i++) {
					if (letras[i] != "X") {

						cantidadC++;

					}
					else {
						cantidadC = 0;
					}
					if (cantidadC > columnas) {
						return false;
					}
				}
				if (cantidadC > columnas) {
					return false;
				}
				else {
					return true;
				}
			}
			reader->Close();
		}

		//suma e imprime el contador de movimientos
		void Moviemiento() {
			contMovimientos++;
			label6->Text = Convert::ToString(contMovimientos);

		}
		//borra 3 caracteres?
		void borrar3Caracteres(String^ filename) {
			StreamReader^ reader = gcnew StreamReader(filename);

			// Lee la línea actual del archivo
			String^ linea = reader->ReadLine();
			reader->Close();

			// Verifica que la línea tenga al menos tres caracteres antes de intentar eliminar los últimos tres
			if (linea->Length >= 3) {
				// Elimina los últimos tres caracteres
				linea = linea->Substring(0, linea->Length - 3);

				// Abre el archivo en modo de escritura para sobrescribir su contenido
				StreamWriter^ writer = gcnew StreamWriter(filename);

				// Escribe la línea modificada en el archivo
				writer->WriteLine(linea);
				writer->Close();
			}
		}
		
		//guarda las pilas en el archivo
		void GuardarPilasEnArchivo() {
			String^ filename = "MapaInicial.txt";
			StreamWriter^ writer = gcnew StreamWriter(filename);

			// Recorre las pilas y escribe su contenido en el archivo
			for each (Pila ^ pila in pilas) {
				while (!pila->isEmpty()) {
					String^ elemento = pila->Pop()->ToString();
					writer->Write(elemento);

					// Agrega una coma si no es el último elemento de la pila
					if (!pila->isEmpty()) {
						writer->Write(",");
					}
				}
				writer->Write(",X,"); // Marca el final de la pila con una "X"
			}

			// Cierra el archivo
			writer->Close();

			borrar3Caracteres(filename);
		}
		// escribe acada movimiento en el archivo
		void EscribirMovimientoEnArchivo(String^ movimiento) {
			try {
				// Abre o crea el archivo "Movimientos" en modo de escritura
				StreamWriter^ writer = gcnew StreamWriter("Movimientos.txt", true);

				// Escribe el movimiento en el archivo
				writer->Write(movimiento);

				// Cierra el archivo
				writer->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Error al escribir en el archivo de movimientos: " + e->Message);
			}
		}

		void mostrarEnDataGridView(List<String^>^ elementosOrdenados, DataGridView^ dgvOrdenados, int elementosPorFila) {
			dgvOrdenados->Columns->Clear(); // Borra todas las columnas existentes

			int numColumnas = elementosPorFila; // Define el número de columnas

			// Agrega columnas
			for (int i = 0; i < numColumnas; i++) {
				dgvOrdenados->Columns->Add("Columna" + i, "Columna " + i);
			}

			// Agrega filas para mostrar elementos
			for (int i = 0; i < elementosPorFila; i++) {
				int filaActual = dgvOrdenados->Rows->Add();
				for (int j = 0; j < numColumnas; j++) {
					dgvOrdenados->Rows[filaActual]->Cells[j]->Value = elementosOrdenados[j * numColumnas + i];
				}
			}
		}

		public:
			property int timeRecibir;
			property int moveRecibir;
			static int contMovimientos = 0;
>>>>>>> Stashed changes

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
		   

<<<<<<< Updated upstream
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
=======
		   

		  
>>>>>>> Stashed changes

		   ArrayList^ pilas;

	private: System::Void btnTablero_Click(System::Object^ sender, System::EventArgs^ e) {

<<<<<<< Updated upstream
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
=======
		columnas = definircolumnas();
		filas = definirfilas();
		origen = definirorigen();
		destino = definirdestino();
		if (columnas >= 4 && columnas <= 10 && filas >= 4 && filas <= 10) {

			int cantidadX = ContarX();
			bool ConstantesC = ContarC();
			int cantidadPilas = filas;
			if (ConstantesC == true) {

				if (cantidadX == cantidadPilas - 1) {
					CrearPilas();
					if (ConstantesC == true) {
						DibujarPilas();
					}
					timerJuego->Start();
				}
				else {
					MessageBox::Show("Resultado no permitido", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Hay mas objetos que columnas", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Las filas y columnas deben de estar entre 4 y 10.", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Error);
>>>>>>> Stashed changes
		}

	}
<<<<<<< Updated upstream
		   //(Pila^)pilas[j]) 
		   // int temp =peek;
		   // add temp =
		
=======
		   

>>>>>>> Stashed changes
private: System::Void btnDataGrid_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   bool ComprobarX() {
		   String^ fileName = "MapaInicial.txt"; // Nombre del archivo
		   int contadorX = 0;
		   int contadorC = 0;

<<<<<<< Updated upstream
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
=======
	   
>>>>>>> Stashed changes

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

	columnas = definircolumnas();
	filas = definirfilas();
	origen = definirorigen();
	destino = definirdestino();
	if (origen >= 0 && origen <= filas && destino >= 0 && destino <= filas && origen != destino) {
		Pila^ pilaOrigen = (Pila^)pilas[origen];
		Pila^ pilaDestino = (Pila^)pilas[destino];
		if ((pilaDestino->Count() < columnas && pilaOrigen->Count() > 0)) {
			pilaDestino->Push(pilaOrigen->Pop());

			dibujarPila(dgvTablero->RowCount, origen, pilaOrigen);
			dibujarPila(dgvTablero->RowCount, destino, pilaDestino);

<<<<<<< Updated upstream
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

=======
			Moviemiento();
			if (VerificarGanador()) {
				MessageBox::Show("¡Ganaste el juego!", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}



			if (contMovimientos >= moveRecibir) {
				String^ mensaje = "Ha llegado a la cantidad máxima de movimientos. Movimientos realizados: " + contMovimientos;
				MessageBox::Show(mensaje, "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			String^ movimiento = "P(" + txtOrigen->Text + "), P(" + txtDestino->Text + ")\n";
			EscribirMovimientoEnArchivo(movimiento);
		}
		else {
			
			MessageBox::Show("La pila destino esta llena o la de origen esta vacia", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("El origen y el destino deben de exitir, y ser distintos entre si", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
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


	private: System::Void btnGanador_Click(System::Object^ sender, System::EventArgs^ e) {

		if (VerificarGanador()) {
			MessageBox::Show("¡Ganaste el juego!", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Aún no has ganado el juego. Sigue intentando.", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void btnResolver_Click(System::Object^ sender, System::EventArgs^ e) {

		ordenar();
	}
		   

		   

private:
	int minutos = 0;
	int segundos = 0;

	private: System::Void timerJuego_Tick(System::Object^ sender, System::EventArgs^ e) {
		static int tiempoTranscurrido = 0;
		tiempoTranscurrido++;
		segundos++;

		if (segundos == 60) {
			minutos++;
			segundos = 0;
		}
		// Formatea el tiempo en minutos:segundos
		String^ tiempoFormateado = String::Format("{0:D2}:{1:D2}", minutos, segundos);

		// Actualiza una etiqueta con el tiempo transcurrido en el nuevo formato
		label2->Text = "Tiempo transcurrido: " + tiempoFormateado;
		// Verifica si han pasado 10 minutos
		if (minutos == timeRecibir) {
			// Detiene el temporizador para que no siga contando
			timerJuego->Stop();

			// Muestra un mensaje
			MessageBox::Show("Se acabó tu tiempo", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = "Movimientos.txt"; // Nombre del archivo
	try {
		// Abre el archivo con el programa predeterminado
		Process::Start(fileName);

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al abrir el archivo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	try {
		// Abre el archivo en modo de escritura para sobrescribir su contenido
		StreamWriter^ writer = gcnew StreamWriter("Movimientos.txt");
		writer->Write(""); // Escribe una cadena vacía para borrar el contenido
		writer->Close();
	}
	catch (IOException^ ex) {
		// Manejo de errores si no se puede borrar el contenido del archivo
		MessageBox::Show("Error al borrar el contenido del archivo de movimientos: " + ex->Message);
	}
}
private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
	GuardarPilasEnArchivo();
}

	   

	   


>>>>>>> Stashed changes
};
}
