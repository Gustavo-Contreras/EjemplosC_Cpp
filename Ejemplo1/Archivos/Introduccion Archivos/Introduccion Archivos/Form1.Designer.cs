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
            ((System.ComponentModel.ISupportInitialize)(this.dgvLogs)).BeginInit();
            this.SuspendLayout();
            // 
            // dgvLogs
            // 
            this.dgvLogs.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvLogs.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.tipo,
            this.log});
            this.dgvLogs.Location = new System.Drawing.Point(106, 136);
            this.dgvLogs.Name = "dgvLogs";
            this.dgvLogs.Size = new System.Drawing.Size(444, 150);
            this.dgvLogs.TabIndex = 0;
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
            this.btnAñadirLog.Location = new System.Drawing.Point(106, 83);
            this.btnAñadirLog.Name = "btnAñadirLog";
            this.btnAñadirLog.Size = new System.Drawing.Size(200, 23);
            this.btnAñadirLog.TabIndex = 1;
            this.btnAñadirLog.Text = "Añadir log";
            this.btnAñadirLog.UseVisualStyleBackColor = true;
            this.btnAñadirLog.Click += new System.EventHandler(this.btnAñadirLog_Click);
            // 
            // btnLeerDirectorio
            // 
            this.btnLeerDirectorio.Location = new System.Drawing.Point(343, 83);
            this.btnLeerDirectorio.Name = "btnLeerDirectorio";
            this.btnLeerDirectorio.Size = new System.Drawing.Size(207, 23);
            this.btnLeerDirectorio.TabIndex = 2;
            this.btnLeerDirectorio.Text = "Leer Directorio";
            this.btnLeerDirectorio.UseVisualStyleBackColor = true;
            this.btnLeerDirectorio.Click += new System.EventHandler(this.btnLeerDirectorio_Click);
            // 
            // txbLeerDirectorio
            // 
            this.txbLeerDirectorio.Location = new System.Drawing.Point(106, 35);
            this.txbLeerDirectorio.Name = "txbLeerDirectorio";
            this.txbLeerDirectorio.Size = new System.Drawing.Size(444, 20);
            this.txbLeerDirectorio.TabIndex = 3;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(0)))), ((int)(((byte)(64)))));
            this.ClientSize = new System.Drawing.Size(800, 450);
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

        #endregion

        private System.Windows.Forms.DataGridView dgvLogs;
        private System.Windows.Forms.DataGridViewTextBoxColumn tipo;
        private System.Windows.Forms.DataGridViewTextBoxColumn log;
        private System.Windows.Forms.Button btnAñadirLog;
        private System.Windows.Forms.Button btnLeerDirectorio;
        private System.Windows.Forms.TextBox txbLeerDirectorio;
    }
}

