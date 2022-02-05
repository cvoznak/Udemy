using System;
using System.Globalization;

namespace Notas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            double nota1, nota2, notafinal;

            Console.Write("Digite a primeira nota: ");
            nota1 = double.Parse(Console.ReadLine(), ci);
            Console.Write("Digite a segunda nota: ");
            nota2 = double.Parse(Console.ReadLine(), ci);

            notafinal = nota1 + nota2;

            if (notafinal < 60)
            {
                Console.WriteLine("REPROVADO");
            }
            else
            {
                Console.WriteLine("NOTA FINAL = " + notafinal.ToString("F2", ci));
            }
        }
    }
}