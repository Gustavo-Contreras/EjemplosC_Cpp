﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using System.Text;



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
                MessageBoxIcon icono;

                if(tipo=="error")
                {
                    icono = MessageBoxIcon.Error;
                }
                else
                {
                    icono = MessageBoxIcon.Information;
                }
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

               

                EscribirLog("info","Leyendo Directorio:  " + fechaDeCreacion, dgvLogs);
                EscribirLog("info", "Leyendo Directorio: " + nombreCompleto, dgvLogs);
                EscribirLog("info", "Leyendo Directorio: " + directorioPadre, dgvLogs);
                EscribirLog("info", "Leyendo Directorio: " + directorioRaiz, dgvLogs);
                FileInfo[] archivosDiectorio = infoDirectorio.GetFiles();

                foreach(FileInfo archivo in archivosDiectorio  )
                {

                    EscribirLog("info", "Archivos" + archivo.CreationTime, dgvLogs);
                    EscribirLog("info", "Archivos" + archivo.FullName, dgvLogs);
                    EscribirLog("info", "Archivos" + archivo.Extension, dgvLogs);
                    EscribirLog("info", "Archivos" + archivo.LastAccessTime, dgvLogs);
                    EscribirLog("info", "Archivos" + archivo.IsReadOnly, dgvLogs);
                }
            }

            catch (Exception error) // cuando ocurre Error
            {
                EscribirLog("error", error.ToString(), dgvLogs);
            }

            

        }
        void EscribirLog(string tipo, string log, DataGridView dgv)
        {
            int posicionNuevoLog = dgvLogs.Rows.Add();
            dgvLogs.Rows[posicionNuevoLog].Cells[0].Value = tipo;
            dgvLogs.Rows[posicionNuevoLog].Cells[1].Value = log;

            if (tipo == "error")
            {
                dgvLogs.Rows[posicionNuevoLog].Cells[0].Style.BackColor = Color.Red;
            }
            else
            {
                dgvLogs.Rows[posicionNuevoLog].Cells[0].Style.BackColor = Color.AliceBlue;
            }

        }
        private void dgvLogs_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

       void btnListarDirectorio_Click(object sender, EventArgs e)
        {
            try
            {
                string path = txbListarDirectorio.Text; 
                string[] arregloDirectorios = Directory.GetDirectories(path);

                int numeroDiectorios = arregloDirectorios.Length;

                EscribirLog("info", "Numero de Directorios" + numeroDiectorios.ToString(), dgvLogs);

                foreach(string directorio  in arregloDirectorios )
                {
                    EscribirLog("info ", "directorios:  " + directorio, dgvLogs);
                }
            }
            catch(Exception error)
            {
                EscribirLog("error", error.ToString(), dgvLogs);
            }
           
        }

        
        private void button1_Click(object sender, EventArgs e)
        {
            
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void txbCrearDirectorio_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnCrearDirectorio_Click(object sender, EventArgs e)
        {
            try
            {
                string path = txbCrearDirectorio.Text;
                Directory.CreateDirectory(path);

                EscribirLog("info", "crear Directorio: Se creo el directorio  " + path, dgvLogs);


            }
            catch(Exception error)
            {

                EscribirLog("error", error.ToString(), dgvLogs);
            }
        }

      
        private void btnCrearArchivo_Click(object sender, EventArgs e)
    {    
            try
            {
                string path = txbCrearArchivo.Text;

                
              

                StreamWriter escritura = File.CreateText(@path);

                FileStream lectura = File.OpenRead(path);

                StreamReader LecturaArchivo = File.OpenText(path);

                // funciones para leer texto.

                string textoLeido = File.ReadAllText(path);

                escritura.WriteLine("Hola archivo");
                escritura.WriteLine("Segunda linea");
                escritura.WriteLine("Tercera linea");


                // Siempre cerrar el archivo despues de usarlo
                escritura.Close();


                using (StreamWriter escrituraDos = File.CreateText(@path))
                {
                    escrituraDos.WriteLine("Hola archivo");
                    escrituraDos.WriteLine("Segunda linea");
                    escrituraDos.WriteLine("Tercera linea");
                }
           

                

           EscribirLog("info", "Escritura Archivo: se escribio el archivo", dgvLogs);

            }
            catch (Exception error)
            {
                EscribirLog("error", error.ToString(), dgvLogs);
            }
        }

        private void btnCopiarArchvios_Click(object sender, EventArgs e)
        {
            try
            {
                string pathInicio = txbOrigen.Text;
                string pathfin = txbDestino.Text;

                CopiarRecursivo(pathInicio, pathfin);
            }
            catch (Exception)
            {
                EscribirLog("error", "no existe directorio", dgvLogs);
            }

            void CopiarRecursivo(string pathInicio, string pathFin)
            {
                bool existe = Directory.Exists(pathInicio);

                if (existe == true)

                {
                    string directorioPadre = Path.GetDirectoryName(pathInicio);
                    string directorioIncial = pathInicio.Substring(directorioPadre.Length);
                    string nuevoDirectorio = pathFin + directorioIncial;

                    Directory.CreateDirectory(nuevoDirectorio);
                    // Archivos
                    string[] archivosEncontrado = Directory.GetFiles(pathInicio);
                    foreach (string archivos in archivosEncontrado)
                    {
                        string nombreArchivo = archivos.Substring(pathInicio.Length);
                        File.Copy(archivos, nuevoDirectorio + nombreArchivo);

                    }

                    string[] directoriosInternos = Directory.GetDirectories(pathInicio);
                    foreach (string directorio in directoriosInternos)
                    {
                        CopiarRecursivo(directorio, nuevoDirectorio);
                    }
                }
            }


        }

                                                                   
          
         private void btnStramW_Click(object sender, EventArgs e)
          {
              string path = txbStreamW.Text;
              Stream writingStream = new FileStream(path, FileMode.Create);
              try
              {



                  if (writingStream.CanWrite)
                  {
                      byte[] miNombreBytes = new byte[]
                      {
                       71,//G
                       117,//u
                       115,//s
                       116,//t
                       97,//a
                       118,//v
                       111,//0

                      };

                      writingStream.Write
                          (
                              miNombreBytes,
                              0,
                              miNombreBytes.Length

                          );
                      writingStream.WriteByte(33); // !
                      EscribirLog("info", "Escribimos el Archivo", dgvLogs);

                  }
                  else
                  {
                      EscribirLog("error", "No se puede escribir", dgvLogs);
                  }

                  writingStream.Close();





              }


              catch (Exception error)
              {
                  EscribirLog("error",error.ToString(), dgvLogs);
              }

              finally
              {
                  writingStream.Close();
              }

          }

          private void BtnStreamr_Click(object sender, EventArgs e)
          {
              string path = txbStreamW.Text;
              try
              {
                  using (Stream readingStream = new FileStream(@path, FileMode.Open))
                  {
                      byte[] arregloTemporal = new byte[3];
                      UTF8Encoding codificacion = new UTF8Encoding(true);

                      //readingStream.Seek -->> Moverse de posiccion

                      int posicion = 0;
                      while ((posicion = readingStream.Read(
                          arregloTemporal,
                          0,
                          arregloTemporal.Length
                          )) > 0)
                      {

                          {

                              string caracter = codificacion.GetString
                                  (
                                      arregloTemporal,
                                      0,
                                      arregloTemporal.Length
                                  );
                              EscribirLog("info", "Caracter: " + caracter, dgvLogs);
                          }
                      }
                  }
              }
              catch(Exception error)
              {
                  EscribirLog("error", error.ToString(), dgvLogs);
              }

              
        }

        private void textBox1_TextChanged_1(object sender, EventArgs e)
        {

        }

        private void btnOrdenarArregloBS_Click(object sender, EventArgs e)
        {
            string arregloTexto = txbArreglo.Text;
            string[] elementosString = arregloTexto.Split(',');
            int longitudArreglo = elementosString.Length-1;

            int[] elementos= new int[longitudArreglo];
            int contador = 0;

            foreach (string elementoString in elementosString)
            { 
              elementos [contador] = Int32.Parse(elementoString);

                EscribirLog("info", elementos[contador].ToString(), dgvLogs);
                contador++;
            }

                for( int iPrimerelemento= 0;
                iPrimerelemento<longitudArreglo;
                iPrimerelemento++)//PRIMER FOR
                {

                    for (int iSegundoelemento = 0;
                    iSegundoelemento < longitudArreglo - iPrimerelemento ;
                    iSegundoelemento++) // SEGUNDO FOR 

                     {
                        int primerNumero = elementos[iSegundoelemento];
                        int segundoNumero = elementos[iSegundoelemento + 1 ];

                        if(segundoNumero<primerNumero) // COMPARACION 
                        {
                        int valorTemporal =primerNumero;
                        elementos[iPrimerelemento] = elementos[iSegundoelemento];
                        elementos[iSegundoelemento] = primerNumero;
                        }//TERMINA LA COMPARACION 

                     }//TERMINA SEGUNDO FOR

                }//TERMINA PRIMER FOR

        }
    }
}
