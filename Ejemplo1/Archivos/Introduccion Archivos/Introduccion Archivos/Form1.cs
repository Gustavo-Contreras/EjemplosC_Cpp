using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO; 



namespace Introduccion_Archivos
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void btnAñadirLog_Click(object sender, EventArgs e)
        {
            string log = " Prueba de log ";
            string tipo = "info ";

            int posicionNuevoLog = dgvLogs.Rows.Add();



            dgvLogs.Rows[posicionNuevoLog].Cells[0].Value = tipo;
            dgvLogs.Rows[posicionNuevoLog].Cells[1].Value = log;




            /*   1)  Defirnir la cadena de Texto
                 2)  llamar al Data griv view 
                 3)  Añadir Fila 
                 4)                             
             */



        }

        private void dgvLogs_CellDoubleClick(object sender, DataGridViewCellEventArgs e)
        {

            
            
                DataGridViewTextBoxCell celdaTipo = (DataGridViewTextBoxCell)dgvLogs.Rows[e.RowIndex].Cells[0];
                DataGridViewTextBoxCell celdaLog = (DataGridViewTextBoxCell)dgvLogs.Rows[e.RowIndex].Cells[1];


            if (celdaTipo.Value != null)
            {
                string tipo = celdaTipo.Value.ToString();
                string log = celdaLog.Value.ToString();

                
                // como usar un message box (mensage de Texto 
                // mensaje 
                //titulo
                //Botones
                //Icono

                MessageBoxIcon icono = MessageBoxIcon.Information;
                MessageBoxButtons botones = MessageBoxButtons.OK;
                MessageBox.Show(log, tipo, botones, icono);
            }
                       
         }

        private void btnLeerDirectorio_Click(object sender, EventArgs e)
        {
            try // cuando todo esta ok
            {
                string path = txbLeerDirectorio.Text;

                // directory 

                DirectoryInfo infoDirectorio = new DirectoryInfo(@path);
               string fechaDeCreacion = infoDirectorio.CreationTime.ToString();
                string nombreCompleto = infoDirectorio.FullName.ToString();
                string directorioPadre =infoDirectorio.Parent.ToString();
                string directorioRaiz = infoDirectorio.Root.ToString();

                EscribirLog("info", fechaDeCreacion, dgvLogs);
                EscribirLog("info", nombreCompleto, dgvLogs);
                EscribirLog("info", directorioPadre, dgvLogs);
                EscribirLog("info", directorioRaiz, dgvLogs);

            }

            catch (Exception error) // cuando ocurre Error
            {
                EscribirLog("error", error.ToString(), dgvLogs);
            }

            void EscribirLog(string tipo, string log,DataGridView dgv)
            {
                int posicionNuevoLog = dgvLogs.Rows.Add();
                dgvLogs.Rows[posicionNuevoLog].Cells[0].Value = tipo;
                dgvLogs.Rows[posicionNuevoLog].Cells[1].Value = log;
            }

        }
    }
}
