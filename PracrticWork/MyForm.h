#pragma

namespace PracrticWork {

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
			dbPath = Application::StartupPath;
			oleDbConnection1->ConnectionString =
				"Provider=Microsoft.Jet.OLEDB.4.0; Data Source=" + dbPath + "\\database.mdb";
			oleDbDataAdapter1->Fill(dataTable1);
			oleDbDataAdapter3->Fill(dataTable2);
			oleDbDataAdapter4->Fill(dataTable3);
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
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	protected:
	private: String^ dbPath;

	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;

	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;









	private: System::Data::DataColumn^  dataColumn7;
	private: System::Data::DataColumn^  dataColumn8;
	private: System::Data::DataColumn^  dataColumn9;
	private: System::Data::DataColumn^  dataColumn10;
	private: System::Data::DataColumn^  dataColumn11;
	private: System::Windows::Forms::BindingNavigator^  bindingNavigator1;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorAddNewItem;
	private: System::Windows::Forms::ToolStripLabel^  bindingNavigatorCountItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorDeleteItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveFirstItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMovePreviousItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator;
	private: System::Windows::Forms::ToolStripTextBox^  bindingNavigatorPositionItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator1;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveNextItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveLastItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator2;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;






	private: System::Windows::Forms::Button^  save;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand2;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter2;
	private: System::Windows::Forms::Button^  search;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand;

	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  idDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nameDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  descriptionDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  categoryDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  storeDataGridViewTextBoxColumn;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;











	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::DataGridView^  dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  idDataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  nameDataGridViewTextBoxColumn1;



private: System::Data::DataTable^  dataTable2;
private: System::Data::DataColumn^  dataColumn1;
private: System::Data::DataColumn^  dataColumn2;
private: System::Data::DataTable^  dataTable3;
private: System::Data::DataColumn^  dataColumn3;
private: System::Data::DataColumn^  dataColumn4;
private: System::Data::DataColumn^  dataColumn5;
private: System::Data::DataColumn^  dataColumn6;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand5;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand6;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand7;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand8;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand1;
private: System::Data::OleDb::OleDbConnection^  oleDbConnection2;
private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter3;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand2;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand3;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand4;
private: System::Data::DataSet^  dataSet2;














private: System::Windows::Forms::BindingSource^  bindingSource2;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand9;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand10;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand11;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand12;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand13;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand14;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand15;
private: System::Data::DataTable^  dataTable4;
private: System::Data::DataColumn^  dataColumn12;
private: System::Data::DataColumn^  dataColumn13;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::DataGridView^  dataGridView3;
private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter4;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand16;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand17;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand18;
private: System::Data::OleDb::OleDbCommand^  oleDbCommand19;
private: System::Data::OleDb::OleDbConnection^  oleDbConnection3;
private: System::Data::DataSet^  dataSet3;
private: System::Data::DataTable^  dataTable5;
private: System::Data::DataColumn^  dataColumn14;
private: System::Data::DataColumn^  dataColumn15;
private: System::Data::DataColumn^  dataColumn16;
private: System::Data::DataColumn^  dataColumn17;
private: System::Windows::Forms::BindingSource^  bindingSource3;
private: System::Windows::Forms::DataGridView^  dataGridView4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  idDataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  nameDataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  descriptionDataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  siteDataGridViewTextBoxColumn;
private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbDeleteCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn7 = (gcnew System::Data::DataColumn());
			this->dataColumn8 = (gcnew System::Data::DataColumn());
			this->dataColumn9 = (gcnew System::Data::DataColumn());
			this->dataColumn10 = (gcnew System::Data::DataColumn());
			this->dataColumn11 = (gcnew System::Data::DataColumn());
			this->dataTable2 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataTable3 = (gcnew System::Data::DataTable());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
			this->bindingNavigatorDeleteItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->idDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->descriptionDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->categoryDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->storeDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->save = (gcnew System::Windows::Forms::Button());
			this->oleDbSelectCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter2 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->search = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->idDataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameDataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataSet2 = (gcnew System::Data::DataSet());
			this->dataTable4 = (gcnew System::Data::DataTable());
			this->dataColumn12 = (gcnew System::Data::DataColumn());
			this->dataColumn13 = (gcnew System::Data::DataColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->idDataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameDataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->descriptionDataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->siteDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bindingSource3 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataSet3 = (gcnew System::Data::DataSet());
			this->dataTable5 = (gcnew System::Data::DataTable());
			this->dataColumn14 = (gcnew System::Data::DataColumn());
			this->dataColumn15 = (gcnew System::Data::DataColumn());
			this->dataColumn16 = (gcnew System::Data::DataColumn());
			this->dataColumn17 = (gcnew System::Data::DataColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->oleDbCommand5 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand6 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand7 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand8 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection2 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbDataAdapter3 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand4 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand9 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand10 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand11 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand12 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand13 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand14 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand15 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter4 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbCommand16 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand17 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand18 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbCommand19 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection3 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable4))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT        items.*\r\nFROM            items";
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(5) {
				(gcnew System::Data::Common::DataColumnMapping(L"id",
					L"id")), (gcnew System::Data::Common::DataColumnMapping(L"name", L"name")), (gcnew System::Data::Common::DataColumnMapping(L"description",
						L"description")), (gcnew System::Data::Common::DataColumnMapping(L"category", L"category")), (gcnew System::Data::Common::DataColumnMapping(L"store",
							L"store"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"items", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand;
			// 
			// oleDbDeleteCommand
			// 
			this->oleDbDeleteCommand->CommandText = L"DELETE FROM `items` WHERE ((`id` = \?) AND ((\? = 1 AND `category` IS NULL) OR (`ca"
				L"tegory` = \?)) AND ((\? = 1 AND `store` IS NULL) OR (`store` = \?)))";
			this->oleDbDeleteCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_id",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_category",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"category", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_category",
							System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"category", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_store",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"store", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_store",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"store", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbInsertCommand
			// 
			this->oleDbInsertCommand->CommandText = L"INSERT INTO `items` (`name`, `description`, `category`, `store`) VALUES (\?, \?, \?,"
				L" \?)";
			this->oleDbInsertCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"description", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"description")), (gcnew System::Data::OleDb::OleDbParameter(L"category", System::Data::OleDb::OleDbType::Integer, 0,
							L"category")), (gcnew System::Data::OleDb::OleDbParameter(L"store", System::Data::OleDb::OleDbType::Integer, 0, L"store"))
			});
			// 
			// oleDbUpdateCommand
			// 
			this->oleDbUpdateCommand->CommandText = resources->GetString(L"oleDbUpdateCommand.CommandText");
			this->oleDbUpdateCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(9) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"description", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"description")), (gcnew System::Data::OleDb::OleDbParameter(L"category", System::Data::OleDb::OleDbType::Integer, 0,
							L"category")), (gcnew System::Data::OleDb::OleDbParameter(L"store", System::Data::OleDb::OleDbType::Integer, 0, L"store")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_id",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
								static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_category",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
									L"category", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_category",
										System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
										static_cast<System::Byte>(0), L"category", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_store",
											System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
											L"store", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_store",
												System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
												static_cast<System::Byte>(0), L"store", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(3) { this->dataTable1, this->dataTable2, this->dataTable3 });
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(5) {
				this->dataColumn7, this->dataColumn8,
					this->dataColumn9, this->dataColumn10, this->dataColumn11
			});
			this->dataTable1->TableName = L"items";
			// 
			// dataColumn7
			// 
			this->dataColumn7->ColumnName = L"id";
			this->dataColumn7->DataType = System::Int32::typeid;
			// 
			// dataColumn8
			// 
			this->dataColumn8->ColumnName = L"name";
			// 
			// dataColumn9
			// 
			this->dataColumn9->ColumnName = L"description";
			// 
			// dataColumn10
			// 
			this->dataColumn10->ColumnName = L"category";
			this->dataColumn10->DataType = System::Int32::typeid;
			// 
			// dataColumn11
			// 
			this->dataColumn11->ColumnName = L"store";
			this->dataColumn11->DataType = System::Int32::typeid;
			// 
			// dataTable2
			// 
			this->dataTable2->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(2) { this->dataColumn1, this->dataColumn2 });
			this->dataTable2->TableName = L"categories";
			// 
			// dataColumn1
			// 
			this->dataColumn1->ColumnName = L"id";
			this->dataColumn1->DataType = System::Int32::typeid;
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"name";
			// 
			// dataTable3
			// 
			this->dataTable3->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(4) {
				this->dataColumn3, this->dataColumn4,
					this->dataColumn5, this->dataColumn6
			});
			this->dataTable3->TableName = L"stories";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"id";
			this->dataColumn3->DataType = System::Int32::typeid;
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"name";
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"description";
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"site";
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = this->bindingNavigatorAddNewItem;
			this->bindingNavigator1->BindingSource = this->bindingSource1;
			this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
			this->bindingNavigator1->DeleteItem = this->bindingNavigatorDeleteItem;
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->bindingNavigatorMoveFirstItem,
					this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem,
					this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2,
					this->bindingNavigatorAddNewItem, this->bindingNavigatorDeleteItem
			});
			this->bindingNavigator1->Location = System::Drawing::Point(0, 0);
			this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
			this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
			this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
			this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
			this->bindingNavigator1->Size = System::Drawing::Size(550, 25);
			this->bindingNavigator1->TabIndex = 1;
			this->bindingNavigator1->Text = L"bindingNavigator1";
			this->bindingNavigator1->RefreshItems += gcnew System::EventHandler(this, &MyForm::bindingNavigator1_RefreshItems);
			// 
			// bindingNavigatorAddNewItem
			// 
			this->bindingNavigatorAddNewItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorAddNewItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorAddNewItem.Image")));
			this->bindingNavigatorAddNewItem->Name = L"bindingNavigatorAddNewItem";
			this->bindingNavigatorAddNewItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorAddNewItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorAddNewItem->Text = L"Добавить";
			// 
			// bindingSource1
			// 
			this->bindingSource1->DataMember = L"items";
			this->bindingSource1->DataSource = this->dataSet1;
			this->bindingSource1->CurrentChanged += gcnew System::EventHandler(this, &MyForm::bindingSource1_CurrentChanged);
			// 
			// bindingNavigatorCountItem
			// 
			this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
			this->bindingNavigatorCountItem->Size = System::Drawing::Size(35, 22);
			this->bindingNavigatorCountItem->Text = L"of {0}";
			this->bindingNavigatorCountItem->ToolTipText = L"Общее число элементов";
			// 
			// bindingNavigatorDeleteItem
			// 
			this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
			this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
			this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorDeleteItem->Text = L"Удалить";
			// 
			// bindingNavigatorMoveFirstItem
			// 
			this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
			this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
			this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveFirstItem->Text = L"Переместить в начало";
			// 
			// bindingNavigatorMovePreviousItem
			// 
			this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
			this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
			this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMovePreviousItem->Text = L"Переместить назад";
			// 
			// bindingNavigatorSeparator
			// 
			this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// bindingNavigatorPositionItem
			// 
			this->bindingNavigatorPositionItem->AccessibleName = L"Положение";
			this->bindingNavigatorPositionItem->AutoSize = false;
			this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 23);
			this->bindingNavigatorPositionItem->Text = L"0";
			this->bindingNavigatorPositionItem->ToolTipText = L"Текущее положение";
			// 
			// bindingNavigatorSeparator1
			// 
			this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
			this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// bindingNavigatorMoveNextItem
			// 
			this->bindingNavigatorMoveNextItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveNextItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveNextItem.Image")));
			this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
			this->bindingNavigatorMoveNextItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveNextItem->Text = L"Переместить вперед";
			// 
			// bindingNavigatorMoveLastItem
			// 
			this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
			this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
			this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveLastItem->Text = L"Переместить в конец";
			// 
			// bindingNavigatorSeparator2
			// 
			this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
			this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->idDataGridViewTextBoxColumn,
					this->nameDataGridViewTextBoxColumn, this->descriptionDataGridViewTextBoxColumn, this->categoryDataGridViewTextBoxColumn, this->storeDataGridViewTextBoxColumn
			});
			this->dataGridView1->DataSource = this->bindingSource1;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(544, 124);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// idDataGridViewTextBoxColumn
			// 
			this->idDataGridViewTextBoxColumn->DataPropertyName = L"id";
			this->idDataGridViewTextBoxColumn->HeaderText = L"id";
			this->idDataGridViewTextBoxColumn->Name = L"idDataGridViewTextBoxColumn";
			// 
			// nameDataGridViewTextBoxColumn
			// 
			this->nameDataGridViewTextBoxColumn->DataPropertyName = L"name";
			this->nameDataGridViewTextBoxColumn->HeaderText = L"name";
			this->nameDataGridViewTextBoxColumn->Name = L"nameDataGridViewTextBoxColumn";
			// 
			// descriptionDataGridViewTextBoxColumn
			// 
			this->descriptionDataGridViewTextBoxColumn->DataPropertyName = L"description";
			this->descriptionDataGridViewTextBoxColumn->HeaderText = L"description";
			this->descriptionDataGridViewTextBoxColumn->Name = L"descriptionDataGridViewTextBoxColumn";
			// 
			// categoryDataGridViewTextBoxColumn
			// 
			this->categoryDataGridViewTextBoxColumn->DataPropertyName = L"category";
			this->categoryDataGridViewTextBoxColumn->HeaderText = L"category";
			this->categoryDataGridViewTextBoxColumn->Name = L"categoryDataGridViewTextBoxColumn";
			// 
			// storeDataGridViewTextBoxColumn
			// 
			this->storeDataGridViewTextBoxColumn->DataPropertyName = L"store";
			this->storeDataGridViewTextBoxColumn->HeaderText = L"store";
			this->storeDataGridViewTextBoxColumn->Name = L"storeDataGridViewTextBoxColumn";
			// 
			// save
			// 
			this->save->Location = System::Drawing::Point(473, 184);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(75, 23);
			this->save->TabIndex = 4;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &MyForm::save_Click);
			// 
			// oleDbSelectCommand2
			// 
			this->oleDbSelectCommand2->CommandText = L"SELECT        id, name, description, category, store\r\nFROM            items\r\nWHER"
				L"E        (name LIKE \?)";
			this->oleDbSelectCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::WChar, 1024, L"name"))
			});
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `items` (`name`, `description`, `category`, `store`) VALUES (\?, \?, \?,"
				L" \?)";
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"description", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"description")), (gcnew System::Data::OleDb::OleDbParameter(L"category", System::Data::OleDb::OleDbType::Integer, 0,
							L"category")), (gcnew System::Data::OleDb::OleDbParameter(L"store", System::Data::OleDb::OleDbType::Integer, 0, L"store"))
			});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(9) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"description", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"description")), (gcnew System::Data::OleDb::OleDbParameter(L"category", System::Data::OleDb::OleDbType::Integer, 0,
							L"category")), (gcnew System::Data::OleDb::OleDbParameter(L"store", System::Data::OleDb::OleDbType::Integer, 0, L"store")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_id",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
								static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_category",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
									L"category", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_category",
										System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
										static_cast<System::Byte>(0), L"category", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_store",
											System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
											L"store", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_store",
												System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
												static_cast<System::Byte>(0), L"store", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = L"DELETE FROM `items` WHERE ((`id` = \?) AND ((\? = 1 AND `category` IS NULL) OR (`ca"
				L"tegory` = \?)) AND ((\? = 1 AND `store` IS NULL) OR (`store` = \?)))";
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_id",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_category",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"category", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_category",
							System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"category", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_store",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"store", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_store",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"store", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDataAdapter2
			// 
			this->oleDbDataAdapter2->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter2->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter2->SelectCommand = this->oleDbSelectCommand2;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__2 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(5) {
				(gcnew System::Data::Common::DataColumnMapping(L"id",
					L"id")), (gcnew System::Data::Common::DataColumnMapping(L"name", L"name")), (gcnew System::Data::Common::DataColumnMapping(L"description",
						L"description")), (gcnew System::Data::Common::DataColumnMapping(L"category", L"category")), (gcnew System::Data::Common::DataColumnMapping(L"store",
							L"store"))
			};
			this->oleDbDataAdapter2->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"items", __mcTemp__2))
			});
			this->oleDbDataAdapter2->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// search
			// 
			this->search->Location = System::Drawing::Point(468, 5);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(75, 20);
			this->search->TabIndex = 6;
			this->search->Text = L"Search";
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &MyForm::search_Click);
			// 
			// textBox2
			// 
			this->textBox2->DataBindings->Add((gcnew System::Windows::Forms::Binding(L"Text", this->bindingSource1, L"name", true)));
			this->textBox2->Location = System::Drawing::Point(362, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 184);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(238, 184);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввід";
			// 
			// textBox4
			// 
			this->textBox4->DataBindings->Add((gcnew System::Windows::Forms::Binding(L"Text", this->bindingSource1, L"store", true)));
			this->textBox4->Location = System::Drawing::Point(75, 137);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Магазин";
			// 
			// textBox1
			// 
			this->textBox1->DataBindings->Add((gcnew System::Windows::Forms::Binding(L"Text", this->bindingSource1, L"category", true)));
			this->textBox1->Location = System::Drawing::Point(75, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Категорія";
			// 
			// richTextBox1
			// 
			this->richTextBox1->DataBindings->Add((gcnew System::Windows::Forms::Binding(L"Text", this->bindingSource1, L"description", true)));
			this->richTextBox1->Location = System::Drawing::Point(75, 55);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(100, 50);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Опис";
			// 
			// textBox3
			// 
			this->textBox3->DataBindings->Add((gcnew System::Windows::Forms::Binding(L"Text", this->bindingSource1, L"name", true)));
			this->textBox3->Location = System::Drawing::Point(75, 25);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ім\'я";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(550, 150);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(542, 124);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"items";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(542, 124);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"categories";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoGenerateColumns = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->idDataGridViewTextBoxColumn1,
					this->nameDataGridViewTextBoxColumn1
			});
			this->dataGridView2->DataSource = this->bindingSource2;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(544, 124);
			this->dataGridView2->TabIndex = 0;
			// 
			// idDataGridViewTextBoxColumn1
			// 
			this->idDataGridViewTextBoxColumn1->DataPropertyName = L"id";
			this->idDataGridViewTextBoxColumn1->HeaderText = L"id";
			this->idDataGridViewTextBoxColumn1->Name = L"idDataGridViewTextBoxColumn1";
			// 
			// nameDataGridViewTextBoxColumn1
			// 
			this->nameDataGridViewTextBoxColumn1->DataPropertyName = L"name";
			this->nameDataGridViewTextBoxColumn1->HeaderText = L"name";
			this->nameDataGridViewTextBoxColumn1->Name = L"nameDataGridViewTextBoxColumn1";
			// 
			// bindingSource2
			// 
			this->bindingSource2->DataMember = L"categories";
			this->bindingSource2->DataSource = this->dataSet2;
			// 
			// dataSet2
			// 
			this->dataSet2->DataSetName = L"NewDataSet";
			this->dataSet2->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable4 });
			// 
			// dataTable4
			// 
			this->dataTable4->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(2) { this->dataColumn12, this->dataColumn13 });
			this->dataTable4->TableName = L"categories";
			// 
			// dataColumn12
			// 
			this->dataColumn12->ColumnName = L"id";
			this->dataColumn12->DataType = System::Int32::typeid;
			// 
			// dataColumn13
			// 
			this->dataColumn13->ColumnName = L"name";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView4);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(542, 124);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"stories";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AutoGenerateColumns = false;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->idDataGridViewTextBoxColumn2,
					this->nameDataGridViewTextBoxColumn2, this->descriptionDataGridViewTextBoxColumn1, this->siteDataGridViewTextBoxColumn
			});
			this->dataGridView4->DataSource = this->bindingSource3;
			this->dataGridView4->Location = System::Drawing::Point(0, 0);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(546, 128);
			this->dataGridView4->TabIndex = 1;
			// 
			// idDataGridViewTextBoxColumn2
			// 
			this->idDataGridViewTextBoxColumn2->DataPropertyName = L"id";
			this->idDataGridViewTextBoxColumn2->HeaderText = L"id";
			this->idDataGridViewTextBoxColumn2->Name = L"idDataGridViewTextBoxColumn2";
			// 
			// nameDataGridViewTextBoxColumn2
			// 
			this->nameDataGridViewTextBoxColumn2->DataPropertyName = L"name";
			this->nameDataGridViewTextBoxColumn2->HeaderText = L"name";
			this->nameDataGridViewTextBoxColumn2->Name = L"nameDataGridViewTextBoxColumn2";
			// 
			// descriptionDataGridViewTextBoxColumn1
			// 
			this->descriptionDataGridViewTextBoxColumn1->DataPropertyName = L"description";
			this->descriptionDataGridViewTextBoxColumn1->HeaderText = L"description";
			this->descriptionDataGridViewTextBoxColumn1->Name = L"descriptionDataGridViewTextBoxColumn1";
			// 
			// siteDataGridViewTextBoxColumn
			// 
			this->siteDataGridViewTextBoxColumn->DataPropertyName = L"site";
			this->siteDataGridViewTextBoxColumn->HeaderText = L"site";
			this->siteDataGridViewTextBoxColumn->Name = L"siteDataGridViewTextBoxColumn";
			// 
			// bindingSource3
			// 
			this->bindingSource3->DataMember = L"stories";
			this->bindingSource3->DataSource = this->dataSet3;
			// 
			// dataSet3
			// 
			this->dataSet3->DataSetName = L"NewDataSet";
			this->dataSet3->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable5 });
			// 
			// dataTable5
			// 
			this->dataTable5->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(4) {
				this->dataColumn14, this->dataColumn15,
					this->dataColumn16, this->dataColumn17
			});
			this->dataTable5->TableName = L"stories";
			// 
			// dataColumn14
			// 
			this->dataColumn14->ColumnName = L"id";
			this->dataColumn14->DataType = System::Int32::typeid;
			// 
			// dataColumn15
			// 
			this->dataColumn15->ColumnName = L"name";
			// 
			// dataColumn16
			// 
			this->dataColumn16->ColumnName = L"description";
			// 
			// dataColumn17
			// 
			this->dataColumn17->ColumnName = L"site";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(0, 0);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(544, 124);
			this->dataGridView3->TabIndex = 0;
			// 
			// oleDbCommand5
			// 
			this->oleDbCommand5->CommandText = L"SELECT        id, name, description, category, store\r\nFROM            items\r\nWHER"
				L"E        (name LIKE \?)";
			this->oleDbCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::WChar, 1024, L"name"))
			});
			// 
			// oleDbCommand6
			// 
			this->oleDbCommand6->CommandText = L"INSERT INTO `items` (`name`, `description`, `category`, `store`) VALUES (\?, \?, \?,"
				L" \?)";
			this->oleDbCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"description", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"description")), (gcnew System::Data::OleDb::OleDbParameter(L"category", System::Data::OleDb::OleDbType::Integer, 0,
							L"category")), (gcnew System::Data::OleDb::OleDbParameter(L"store", System::Data::OleDb::OleDbType::Integer, 0, L"store"))
			});
			// 
			// oleDbCommand7
			// 
			this->oleDbCommand7->CommandText = resources->GetString(L"oleDbCommand7.CommandText");
			this->oleDbCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(9) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"description", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"description")), (gcnew System::Data::OleDb::OleDbParameter(L"category", System::Data::OleDb::OleDbType::Integer, 0,
							L"category")), (gcnew System::Data::OleDb::OleDbParameter(L"store", System::Data::OleDb::OleDbType::Integer, 0, L"store")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_id",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
								static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_category",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
									L"category", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_category",
										System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
										static_cast<System::Byte>(0), L"category", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_store",
											System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
											L"store", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_store",
												System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
												static_cast<System::Byte>(0), L"store", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbCommand8
			// 
			this->oleDbCommand8->CommandText = L"DELETE FROM `items` WHERE ((`id` = \?) AND ((\? = 1 AND `category` IS NULL) OR (`ca"
				L"tegory` = \?)) AND ((\? = 1 AND `store` IS NULL) OR (`store` = \?)))";
			this->oleDbCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_id",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_category",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"category", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_category",
							System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"category", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_store",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"store", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_store",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"store", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbCommand1
			// 
			this->oleDbCommand1->CommandText = L"SELECT        categories.*\r\nFROM            categories";
			this->oleDbCommand1->Connection = this->oleDbConnection2;
			// 
			// oleDbConnection2
			// 
			this->oleDbConnection2->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=\"C:\\Users\\Comp-226\\Documents\\Visual "
				L"Studio 2015\\Projects\\PracrticWork\\Debug\\database.mdb\"";
			// 
			// oleDbDataAdapter3
			// 
			this->oleDbDataAdapter3->DeleteCommand = this->oleDbCommand2;
			this->oleDbDataAdapter3->InsertCommand = this->oleDbCommand3;
			this->oleDbDataAdapter3->SelectCommand = this->oleDbCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__3 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {
				(gcnew System::Data::Common::DataColumnMapping(L"id",
					L"id")), (gcnew System::Data::Common::DataColumnMapping(L"name", L"name"))
			};
			this->oleDbDataAdapter3->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"categories", __mcTemp__3))
			});
			this->oleDbDataAdapter3->UpdateCommand = this->oleDbCommand4;
			// 
			// oleDbCommand2
			// 
			this->oleDbCommand2->CommandText = L"DELETE FROM `categories` WHERE ((`id` = \?) AND ((\? = 1 AND `name` IS NULL) OR (`n"
				L"ame` = \?)))";
			this->oleDbCommand2->Connection = this->oleDbConnection2;
			this->oleDbCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_id",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_name",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_name",
							System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"name", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbCommand3
			// 
			this->oleDbCommand3->CommandText = L"INSERT INTO `categories` (`name`) VALUES (\?)";
			this->oleDbCommand3->Connection = this->oleDbConnection2;
			this->oleDbCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"name"))
			});
			// 
			// oleDbCommand4
			// 
			this->oleDbCommand4->CommandText = L"UPDATE `categories` SET `name` = \? WHERE ((`id` = \?) AND ((\? = 1 AND `name` IS NU"
				L"LL) OR (`name` = \?)))";
			this->oleDbCommand4->Connection = this->oleDbConnection2;
			this->oleDbCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_id", System::Data::OleDb::OleDbType::Integer,
						0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original,
						nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_name", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
							static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"name", System::Data::DataRowVersion::Original, true, nullptr)),
					(gcnew System::Data::OleDb::OleDbParameter(L"Original_name", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input,
						false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"name", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbCommand9
			// 
			this->oleDbCommand9->CommandText = L"SELECT        id, name, description, category, store\r\nFROM            items\r\nWHER"
				L"E        (name LIKE \?)";
			this->oleDbCommand9->Connection = this->oleDbConnection2;
			this->oleDbCommand9->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::WChar, 1024, L"name"))
			});
			// 
			// oleDbCommand10
			// 
			this->oleDbCommand10->CommandText = L"INSERT INTO `items` (`name`, `description`, `category`, `store`) VALUES (\?, \?, \?,"
				L" \?)";
			this->oleDbCommand10->Connection = this->oleDbConnection2;
			this->oleDbCommand10->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"description", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"description")), (gcnew System::Data::OleDb::OleDbParameter(L"category", System::Data::OleDb::OleDbType::Integer, 0,
							L"category")), (gcnew System::Data::OleDb::OleDbParameter(L"store", System::Data::OleDb::OleDbType::Integer, 0, L"store"))
			});
			// 
			// oleDbCommand11
			// 
			this->oleDbCommand11->CommandText = resources->GetString(L"oleDbCommand11.CommandText");
			this->oleDbCommand11->Connection = this->oleDbConnection2;
			this->oleDbCommand11->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(9) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"description", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"description")), (gcnew System::Data::OleDb::OleDbParameter(L"category", System::Data::OleDb::OleDbType::Integer, 0,
							L"category")), (gcnew System::Data::OleDb::OleDbParameter(L"store", System::Data::OleDb::OleDbType::Integer, 0, L"store")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_id",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
								static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_category",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
									L"category", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_category",
										System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
										static_cast<System::Byte>(0), L"category", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_store",
											System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
											L"store", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_store",
												System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
												static_cast<System::Byte>(0), L"store", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbCommand12
			// 
			this->oleDbCommand12->CommandText = L"DELETE FROM `items` WHERE ((`id` = \?) AND ((\? = 1 AND `category` IS NULL) OR (`ca"
				L"tegory` = \?)) AND ((\? = 1 AND `store` IS NULL) OR (`store` = \?)))";
			this->oleDbCommand12->Connection = this->oleDbConnection2;
			this->oleDbCommand12->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_id",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_category",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"category", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_category",
							System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"category", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_store",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"store", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_store",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"store", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbCommand13
			// 
			this->oleDbCommand13->CommandText = L"SELECT        id, name, description, category, store\r\nFROM            items\r\nWHER"
				L"E        (name LIKE \?)";
			this->oleDbCommand13->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(1) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::WChar, 1024, L"name"))
			});
			// 
			// oleDbCommand14
			// 
			this->oleDbCommand14->CommandText = L"INSERT INTO `items` (`name`, `description`, `category`, `store`) VALUES (\?, \?, \?,"
				L" \?)";
			this->oleDbCommand14->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"description", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"description")), (gcnew System::Data::OleDb::OleDbParameter(L"category", System::Data::OleDb::OleDbType::Integer, 0,
							L"category")), (gcnew System::Data::OleDb::OleDbParameter(L"store", System::Data::OleDb::OleDbType::Integer, 0, L"store"))
			});
			// 
			// oleDbCommand15
			// 
			this->oleDbCommand15->CommandText = L"DELETE FROM `items` WHERE ((`id` = \?) AND ((\? = 1 AND `category` IS NULL) OR (`ca"
				L"tegory` = \?)) AND ((\? = 1 AND `store` IS NULL) OR (`store` = \?)))";
			this->oleDbCommand15->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_id",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_category",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"category", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_category",
							System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"category", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_store",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"store", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_store",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"store", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDataAdapter4
			// 
			this->oleDbDataAdapter4->DeleteCommand = this->oleDbCommand16;
			this->oleDbDataAdapter4->InsertCommand = this->oleDbCommand17;
			this->oleDbDataAdapter4->SelectCommand = this->oleDbCommand18;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__4 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {
				(gcnew System::Data::Common::DataColumnMapping(L"id",
					L"id")), (gcnew System::Data::Common::DataColumnMapping(L"name", L"name")), (gcnew System::Data::Common::DataColumnMapping(L"description",
						L"description")), (gcnew System::Data::Common::DataColumnMapping(L"site", L"site"))
			};
			this->oleDbDataAdapter4->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"stories", __mcTemp__4))
			});
			this->oleDbDataAdapter4->UpdateCommand = this->oleDbCommand19;
			// 
			// oleDbCommand16
			// 
			this->oleDbCommand16->CommandText = L"DELETE FROM `stories` WHERE ((`id` = \?) AND ((\? = 1 AND `name` IS NULL) OR (`name"
				L"` = \?)) AND ((\? = 1 AND `site` IS NULL) OR (`site` = \?)))";
			this->oleDbCommand16->Connection = this->oleDbConnection2;
			this->oleDbCommand16->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_id",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_name",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_name",
							System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"name", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_site",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"site", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_site",
									System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"site", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbCommand17
			// 
			this->oleDbCommand17->CommandText = L"INSERT INTO `stories` (`name`, `description`, `site`) VALUES (\?, \?, \?)";
			this->oleDbCommand17->Connection = this->oleDbConnection2;
			this->oleDbCommand17->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"description", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"description")), (gcnew System::Data::OleDb::OleDbParameter(L"site", System::Data::OleDb::OleDbType::VarWChar, 0, L"site"))
			});
			// 
			// oleDbCommand18
			// 
			this->oleDbCommand18->CommandText = L"SELECT        stories.*\r\nFROM            stories";
			this->oleDbCommand18->Connection = this->oleDbConnection2;
			// 
			// oleDbCommand19
			// 
			this->oleDbCommand19->CommandText = L"UPDATE `stories` SET `name` = \?, `description` = \?, `site` = \? WHERE ((`id` = \?) "
				L"AND ((\? = 1 AND `name` IS NULL) OR (`name` = \?)) AND ((\? = 1 AND `site` IS NULL)"
				L" OR (`site` = \?)))";
			this->oleDbCommand19->Connection = this->oleDbConnection2;
			this->oleDbCommand19->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(8) {
				(gcnew System::Data::OleDb::OleDbParameter(L"name",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"name")), (gcnew System::Data::OleDb::OleDbParameter(L"description", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"description")), (gcnew System::Data::OleDb::OleDbParameter(L"site", System::Data::OleDb::OleDbType::VarWChar, 0, L"site")),
					(gcnew System::Data::OleDb::OleDbParameter(L"Original_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
						false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"id", System::Data::DataRowVersion::Original, nullptr)),
					(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_name", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
						static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"name", System::Data::DataRowVersion::Original, true, nullptr)),
					(gcnew System::Data::OleDb::OleDbParameter(L"Original_name", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input,
						false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"name", System::Data::DataRowVersion::Original, nullptr)),
					(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_site", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
						static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"site", System::Data::DataRowVersion::Original, true, nullptr)),
					(gcnew System::Data::OleDb::OleDbParameter(L"Original_site", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input,
						false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"site", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbConnection3
			// 
			this->oleDbConnection3->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=\"C:\\Users\\Comp-226\\Documents\\Visual "
				L"Studio 2015\\Projects\\PracrticWork\\Debug\\database.mdb\"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 409);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->search);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->save);
			this->Controls->Add(this->bindingNavigator1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable4))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_FromClosing(System::Object^ sender,
		System::Windows::Forms::FormClosingEventArgs^ e) {
		oleDbDataAdapter1->Update(dataSet1->Tables["items"]);
		oleDbDataAdapter3->Update(dataSet2->Tables["categories"]);
	}
	private: System::Void bindingSource1_CurrentChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void save_Click(System::Object^  sender, System::EventArgs^  e) {
	oleDbDataAdapter1->Update(dataTable1);
}
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

}
private: System::Void search_Click(System::Object^  sender, System::EventArgs^  e) {
	dataSet1->Clear();
	oleDbDataAdapter2->SelectCommand->Parameters["name"]->Value =
		"%" + textBox2->Text + "%";
	oleDbDataAdapter2->Fill(dataTable1);
}
private: System::Void bindingNavigator1_RefreshItems(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void oleDbConnection1_InfoMessage(System::Object^  sender, System::Data::OleDb::OleDbInfoMessageEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
