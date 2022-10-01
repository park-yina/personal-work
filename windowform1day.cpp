using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
        
        }

        private void toolTip1_Popup(object sender, PopupEventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (아이디박스.Text == "admin" && 비밀번호.Text == "1234")
                MessageBox.Show("로그인에 성공했습니다", "관리자모드 실행");
            else {
                MessageBox.Show("고객님 로그인에 성공했습니다", "일반 모드 실행");
                Form2 showForm2 = new Form2();
                showForm2.ShowDialog();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void dateTimePicker1_ValueChanged(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {

        }

        private void 아이디박스_TextChanged(object sender, EventArgs e)
        {
            
        }
    }
}
