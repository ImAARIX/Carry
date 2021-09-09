#pragma once

#include "TransferPage.h"
#include "ConfigPage.h"


namespace Carry {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de BackgroundPage
	/// </summary>

	public ref class BackgroundPage : public System::Windows::Forms::Form
	{
		TransferPage^ transferpage = gcnew TransferPage;
		ConfigPage^ configpage = gcnew ConfigPage;
	public:
		BackgroundPage(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~BackgroundPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;








	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileTransferToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ enterBelowTheFTNAndPressEnterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ debugToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transferPageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configPageToolStripMenuItem;



	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BackgroundPage::typeid));
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->fileTransferToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enterBelowTheFTNAndPressEnterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->debugToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transferPageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configPageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->notifyIcon1->BalloonTipText = L"Right click on the icon to use it";
			this->notifyIcon1->BalloonTipTitle = L"Carry is running";
			this->notifyIcon1->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"Carry";
			this->notifyIcon1->Visible = true;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripMenuItem1,
					this->toolStripSeparator1, this->fileTransferToolStripMenuItem, this->toolStripSeparator2, this->debugToolStripMenuItem, this->quitToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->ShowImageMargin = false;
			this->contextMenuStrip1->Size = System::Drawing::Size(157, 126);
			this->contextMenuStrip1->Text = L"Carry Context Menu";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripMenuItem1->Enabled = false;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(156, 22);
			this->toolStripMenuItem1->Text = L"Carry Context Menu";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(153, 6);
			// 
			// fileTransferToolStripMenuItem
			// 
			this->fileTransferToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->fileTransferToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->enterBelowTheFTNAndPressEnterToolStripMenuItem,
					this->toolStripTextBox1
			});
			this->fileTransferToolStripMenuItem->Name = L"fileTransferToolStripMenuItem";
			this->fileTransferToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->fileTransferToolStripMenuItem->Text = L"File Transfer";
			// 
			// enterBelowTheFTNAndPressEnterToolStripMenuItem
			// 
			this->enterBelowTheFTNAndPressEnterToolStripMenuItem->Enabled = false;
			this->enterBelowTheFTNAndPressEnterToolStripMenuItem->Name = L"enterBelowTheFTNAndPressEnterToolStripMenuItem";
			this->enterBelowTheFTNAndPressEnterToolStripMenuItem->Size = System::Drawing::Size(263, 22);
			this->enterBelowTheFTNAndPressEnterToolStripMenuItem->Text = L"Enter below the FTN and press Enter";
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(195, 23);
			this->toolStripTextBox1->TextBoxTextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->toolStripTextBox1->Enter += gcnew System::EventHandler(this, &BackgroundPage::toolStripTextBox1_Enter);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(153, 6);
			// 
			// debugToolStripMenuItem
			// 
			this->debugToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openToolStripMenuItem });
			this->debugToolStripMenuItem->Name = L"debugToolStripMenuItem";
			this->debugToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->debugToolStripMenuItem->Text = L"Debug";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->transferPageToolStripMenuItem,
					this->configPageToolStripMenuItem
			});
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			// 
			// transferPageToolStripMenuItem
			// 
			this->transferPageToolStripMenuItem->Name = L"transferPageToolStripMenuItem";
			this->transferPageToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->transferPageToolStripMenuItem->Text = L"TransferPage";
			this->transferPageToolStripMenuItem->Click += gcnew System::EventHandler(this, &BackgroundPage::transferPageToolStripMenuItem_Click);
			// 
			// configPageToolStripMenuItem
			// 
			this->configPageToolStripMenuItem->Name = L"configPageToolStripMenuItem";
			this->configPageToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->configPageToolStripMenuItem->Text = L"ConfigPage";
			this->configPageToolStripMenuItem->Click += gcnew System::EventHandler(this, &BackgroundPage::configPageToolStripMenuItem_Click);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->quitToolStripMenuItem->Text = L"Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &BackgroundPage::quitToolStripMenuItem_Click);
			// 
			// BackgroundPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 300);
			this->ControlBox = false;
			this->Enabled = false;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BackgroundPage";
			this->Opacity = 0;
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AARIXutilities";
			this->Load += gcnew System::EventHandler(this, &BackgroundPage::BackgroundPage_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BackgroundPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void quitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void toolStripTextBox1_Enter(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void transferPageToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	transferpage->Show();
}
private: System::Void configPageToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	configpage->Opacity = 0;
	configpage->Show();
}
};
}
