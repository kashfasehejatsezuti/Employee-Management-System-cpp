#pragma once

namespace CppEmployeeSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql ::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form

	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRd;

	public:
		MyForm(void)
		{
			InitializeComponent();
			EmployeeDB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pannel1;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Button^ btnReset;

	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::Button^ btnAdd;


	private: System::Windows::Forms::TextBox^ contactno;
	private: System::Windows::Forms::TextBox^ lastname;


	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ email;
	private: System::Windows::Forms::TextBox^ address;


	private: System::Windows::Forms::TextBox^ firstname;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ refno;
	private: System::Windows::Forms::Label^ label6;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pannel1 = (gcnew System::Windows::Forms::Panel());
			this->refno = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->contactno = (gcnew System::Windows::Forms::TextBox());
			this->lastname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pannel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pannel1
			// 
			this->pannel1->AutoScroll = true;
			this->pannel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pannel1->Controls->Add(this->refno);
			this->pannel1->Controls->Add(this->label6);
			this->pannel1->Controls->Add(this->btnExit);
			this->pannel1->Controls->Add(this->btnReset);
			this->pannel1->Controls->Add(this->btnDelete);
			this->pannel1->Controls->Add(this->btnUpdate);
			this->pannel1->Controls->Add(this->btnAdd);
			this->pannel1->Controls->Add(this->contactno);
			this->pannel1->Controls->Add(this->lastname);
			this->pannel1->Controls->Add(this->label5);
			this->pannel1->Controls->Add(this->label7);
			this->pannel1->Controls->Add(this->email);
			this->pannel1->Controls->Add(this->address);
			this->pannel1->Controls->Add(this->firstname);
			this->pannel1->Controls->Add(this->label4);
			this->pannel1->Controls->Add(this->label3);
			this->pannel1->Controls->Add(this->label2);
			this->pannel1->Location = System::Drawing::Point(13, 159);
			this->pannel1->Margin = System::Windows::Forms::Padding(4);
			this->pannel1->Name = L"pannel1";
			this->pannel1->Size = System::Drawing::Size(1424, 326);
			this->pannel1->TabIndex = 1;
			// 
			// refno
			// 
			this->refno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refno->Location = System::Drawing::Point(260, 25);
			this->refno->Multiline = true;
			this->refno->Name = L"refno";
			this->refno->Size = System::Drawing::Size(367, 40);
			this->refno->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(18, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(236, 44);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Ref No";
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(1183, 240);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(217, 62);
			this->btnExit->TabIndex = 16;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(893, 240);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(244, 62);
			this->btnReset->TabIndex = 15;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(607, 240);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(238, 62);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(308, 240);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(248, 62);
			this->btnUpdate->TabIndex = 13;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MyForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(23, 240);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(231, 62);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// contactno
			// 
			this->contactno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactno->Location = System::Drawing::Point(956, 148);
			this->contactno->Multiline = true;
			this->contactno->Name = L"contactno";
			this->contactno->Size = System::Drawing::Size(367, 40);
			this->contactno->TabIndex = 10;
			// 
			// lastname
			// 
			this->lastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastname->Location = System::Drawing::Point(260, 152);
			this->lastname->Multiline = true;
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(367, 40);
			this->lastname->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(714, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 44);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Contact No";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(236, 44);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Last Name";
			// 
			// email
			// 
			this->email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(956, 87);
			this->email->Multiline = true;
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(367, 40);
			this->email->TabIndex = 5;
			// 
			// address
			// 
			this->address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->Location = System::Drawing::Point(956, 25);
			this->address->Multiline = true;
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(367, 40);
			this->address->TabIndex = 4;
			// 
			// firstname
			// 
			this->firstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstname->Location = System::Drawing::Point(260, 87);
			this->firstname->Multiline = true;
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(367, 40);
			this->firstname->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(714, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(209, 44);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Address";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(714, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 44);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Email";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(236, 44);
			this->label2->TabIndex = 0;
			this->label2->Text = L"First Name";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(16, 15);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1424, 123);
			this->panel3->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(209, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1064, 81);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Employee Management System";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 506);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1424, 404);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(1456, 922);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pannel1);
			this->Controls->Add(this->panel3);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->pannel1->ResumeLayout(false);
			this->pannel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void EmployeeDB()
	{
		sqlConn->ConnectionString = "datasource =localhost;port=3306; username=root; password=DataBase@2021; database=employeems";
		sqlConn->Open();

		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "select *from employeems";
		sqlRd = sqlCmd->ExecuteReader();
		sqlDt->Load(sqlRd);
		sqlRd->Close();
		sqlConn->Close();
		dataGridView1->DataSource = sqlDt;


	}
	 private: System::Void RefreshDB()
		   {


		 try  
		      {      
			     
			     sqlConn->ConnectionString = "datasource =localhost;port=3306; username=root; password=DataBase@2021; database=employeems";
				 sqlCmd->Connection = sqlConn;
				 MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("select *from employeems", sqlConn);
				 DataTable^ sqlDt = gcnew DataTable();
				 sqlDtA->Fill(sqlDt);
				 dataGridView1->DataSource = sqlDt;
		       }
		 catch (Exception^ ex)
		 {
			 MessageBox::Show(ex->Message), "Employee Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Information;
		 }


		 }



	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e)



	{
		try
		{
			System::Windows::Forms::DialogResult iExit;
			iExit = MessageBox::Show("Confirm if you want to exit", "Employee  Management System", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);
			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();

			}
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message), "Employee Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Information;
		}


	}


	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {

		refno->Text = "";
		firstname->Text = "";
		lastname->Text = "";
		address->Text = ""; 
		email->Text = "";
		contactno->Text = "";

	}


	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)



	{
		try {
			refno->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
			firstname->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
			lastname->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
			address->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
			email->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
			contactno->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();

		}


		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message), "Employee Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Information;
		}
	}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) 
	    
	{        
		sqlConn->ConnectionString = "datasource =localhost;port=3306; username=root; password=DataBase@2021; database=employeems";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		
		
		try {    
			

			
			sqlCmd->CommandText = "insert into employeems (RefNo, FirstName, LastName, Address, Email, ContactNo) " " values('"+ refno->Text+ "', '" + firstname->Text+"', '" + lastname->Text + "', '" + address->Text + "', '" + email->Text + "', '" + contactno->Text + "')";
			//sqlRd = sqlCmd->ExecuteReader();
			
			sqlCmd->ExecuteNonQuery();
			sqlConn->Close();
			EmployeeDB();
			RefreshDB();

				}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message), "Employee Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Information;
		}
	
	          
	
	      }
     private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) 
	 
	      {
		 try {
			  
			 sqlConn->ConnectionString = "datasource =localhost;port=3306; username=root; password=DataBase@2021; database=employeems";
			 sqlCmd->Connection = sqlConn;

			 String^ ID = refno->Text;
			 String^ FirstName= firstname->Text;
			 String^ LastName = lastname->Text;
			 String^ Address = address->Text;
			 String^ Email = email->Text;
			 String^ ContactNo = contactno->Text;
			 sqlCmd->CommandText = "update employeems set  RefNo ='" + ID + "', FirstName = '" + FirstName + "',LastName = '" + LastName + "',Address = '" + Address + "',Email = '" + Email + "',ContactNo = '" + ContactNo + "' WHERE RefNo=" + ID+"", sqlConn;
			 
			 sqlConn->Open();
			 sqlCmd->ExecuteReader();
			 sqlConn->Close();
			 EmployeeDB();
			 RefreshDB();
			 

		 }



		 catch(Exception ^ ex)
		 {
			 MessageBox::Show(ex->Message), "Employee Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Information;
		 }

		         

         } 
		private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try {

				sqlConn->ConnectionString = "datasource =localhost;port=3306; username=root; password=DataBase@2021; database=employeems";
				sqlCmd->Connection = sqlConn;

				String^ ID = refno->Text;
				MySqlCommand^sqlCmd =gcnew MySqlCommand( "delete from employeems where RefNo=" + ID + "", sqlConn);
				sqlConn->Open();

				sqlRd = sqlCmd->ExecuteReader();
				MessageBox::Show("Recode Delete", "Employee Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
				sqlConn->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message), "Employee Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Information;
				
			}
			RefreshDB();
		}
};           
	
     }
