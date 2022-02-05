using System;
using System.Globalization;

namespace Lanchonete
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int cod, qtd;

            double preco, total;

            Console.Write("Código do produto comprado: ");
            cod = int.Parse(Console.ReadLine());

            Console.Write("Quantidade comprada: ");
            qtd = int.Parse(Console.ReadLine());

            switch (cod)
            {
                case 1:
                    preco = 5;
                    break;
                case 2:
                    preco = 3.5;
                    break;
                case 3:
                    preco = 4.8;
                    break;
                case 4:
                    preco = 8.9;
                    break;
                case 5:
                    preco = 7.32;
                    break;
                default:
                    preco = 0;
                    Console.WriteLine("Código inválido");
                    break;
            }

            total = preco * qtd;

            Console.WriteLine("Valor a pagar: R$ " + total.ToString("F2", ci));
        }
    }
}