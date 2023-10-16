#pragma once

namespace Proyecto1 {

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
			dataList = gcnew List<List<String^>^>();
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
	private: System::Windows::Forms::Button^ btnCrearAr;
	private: System::Windows::Forms::Button^ btnDestruirAr;
	private: System::Windows::Forms::Button^ btnAbrirAr;
	private: System::Windows::Forms::Button^ btnTablero;
		   int xCount = 0; // Variable para contar la cantidad de 'X' ingresadas
		   List<List<String^>^>^ dataList; // Lista para almacenar los datos a mostrar en el DataGridView
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvTablero = (gcnew System::Windows::Forms::DataGridView());
			this->btnCrearAr = (gcnew System::Windows::Forms::Button());
			this->btnDestruirAr = (gcnew System::Windows::Forms::Button());
			this->btnAbrirAr = (gcnew System::Windows::Forms::Button());
			this->btnTablero = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTablero))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvTablero
			// 
			this->dgvTablero->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTablero->Location = System::Drawing::Point(205, 50);
			this->dgvTablero->Name = L"dgvTablero";
			this->dgvTablero->RowHeadersWidth = 51;
			this->dgvTablero->RowTemplate->Height = 24;
			this->dgvTablero->Size = System::Drawing::Size(598, 238);
			this->dgvTablero->TabIndex = 0;
			// 
			// btnCrearAr
			// 
			this->btnCrearAr->Location = System::Drawing::Point(41, 70);
			this->btnCrearAr->Name = L"btnCrearAr";
			this->btnCrearAr->Size = System::Drawing::Size(109, 52);
			this->btnCrearAr->TabIndex = 1;
			this->btnCrearAr->Text = L"Crear Archivo";
			this->btnCrearAr->UseVisualStyleBackColor = true;
			this->btnCrearAr->Click += gcnew System::EventHandler(this, &MainForm::btnCrearAr_Click);
			// 
			// btnDestruirAr
			// 
			this->btnDestruirAr->Location = System::Drawing::Point(41, 151);
			this->btnDestruirAr->Name = L"btnDestruirAr";
			this->btnDestruirAr->Size = System::Drawing::Size(109, 52);
			this->btnDestruirAr->TabIndex = 2;
			this->btnDestruirAr->Text = L"Destruir Archivo";
			this->btnDestruirAr->UseVisualStyleBackColor = true;
			this->btnDestruirAr->Click += gcnew System::EventHandler(this, &MainForm::btnDestruirAr_Click);
			// 
			// btnAbrirAr
			// 
			this->btnAbrirAr->Location = System::Drawing::Point(41, 236);
			this->btnAbrirAr->Name = L"btnAbrirAr";
			this->btnAbrirAr->Size = System::Drawing::Size(109, 52);
			this->btnAbrirAr->TabIndex = 3;
			this->btnAbrirAr->Text = L"Abrir Archivo";
			this->btnAbrirAr->UseVisualStyleBackColor = true;
			this->btnAbrirAr->Click += gcnew System::EventHandler(this, &MainForm::btnAbrirAr_Click);
			// 
			// btnTablero
			// 
			this->btnTablero->Location = System::Drawing::Point(316, 334);
			this->btnTablero->Name = L"btnTablero";
			this->btnTablero->Size = System::Drawing::Size(210, 56);
			this->btnTablero->TabIndex = 4;
			this->btnTablero->Text = L"Generar Tablero";
			this->btnTablero->UseVisualStyleBackColor = true;
			this->btnTablero->Click += gcnew System::EventHandler(this, &MainForm::btnTablero_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(865, 475);
			this->Controls->Add(this->btnTablero);
			this->Controls->Add(this->btnAbrirAr);
			this->Controls->Add(this->btnDestruirAr);
			this->Controls->Add(this->btnCrearAr);
			this->Controls->Add(this->dgvTablero);
			this->Name = L"MainForm";
			this->Text = L"Color Mania";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTablero))->EndInit();
			this->ResumeLayout(false);

		}
	private: System::Void btnCrearAr_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = "MapaInicial.txt"; // Nombre del archivo
		try {
			// Utilizamos StreamWriter para crear el archivo y escribir en él
			StreamWriter^ writer = gcnew StreamWriter(fileName);

			// Escribe en el archivo lo que desees, por ejemplo:
			writer->WriteLine("A,B,C,X,D,E,F,X,G,H,X,I,J,K,L");

			// Cierra el StreamWriter
			writer->Close();

			MessageBox::Show("Archivo MapaInicial creado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al crear el archivo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
private: System::Void btnDestruirAr_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = "MapaInicial.txt"; // Nombre del archivo
	try {
		// Verifica si el archivo existe antes de intentar eliminarlo
		if (File::Exists(fileName)) {
			File::Delete(fileName);
			MessageBox::Show("Archivo MapaInicial.txt eliminado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("El archivo MapaInicial.txt no existe.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al eliminar el archivo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
private: System::Void btnTablero_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ fileName = "MapaInicial.txt"; // Nombre del archivo

	try {
		// Verificar si el archivo existe
		if (File::Exists(fileName)) {
			// Leer el contenido del archivo
			StreamReader^ reader = gcnew StreamReader(fileName);
			String^ fileContent = reader->ReadToEnd();
			reader->Close();

			// Procesar el contenido del archivo
			array<String^>^ letters = fileContent->Split(',');

			// Limpiar la lista de datos y el conteo de 'X'
			dataList->Clear();
			xCount = 0;

			List<String^>^ currentList = gcnew List<String^>();

			// Agregar letras a la lista de datos y contar las 'X'
			for each (String ^ letter in letters) {
				if (letter != "X") {
					currentList->Add(letter);
				}
				else {
					if (currentList->Count > 0) {
						dataList->Add(currentList);
						currentList = gcnew List<String^>();
					}
				}
			}

			// Añadir la última lista si no termina en 'X'
			if (currentList->Count > 0) {
				dataList->Add(currentList);
			}

			// Actualizar el DataGridView
			UpdateDataGridView();

			MessageBox::Show("Datos cargados desde el archivo y el DataGridView actualizado.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("El archivo MapaInicial.txt no existe.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al cargar el archivo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   void UpdateDataGridView() {
		   dgvTablero->Columns->Clear(); // Limpiar las columnas del DataGridView

		   int maxRowCount = 0;
		   for each (List<String^> ^ columnData in dataList) {
			   maxRowCount = Math::Max(maxRowCount, columnData->Count);
		   }

		   // Crear y configurar columnas en el DataGridView
		   for (int i = 0; i < dataList->Count; i++) {
			   DataGridViewColumn^ column = gcnew DataGridViewTextBoxColumn();
			   dgvTablero->Columns->Add(column);
			   column->HeaderText = "Column " + (i + 1);
			   column->Name = "Column" + i;
		   }

		   // Agregar filas al DataGridView y asignar valores
		   for (int row = 0; row < maxRowCount; row++) {
			   List<String^>^ rowData = gcnew List<String^>();
			   for each (List<String^> ^ columnData in dataList) {
				   if (row < columnData->Count) {
					   rowData->Add(columnData[row]);
				   }
				   else {
					   rowData->Add("");
				   }
			   }
			   dgvTablero->Rows->Add(rowData->ToArray());
		   }
	   }

};
}