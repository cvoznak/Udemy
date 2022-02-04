using System;
using System.Globalization;

namespace Idades
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            string nome1, nome2;
            int idade1, idade2;
            double mediaIdades;

            Console.WriteLine("Dados da primeira pessoa:");
            Console.Write("Nome: ");
            nome1 = Console.ReadLine();
            Console.Write("Idade: ");
            idade1 = int.Parse(Console.ReadLine());
            Console.WriteLine("Dados da segunda pessoa: ");
            Console.Write("Nome: ");
            nome2 = Console.ReadLine();
            Console.Write("Idade: ");
            idade2 = int.Parse(Console.ReadLine()); 

            mediaIdades = (double)(idade1 + idade2) / 2;

            Console.WriteLine("A idade média de " + nome1 + " e " + nome2 + " é de " + mediaIdades.ToString("F1", ci) + " anos.");
        }
    }
}