using System;
using System.Globalization;

namespace TempoDeJogo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo ci = CultureInfo.InvariantCulture;

            int horaInicial, horaFinal, duracao;

            Console.Write("Hora inicial: ");
            horaInicial = int.Parse(Console.ReadLine());
            Console.Write("Hora final: ");
            horaFinal = int.Parse(Console.ReadLine());

            if (horaInicial == horaFinal)
            {
                duracao = 24;
            }
            else if (horaInicial > horaFinal)
            {
                duracao = (24 - horaInicial) + horaFinal;
            }
            else
            {
                duracao = horaFinal - horaInicial;
            }

            Console.WriteLine("O JOGO DUROU " + duracao + " HORA(S)");
        }
    }
}