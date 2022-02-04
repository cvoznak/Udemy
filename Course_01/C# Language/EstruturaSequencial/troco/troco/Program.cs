using System;
using System.Globalization;

namespace Troco
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            double precoUnitario, recebido, troco;
            int quantidade;

            Console.Write("Preço unitário do produto: ");
            precoUnitario = double.Parse(Console.ReadLine(), ci);
            Console.Write("Quantidade comprada: ");
            quantidade = int.Parse(Console.ReadLine());
            Console.Write("Dinheiro recebido: ");
            recebido = double.Parse(Console.ReadLine(),ci);

            troco = recebido - (precoUnitario * quantidade);

            Console.WriteLine("TROCO = " + troco.ToString("F2", ci));

        }
    }
   
}
