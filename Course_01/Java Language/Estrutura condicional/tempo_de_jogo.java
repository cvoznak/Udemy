package condicional;

import java.util.Locale;
import java.util.Scanner;

public class tempo_de_jogo {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int horaIni, horaFinal, duracao;
		
		System.out.print("Hora inicial: ");
		horaIni = sc.nextInt();
		System.out.print("Hora final: ");
		horaFinal = sc.nextInt();
		
		if (horaIni == horaFinal) {
			duracao = 24;
		}
		else if (horaIni > 12) {
			duracao = 24 - horaIni + horaFinal;
		}
		else {
			duracao = horaFinal - horaIni;
		}
		
		System.out.println("O JOGO DUROU " + duracao + " HORA(S)");
		
		sc.close();
	}

}
