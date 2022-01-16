package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class dentro_fora {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int i, x, n, conteDentro;
		
		System.out.print("Quantos numeros voce vai digitar? ");
		x = sc.nextInt();
		
		conteDentro = 0;
		
		for (i = 0; i < x; i++) {
			System.out.print("Digite um numero: ");
			n = sc.nextInt();
			if (n >= 10 && n <= 20) {
				conteDentro++;
			}
		}
		System.out.println(conteDentro + "DENTRO");
		System.out.println(x - conteDentro + "FORA");
		sc.close();
	}

}
