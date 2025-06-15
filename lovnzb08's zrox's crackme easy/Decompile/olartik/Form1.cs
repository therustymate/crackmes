using System;
using System.ComponentModel;
using System.Drawing;
using System.Windows.Forms;

namespace olartik
{
	public class Form1 : Form
	{
		private IContainer components;

		private TextBox txtKey;

		private Button btnLogin;

		public Form1()
		{
			InitializeComponent();
		}

		private void btnLogin_Click(object sender, EventArgs e)
		{
			string text = "sifreyok";
			if (txtKey.Text == text)
			{
				MessageBox.Show("giris basarili");
			}
			else
			{
				MessageBox.Show("giris basarisiz");
			}
		}

		protected override void Dispose(bool disposing)
		{
			if (disposing && components != null)
			{
				components.Dispose();
			}
			base.Dispose(disposing);
		}

		private void InitializeComponent()
		{
			this.txtKey = new System.Windows.Forms.TextBox();
			this.btnLogin = new System.Windows.Forms.Button();
			base.SuspendLayout();
			this.txtKey.Location = new System.Drawing.Point(12, 12);
			this.txtKey.Name = "txtKey";
			this.txtKey.Size = new System.Drawing.Size(260, 22);
			this.txtKey.TabIndex = 0;
			this.btnLogin.Location = new System.Drawing.Point(12, 40);
			this.btnLogin.Name = "btnLogin";
			this.btnLogin.Size = new System.Drawing.Size(75, 23);
			this.btnLogin.TabIndex = 1;
			this.btnLogin.Text = "Giris";
			this.btnLogin.UseVisualStyleBackColor = true;
			this.btnLogin.Click += new System.EventHandler(btnLogin_Click);
			base.AutoScaleDimensions = new System.Drawing.SizeF(8f, 16f);
			base.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			base.ClientSize = new System.Drawing.Size(284, 76);
			base.Controls.Add(this.btnLogin);
			base.Controls.Add(this.txtKey);
			base.Name = "Form1";
			this.Text = "Key Giris Uygulamasi";
			base.ResumeLayout(false);
			base.PerformLayout();
		}
	}
}
