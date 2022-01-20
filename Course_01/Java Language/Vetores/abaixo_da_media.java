package Vetores;

import java.util.Locale;
import java.util.Scanner;

public class abaixo_da_media {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int i, n;
		
		System.out.print("Quantos elementos vai ter o vetor? ");
		n = sc.nextInt();
		
		double [] v = new double [n];
		double soma, media;
		
		for (i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			v[i] = sc.nextDouble();
		}
		
		soma = 0;
		
		for (i = 0; i < n; i++) {
			soma += v[i];
		}
		
		media = soma / n;
		System.out.println();
		System.out.println("MEDIA DO VETOR = " + String.format("%.3f", media));
		System.out.println("ELEMENTOS ABAIXO DA MEDIA:");
		
		for (i = 0; i < n; i++) {
			if (v[i] < media) {
				System.out.println(v[i]);
			}
		}
		
		sc.close();
	}

}
