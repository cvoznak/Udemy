using System;
using System.Globalization;

namespace Combustivel
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int cod, count1 = 0, count2 = 0, count3 = 0;

            Console.Write("Informe um código (1, 2, 3) ou 4 para parar: ");
            cod = int.Parse(Console.ReadLine());

            while (cod != 4)
            {
                switch (cod)
                {
                    case 1:
                        count1++;
                        break;
                    case 2:
                        count2++;
                        break;
                    case 3:
                        count3++;
                        break;
                    default:
                        break;
                }
                Console.Write("Informe um código (1, 2, 3) ou 4 para parar: ");
                cod = int.Parse(Console.ReadLine());
            }
            Console.WriteLine("MUITO OBRIGADO");
            Console.WriteLine("Alcool: " + count1);
            Console.WriteLine("Gasolina: " + count2);
            Console.WriteLine("Diesel: " + count3); 
        }
    }
}