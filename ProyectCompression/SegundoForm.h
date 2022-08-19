#pragma once

namespace ProyectCompression {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SegundoForm
	/// </summary>
	public ref class SegundoForm : public System::Windows::Forms::Form
	{
	public:
		SegundoForm(void)
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
		~SegundoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btn_siguiente;
	protected:


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ nombre_lb;
	private: System::Windows::Forms::Label^ contra_lb;

	private: System::Windows::Forms::Label^ email_lb;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ email_tb;
	private: System::Windows::Forms::TextBox^ nombre_tb;

	protected:

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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_siguiente = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nombre_lb = (gcnew System::Windows::Forms::Label());
			this->email_lb = (gcnew System::Windows::Forms::Label());
			this->contra_lb = (gcnew System::Windows::Forms::Label());
			this->nombre_tb = (gcnew System::Windows::Forms::TextBox());
			this->email_tb = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::GhostWhite;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->email_tb);
			this->panel2->Controls->Add(this->nombre_tb);
			this->panel2->Controls->Add(this->contra_lb);
			this->panel2->Controls->Add(this->email_lb);
			this->panel2->Controls->Add(this->nombre_lb);
			this->panel2->Controls->Add(this->btn_siguiente);
			this->panel2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->panel2->ForeColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(124, 19);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(248, 315);
			this->panel2->TabIndex = 4;
			// 
			// btn_siguiente
			// 
			this->btn_siguiente->BackColor = System::Drawing::Color::LightBlue;
			this->btn_siguiente->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_siguiente->Location = System::Drawing::Point(39, 241);
			this->btn_siguiente->Name = L"btn_siguiente";
			this->btn_siguiente->Size = System::Drawing::Size(173, 31);
			this->btn_siguiente->TabIndex = 0;
			this->btn_siguiente->Text = L"SIGUIENTE";
			this->btn_siguiente->UseVisualStyleBackColor = false;
			this->btn_siguiente->Click += gcnew System::EventHandler(this, &SegundoForm::btn_iniciar_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(93, 37);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 281);
			this->panel1->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(306, 53);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(262, 149);
			this->panel3->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SteelBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(16, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 120);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ENCRIPTACION Y \r\nCOMPRESION DE\r\nARCHIVOS DE \r\nMANERA SEGURA";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nombre_lb
			// 
			this->nombre_lb->AutoSize = true;
			this->nombre_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre_lb->Location = System::Drawing::Point(42, 30);
			this->nombre_lb->Name = L"nombre_lb";
			this->nombre_lb->Size = System::Drawing::Size(73, 20);
			this->nombre_lb->TabIndex = 1;
			this->nombre_lb->Text = L"Nombre: ";
			this->nombre_lb->Click += gcnew System::EventHandler(this, &SegundoForm::nombre_lb_Click);
			// 
			// email_lb
			// 
			this->email_lb->AutoSize = true;
			this->email_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_lb->Location = System::Drawing::Point(42, 95);
			this->email_lb->Name = L"email_lb";
			this->email_lb->Size = System::Drawing::Size(45, 16);
			this->email_lb->TabIndex = 2;
			this->email_lb->Text = L"Email: ";
			// 
			// contra_lb
			// 
			this->contra_lb->AutoSize = true;
			this->contra_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contra_lb->Location = System::Drawing::Point(42, 163);
			this->contra_lb->Name = L"contra_lb";
			this->contra_lb->Size = System::Drawing::Size(100, 20);
			this->contra_lb->TabIndex = 3;
			this->contra_lb->Text = L"Contraseña: ";
			// 
			// nombre_tb
			// 
			this->nombre_tb->Location = System::Drawing::Point(45, 59);
			this->nombre_tb->Name = L"nombre_tb";
			this->nombre_tb->Size = System::Drawing::Size(167, 20);
			this->nombre_tb->TabIndex = 4;
			// 
			// email_tb
			// 
			this->email_tb->Location = System::Drawing::Point(46, 125);
			this->email_tb->Name = L"email_tb";
			this->email_tb->Size = System::Drawing::Size(167, 20);
			this->email_tb->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(45, 186);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(167, 20);
			this->textBox3->TabIndex = 6;
			// 
			// SegundoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(786, 353);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"SegundoForm";
			this->Text = L"SegundoForm";
			this->Load += gcnew System::EventHandler(this, &SegundoForm::SegundoForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SegundoForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_iniciar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void nombre_lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
