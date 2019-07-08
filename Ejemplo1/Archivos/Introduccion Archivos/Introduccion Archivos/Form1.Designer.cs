using System;

namespace Introduccion_Archivos
{
    partial class Form1
    {
        /// <summary>
        /// Variable del diseñador necesaria.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        /// <param name="disposing">true si los recursos administrados se deben desechar; false en caso contrario.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código generado por el Diseñador de Windows Forms

        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido de este método con el editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.dgvLogs = new System.Windows.Forms.DataGridView();
            this.tipo = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.log = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.btnAñadirLog = new System.Windows.Forms.Button();
            this.btnLeerDirectorio = new System.Windows.Forms.Button();
            this.txbLeerDirectorio = new System.Windows.Forms.TextBox();
            this.btnListarDirectorio = new System.Windows.Forms.Button();
            this.txbListarDirectorio = new System.Windows.Forms.TextBox();
            this.txbCrearArchivo = new System.Windows.Forms.TextBox();
            this.btnCrearDirectorio = new System.Windows.Forms.Button();
            this.txbCrearDirectorio = new System.Windows.Forms.TextBox();
            this.btnCrearArchivo = new System.Windows.Forms.Button();
            this.btnCopiarArchvios = new System.Windows.Forms.Button();
            this.txbDestino = new System.Windows.Forms.TextBox();
            this.txbOrigen = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.dgvLogs)).BeginInit();
            this.SuspendLayout();
            // 
            // dgvLogs
            // 
            this.dgvLogs.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Left | System.Windows.Forms.AnchorStyles.Right)));
            this.dgvLogs.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvLogs.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.tipo,
            this.log});
            this.dgvLogs.Location = new System.Drawing.Point(12, 136);
            this.dgvLogs.Name = "dgvLogs";
            this.dgvLogs.Size = new System.Drawing.Size(966, 205);
            this.dgvLogs.TabIndex = 0;
            this.dgvLogs.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dgvLogs_CellContentClick);
            this.dgvLogs.CellDoubleClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dgvLogs_CellDoubleClick);
            // 
            // tipo
            // 
            this.tipo.HeaderText = "Tipo Log";
            this.tipo.Name = "tipo";
            this.tipo.ReadOnly = true;
            // 
            // log
            // 
            this.log.HeaderText = "Descripcion ";
            this.log.Name = "log";
            this.log.ReadOnly = true;
            // 
            // btnAñadirLog
            // 
            this.btnAñadirLog.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Left | System.Windows.Forms.AnchorStyles.Right)));
            this.btnAñadirLog.Location = new System.Drawing.Point(12, 364);
            this.btnAñadirLog.Name = "btnAñadirLog";
            this.btnAñadirLog.Size = new System.Drawing.Size(397, 23);
            this.btnAñadirLog.TabIndex = 1;
            this.btnAñadirLog.Text = "Añadir log";
            this.btnAñadirLog.UseVisualStyleBackColor = true;
            this.btnAñadirLog.Click += new System.EventHandler(this.btnAñadirLog_Click);
            // 
            // btnLeerDirectorio
            // 
            this.btnLeerDirectorio.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Left | System.Windows.Forms.AnchorStyles.Right)));
            this.btnLeerDirectorio.Location = new System.Drawing.Point(12, 90);
            this.btnLeerDirectorio.Name = "btnLeerDirectorio";
            this.btnLeerDirectorio.Size = new System.Drawing.Size(187, 23);
            this.btnLeerDirectorio.TabIndex = 2;
            this.btnLeerDirectorio.Text = "Leer Directorio";
            this.btnLeerDirectorio.UseVisualStyleBackColor = true;
            this.btnLeerDirectorio.Click += new System.EventHandler(this.btnLeerDirectorio_Click);
            // 
            // txbLeerDirectorio
            // 
            this.txbLeerDirectorio.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Left | System.Windows.Forms.AnchorStyles.Right)));
            this.txbLeerDirectorio.Location = new System.Drawing.Point(12, 35);
            this.txbLeerDirectorio.Name = "txbLeerDirectorio";
            this.txbLeerDirectorio.Size = new System.Drawing.Size(187, 20);
            this.txbLeerDirectorio.TabIndex = 3;
            // 
            // btnListarDirectorio
            // 
            this.btnListarDirectorio.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Left | System.Windows.Forms.AnchorStyles.Right)));
            this.btnListarDirectorio.Location = new System.Drawing.Point(216, 90);
            this.btnListarDirectorio.Name = "btnListarDirectorio";
            this.btnListarDirectorio.Size = new System.Drawing.Size(150, 23);
            this.btnListarDirectorio.TabIndex = 4;
            this.btnListarDirectorio.TabStop = false;
            this.btnListarDirectorio.Text = "Listar Directorio";
            this.btnListarDirectorio.UseVisualStyleBackColor = true;
            this.btnListarDirectorio.Click += new System.EventHandler(this.btnListarDirectorio_Click);
            // 
            // txbListarDirectorio
            // 
            this.txbListarDirectorio.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Left | System.Windows.Forms.AnchorStyles.Right)));
            this.txbListarDirectorio.Location = new System.Drawing.Point(216, 35);
            this.txbListarDirectorio.Name = "txbListarDirectorio";
            this.txbListarDirectorio.Size = new System.Drawing.Size(150, 20);
            this.txbListarDirectorio.TabIndex = 5;
            this.txbListarDirectorio.TextChanged += new System.EventHandler(this.texbListarDirectorio_TextChanged);
            // 
            // txbCrearArchivo
            // 
            this.txbCrearArchivo.Location = new System.Drawing.Point(372, 35);
            this.txbCrearArchivo.Name = "txbCrearArchivo";
            this.txbCrearArchivo.Size = new System.Drawing.Size(164, 20);
            this.txbCrearArchivo.TabIndex = 7;
            this.txbCrearArchivo.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // btnCrearDirectorio
            // 
            this.btnCrearDirectorio.Location = new System.Drawing.Point(542, 90);
            this.btnCrearDirectorio.Name = "btnCrearDirectorio";
            this.btnCrearDirectorio.Size = new System.Drawing.Size(189, 23);
            this.btnCrearDirectorio.TabIndex = 8;
            this.btnCrearDirectorio.Text = "Crear Directorio";
            this.btnCrearDirectorio.UseVisualStyleBackColor = true;
            this.btnCrearDirectorio.Click += new System.EventHandler(this.btnCrearDirectorio_Click);
            // 
            // txbCrearDirectorio
            // 
            this.txbCrearDirectorio.Location = new System.Drawing.Point(542, 35);
            this.txbCrearDirectorio.Name = "txbCrearDirectorio";
            this.txbCrearDirectorio.Size = new System.Drawing.Size(189, 20);
            this.txbCrearDirectorio.TabIndex = 9;
            this.txbCrearDirectorio.TextChanged += new System.EventHandler(this.txbCrearDirectorio_TextChanged);
            // 
            // btnCrearArchivo
            // 
            this.btnCrearArchivo.Location = new System.Drawing.Point(372, 90);
            this.btnCrearArchivo.Name = "btnCrearArchivo";
            this.btnCrearArchivo.Size = new System.Drawing.Size(164, 23);
            this.btnCrearArchivo.TabIndex = 10;
            this.btnCrearArchivo.Text = "Crear Archivos";
            this.btnCrearArchivo.UseVisualStyleBackColor = true;
            this.btnCrearArchivo.Click += new System.EventHandler(this.btnCrearArchivo_Click);
            // 
            // btnCopiarArchvios
            // 
            this.btnCopiarArchvios.Location = new System.Drawing.Point(738, 90);
            this.btnCopiarArchvios.Name = "btnCopiarArchvios";
            this.btnCopiarArchvios.Size = new System.Drawing.Size(240, 24);
            this.btnCopiarArchvios.TabIndex = 11;
            this.btnCopiarArchvios.Text = "Copiar Archivos";
            this.btnCopiarArchvios.UseVisualStyleBackColor = true;
            this.btnCopiarArchvios.Click += new System.EventHandler(this.btnCopiarArchvios_Click);
            // 
            // txbDestino
            // 
            this.txbDestino.Location = new System.Drawing.Point(861, 34);
            this.txbDestino.Name = "txbDestino";
            this.txbDestino.Size = new System.Drawing.Size(117, 20);
            this.txbDestino.TabIndex = 13;
            // 
            // txbOrigen
            // 
            this.txbOrigen.Location = new System.Drawing.Point(738, 34);
            this.txbOrigen.Name = "txbOrigen";
            this.txbOrigen.Size = new System.Drawing.Size(110, 20);
            this.txbOrigen.TabIndex = 14;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(0)))), ((int)(((byte)(64)))));
            this.ClientSize = new System.Drawing.Size(990, 450);
            this.Controls.Add(this.txbOrigen);
            this.Controls.Add(this.txbDestino);
            this.Controls.Add(this.btnCopiarArchvios);
            this.Controls.Add(this.btnCrearArchivo);
            this.Controls.Add(this.txbCrearDirectorio);
            this.Controls.Add(this.btnCrearDirectorio);
            this.Controls.Add(this.txbCrearArchivo);
            this.Controls.Add(this.txbListarDirectorio);
            this.Controls.Add(this.btnListarDirectorio);
            this.Controls.Add(this.txbLeerDirectorio);
            this.Controls.Add(this.btnLeerDirectorio);
            this.Controls.Add(this.btnAñadirLog);
            this.Controls.Add(this.dgvLogs);
            this.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(128)))), ((int)(((byte)(128)))), ((int)(((byte)(255)))));
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dgvLogs)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        private void texbListarDirectorio_TextChanged(object sender, EventArgs e)
        {
            throw new NotImplementedException();
        }

        #endregion

        private System.Windows.Forms.DataGridView dgvLogs;
        private System.Windows.Forms.DataGridViewTextBoxColumn tipo;
        private System.Windows.Forms.DataGridViewTextBoxColumn log;
        private System.Windows.Forms.Button btnAñadirLog;
        private System.Windows.Forms.Button btnLeerDirectorio;
        private System.Windows.Forms.TextBox txbLeerDirectorio;
        private System.Windows.Forms.Button btnListarDirectorio;
        private System.Windows.Forms.TextBox txbListarDirectorio;
        private System.Windows.Forms.TextBox txbCrearArchivo;
        private System.Windows.Forms.Button btnCrearDirectorio;
        private System.Windows.Forms.TextBox txbCrearDirectorio;
        private System.Windows.Forms.Button btnCrearArchivo;
        private System.Windows.Forms.Button btnCopiarArchvios;
        private System.Windows.Forms.TextBox txbDestino;
        private System.Windows.Forms.TextBox txbOrigen;
    }
}

