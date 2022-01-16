package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class crescente {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n1, n2;
		
		System.out.println("Digite dois numeros:");
		n1 = sc.nextInt();
		n2 = sc.nextInt();
		
		while (n1 != n2) {
			if (n1 < n2) {
				System.out.println("CRESCENTE!");
			}
			else if (n1 > n2) {
				System.out.println("DECRESCENTE");
			}
			System.out.println("Digite dois numeros:");
			n1 = sc.nextInt();
			n2 = sc.nextInt();
		}
		sc.close();
	}

}
