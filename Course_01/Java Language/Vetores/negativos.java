package Vetores;

import java.util.Locale;
import java.util.Scanner;

public class negativos {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int n, i;
		
		System.out.print("Quantos numeros voc� vai digitar? ");
		n = sc.nextInt();
		
		int [] v = new int [n];
		
		for (i = 0; i < n; i++) {
			System.out.print("Digite um n�mero: ");
			v[i] = sc.nextInt();
		}
		System.out.println("N�MEROS NEGATIVOS: ");
		for (i = 0; i < n; i++) {
			if (v[i] < 0) {
				System.out.println(v[i]);
			}
		}
		
		
		sc.close();
	}

}
