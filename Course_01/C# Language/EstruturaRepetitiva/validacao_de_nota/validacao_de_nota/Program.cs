using System;
using System.Globalization;

namespace ValidacaoDeNota
{
    class Program
    {
        static void Main(string[] arg)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            double n1, n2, media;

            Console.Write("Digite a primeira nota: ");
            n1 = double.Parse(Console.ReadLine(), ci);

            while (n1 < 0 || n1 > 10)
            {
                Console.Write("Valor Inválido! Tente novamente: ");
                n1 = double.Parse(Console.ReadLine(), ci);
            }
            
            Console.Write("Digite a primeira nota: ");
            n2 = double.Parse(Console.ReadLine(), ci);

            while (n2 < 0 || n2 > 10)
            {
                Console.Write("Valor Inválido! Tente novamente: ");
                n2 = double.Parse(Console.ReadLine(), ci);
            }

            media = (n1 + n2) / 2;

            Console.WriteLine("MÉDIA = " + media.ToString("F2", ci));
        }
    }
}