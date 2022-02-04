using System;
using System.Globalization;

namespace Pagamento
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            string nome;
            double valorHora, pagamento;
            int horas;

            Console.Write("Nome: ");
            nome = Console.ReadLine();
            Console.Write("Valor por hora: ");
            valorHora = double.Parse(Console.ReadLine(), ci);
            Console.Write("Horas trabalhadas: ");
            horas = int.Parse(Console.ReadLine());

            pagamento = valorHora * horas;

            Console.WriteLine("O pagamento para " + nome + " deve ser R$" + pagamento.ToString("F2", ci));

        }
    }
}