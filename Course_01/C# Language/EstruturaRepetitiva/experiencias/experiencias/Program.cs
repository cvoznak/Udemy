using System;
using System.Globalization;

namespace Experiencias
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int totalCobaias = 0, totalCoelhos = 0, totalRatos = 0, totalSapos = 0, n, numCobaias;
            double percCoelhos, percRatos, percSapos;
            char tipo;

            Console.Write("Quantos casos de testes serão digitados? ");
            n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                Console.Write("Quantidade de cobaias: ");
                numCobaias = int.Parse(Console.ReadLine());
                totalCobaias += numCobaias;
                Console.Write("Tipo de cobaia: ");
                tipo = char.Parse(Console.ReadLine());
                if (tipo == 'C')
                {
                    totalCoelhos += numCobaias;
                }
                else if (tipo == 'R')
                {
                    totalRatos += numCobaias;
                }
                else if (tipo == 'S')
                {
                    totalSapos += numCobaias;
                }
            }

            percCoelhos = (double) totalCoelhos * 100 / totalCobaias;
            percRatos = (double) totalRatos * 100 / totalCobaias;
            percSapos = (double) totalSapos * 100 / totalCobaias;

            Console.WriteLine("Relatório final:");
            Console.WriteLine("Total: " + totalCobaias + " cobaias");
            Console.WriteLine("Total de coelhos: " + totalCoelhos);
            Console.WriteLine("Total de ratos: "+ totalRatos);
            Console.WriteLine("Total de sapos: " + totalSapos);
            Console.WriteLine("Percentual " + percCoelhos.ToString("F2", ci) + "%");
            Console.WriteLine("Percentual " + percRatos.ToString("F2", ci) + "%");
            Console.WriteLine("Percentual " + percSapos.ToString("F2", ci) + "%");
        }
    }
}