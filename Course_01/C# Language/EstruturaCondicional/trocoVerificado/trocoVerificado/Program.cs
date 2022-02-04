using System;
using System.Globalization;

namespace TrocoVerificado
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int quantidade;
            double precoUnitario, recebido, total;

            Console.Write("Preço unitário do produto: ");
            precoUnitario = double.Parse(Console.ReadLine(), ci);
            Console.Write("Quantidade comprada: ");
            quantidade = int.Parse(Console.ReadLine());
            Console.Write("Dinheiro recebido: ");
            recebido = double.Parse(Console.ReadLine(),ci);

            total = precoUnitario * quantidade;

            if (total > recebido)
            {
                Console.WriteLine("Dinheiro insuficiente. Faltam R$" + (total - recebido).ToString("F2", ci));
            }
            else
            {
                Console.WriteLine("TROCO = R$" + (recebido-total).ToString("F2", ci));
            }
        }
    }
}