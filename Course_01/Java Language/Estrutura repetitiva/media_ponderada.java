package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class media_ponderada {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, i;
		double n1, n2, n3, media;
		
		System.out.print("Quantos casos voc� vai digitar? ");
		n = sc.nextInt();
		
		for (i = 0; i < n; i++) {
			System.out.println("digite tres numeros: ");
			n1 = sc.nextDouble();
			n2 = sc.nextDouble();
			n3 = sc.nextDouble();
			media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
			System.out.println("MEDIA = " + String.format("%.2f", media));
		}
		sc.close();
	}

}
