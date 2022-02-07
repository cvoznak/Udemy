using System;
using System.Globalization;

namespace Divisao
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int i, n;
            double numerador, denominador, resultado;

            Console.Write("Quantos casos você vai digitar?");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i < n; i++)
            {
                Console.Write("\nEntre com o numerador: ");
                numerador = double.Parse(Console.ReadLine(), ci);
                Console.Write("Entre com o denominador: ");
                denominador = double.Parse(Console.ReadLine(), ci);
                if (denominador == 0)
                {
                    Console.WriteLine("Divisão impossível");
                }
                else
                {
                    resultado = numerador / denominador;
                    Console.WriteLine("DIVISÃO = " + resultado.ToString("F2", ci));
                }
            }
        }
    }
}