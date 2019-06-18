/*
 * Created by SharpDevelop.
 * User: USRGAM
 * Date: 12/06/2019
 * Time: 10:03
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.Drawing;
using System.Windows.Forms;

namespace calculadora
{
	/// <summary>
	/// Description of principal_.
	/// </summary>
	public partial class principal_ : Form
	{
		public principal_()
		{
			//
			// The InitializeComponent() call is required for Windows Forms designer support.
			//
			InitializeComponent();
			
			//
			// TODO: Add constructor code after the InitializeComponent() call.
			//
		}
		void Principal_Load(object sender, EventArgs e)
		{
	
		}
		void CaluladoraToolStripMenuItemClick(object sender, EventArgs e)
		{
		 
			MainForm calculadoraForm=new MainForm();
			calculadoraForm.Show();
			calculadoraForm.MdiParent = this;
			
			
			
			
		}
		void SaliirToolStripMenuItemClick(object sender, EventArgs e)
		{
	
			Application.Exit();
			
		}
	}
}
