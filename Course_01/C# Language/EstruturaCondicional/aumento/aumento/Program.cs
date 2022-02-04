using System;
using System.Globalization;

namespace Aumento
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            double salario, novoSalario, aumentoSalario;
            int aumento;

            Console.Write("Digite o salário da pessoa: ");
            salario = double.Parse(Console.ReadLine(), ci);

            if (salario <= 1000)
            {
                aumento = 20;
            }
            else if (salario > 1000 && salario <= 3000)
            {
                aumento = 15;
            }
            else if (salario > 3000 && salario <= 8000)
            {
                aumento = 10;
            }
            else
            {
                aumento = 5;
            }
            aumentoSalario = salario * aumento/100;

            novoSalario = aumentoSalario + salario;

            Console.WriteLine("Novo salário = R$ " + novoSalario.ToString("F2", ci));
            Console.WriteLine("Aumento = R$ " + aumentoSalario.ToString("F2", ci));
            Console.WriteLine("Porcentagem = " + aumento + " %");

            
        }
    }
}