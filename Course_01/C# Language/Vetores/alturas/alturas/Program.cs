using System;
using System.Globalization;

namespace Alturas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int i, m;

            Console.Write("Quantas pessoas serão digitadas? ");
            m = int.Parse(Console.ReadLine());

            string [] nomes = new string [m];
            int [] idades = new int [m];
            double [] alturas = new double [m];
            double alturaMedia, somaAlturas = 0, percMenos16;
            int countMenos16 = 0;

            for (i = 0; i < m; i++)
            {
                Console.WriteLine("Dados da " + (i + 1) + "a pessoa:");
                Console.Write("Nome: ");
                nomes[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idades[i] = int.Parse(Console.ReadLine());
                Console.Write("Altura: ");
                alturas[i] = double.Parse(Console.ReadLine(), ci);
            }
            for (i = 0; i < m; i++)
            {
                somaAlturas += alturas[i];
                if (idades[i] < 16)
                {
                    countMenos16++;
                }
            }

            alturaMedia = somaAlturas / m;
            percMenos16 = (double) countMenos16 * 100 / m;

            Console.WriteLine();
            Console.WriteLine("Altura média: " + alturaMedia.ToString("F2", ci));
            Console.WriteLine("Pessoas com menos de 16 anos: " + percMenos16.ToString("F1", ci) + "%");
            for (i = 0; i < m; i++)
            {
                if (idades[i] < 16)
                {
                    Console.WriteLine(nomes[i]);
                }
            }

        }
    }
}
