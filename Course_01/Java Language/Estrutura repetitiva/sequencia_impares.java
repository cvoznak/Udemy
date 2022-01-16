package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class sequencia_impares {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int x, i;
		
		System.out.print("Digite o valor de X: ");
		x = sc.nextInt();
		
		if (x % 2 != 0) {
			x += 1;
		}
		
		for (i = 1; i < x ; i += 2) {
			System.out.println(i);
		}
		
		sc.close();
	}

}
