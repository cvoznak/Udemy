using System;
using System.Globalization;

namespace Aprovados
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int i, m;

            Console.Write("Quantas pessoas serão digitadas? ");
            m = int.Parse(Console.ReadLine());

            double [] altura = new double[m];
            char [] genero = new char[m];

            for (i = 0; i < m; i++)
            {
                Console.Write("Altura da " + (i + 1) + "a pessoa: ");
                altura[i] = double.Parse(Console.ReadLine(), ci);
                Console.Write("Genero da " + (i + 1) + "a pessoa: ");
                genero[i] = char.Parse(Console.ReadLine());
            }
            int countHomens = 0;
            double mediaAlturaMulheres, somaAlturaMulheres = 0, maiorAltura, menorAltura;

            maiorAltura = altura[0];
            menorAltura = altura[0];

            for (i = 0; i < m; i++)
            {
                if (genero[i] == 'M')
                {
                    countHomens++;
                }
                else if (genero[i] == 'F')
                {
                    somaAlturaMulheres += altura[i];
                }
                if (maiorAltura < altura[i])
                {
                    maiorAltura = altura[i];
                }
                if (menorAltura > altura[i])
                {
                    menorAltura = altura[i];
                }
            }

            mediaAlturaMulheres = somaAlturaMulheres / (m - countHomens);

            Console.WriteLine("Menor altura = " + menorAltura.ToString(ci));
            Console.WriteLine("Maior altura = " + maiorAltura.ToString(ci));
            Console.WriteLine("Média das alturas das mulheres = " + mediaAlturaMulheres.ToString("F2", ci));
            Console.WriteLine("Número de homens = " + countHomens);
        }
    }
}