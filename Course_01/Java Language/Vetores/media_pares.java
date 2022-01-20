package Vetores;

import java.util.Locale;
import java.util.Scanner;

public class media_pares {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int i, n, contePar;
		
		System.out.print("Quantos elementos vai ter o vetor? ");
		n = sc.nextInt();
		
		double [] v = new double [n];
		double soma, media;
		
		for (i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			v[i] = sc.nextDouble();
		}
		soma = 0;
		contePar = 0;
		
		for (i = 0; i < n; i++) {
			if (v[i] % 2 == 0) {
				soma += v[i];
				contePar++;
			}
		}
		if (contePar != 0) {
			media = soma / contePar;
			System.out.println("MEDIA DOS PARES = " + String.format("%.1f", media));
		}
		else {
			System.out.println("NENHUM NUMERO PAR");
		}
		
		sc.close();
	}

}
