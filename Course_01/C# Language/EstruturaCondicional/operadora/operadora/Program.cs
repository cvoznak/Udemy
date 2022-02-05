using System;
using System.Globalization;

namespace Operadora
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int tempo;
            double total;

            Console.Write("Digite a quantidade de minutos: ");
            tempo = int.Parse(Console.ReadLine());

            if (tempo < 100)
            {
                total = 50;
            }
            else
            {
                total = 50 + (tempo - 100) * 2;
            }
            Console.WriteLine("Valor a pagar: R$" + total.ToString("F2", ci));
        }
    }
}