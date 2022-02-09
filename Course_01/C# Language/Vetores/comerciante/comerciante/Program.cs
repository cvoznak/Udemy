using System;
using System.Globalization;

namespace Comerciante
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int i, m;

            Console.Write("Serão digitados dados de quantos produtos? ");
            m = int.Parse(Console.ReadLine());

            string [] produto = new string [m];
            double [] compra = new double [m];
            double [] venda = new double [m];

            for (i = 0; i < m; i++)
            {
                Console.WriteLine("Produto " + (i + 1));
                Console.Write("Nome: ");
                produto[i] = Console.ReadLine();
                Console.Write("Preço de compra: ");
                compra[i] = double.Parse(Console.ReadLine(), ci);
                Console.Write("Preço de venda: ");
                venda[i] = double.Parse(Console.ReadLine(), ci);
            }

            double lucro, lucroTotal = 0, totalVenda = 0, totalCompra = 0, percLucro;
            int countLucroMais20 = 0, countLucro1020 = 0, countLucroMenos10 = 0;

            for (i = 0; i < m; i++)
            {
                lucro = venda[i] - compra[i];
                lucroTotal += lucro;
                percLucro = lucro * 100 / compra[i];
                totalVenda += venda[i];
                totalCompra += compra[i];
                if (percLucro > 20)
                {
                    countLucroMais20++;
                }
                else if (percLucro <= 20 && percLucro >= 10)
                {
                    countLucro1020++;
                }
                else if (percLucro < 10)
                {
                    countLucroMenos10++;
                }
            }

            Console.WriteLine();
            Console.WriteLine("RELATÓRIO: ");
            Console.WriteLine("Lucro abaixo de 10%: " + countLucroMenos10);
            Console.WriteLine("Lucro entre 10% e 20%: " + countLucro1020);
            Console.WriteLine("Lucro acima de 20%: " + countLucroMais20);
            Console.WriteLine("Valor total de compra: R$ "+ totalCompra.ToString("F2",ci));
            Console.WriteLine("Valor total de venda: R$ " + totalVenda.ToString("F2", ci));
            Console.WriteLine("Lucro total: R$ " + lucroTotal.ToString("F2", ci));
        }
    }
}