package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class par_impar {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int i, x, n;
		
		System.out.print("Quantos numeros voce vai digitar? ");
		n = sc.nextInt();
		
		for (i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			x = sc.nextInt();
			if  (x == 0) {
				System.out.println("NULO");
			}
			else if (x % 2 == 0) {
				if (x > 0) {
					System.out.println("PAR POSITIVO");
				}
				else {
					System.out.println("PAR NEGATIVO");
				}
			}
			else {
				if (x > 0) {
					System.out.println("IMPAR POSITIVO");
				}
				else {
					System.out.println("IMPAR NEGATIVO");
				}
			}
		}
		
		sc.close();
	}

}
