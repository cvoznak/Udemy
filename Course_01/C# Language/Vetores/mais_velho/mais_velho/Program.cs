using System;
using System.Globalization;

namespace MaisVelho
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int i, m;

            Console.Write("Quantas pessoas você vai digitar? ");
            m = int.Parse(Console.ReadLine());

            string [] nomes = new string[m];
            int [] idades = new int[m];

            for (i = 0; i < m; i++)
            {
                Console.WriteLine("Dados da " + (i + 1) + "a pessoa:");
                Console.Write("Nome: ");
                nomes[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idades[i] = int.Parse(Console.ReadLine());
            }

            int maisVelho, iMaisVelho = 0;

            maisVelho = idades[0];

            for (i = 0; i < m; i++)
            {
                if (maisVelho < idades[i])
                {
                    maisVelho = idades[i];
                    iMaisVelho = i;
                }
            }
            Console.Write("PESSOA MAIS VELHA: " + nomes[iMaisVelho]);
        }
    }
}