package condicional;

import java.util.Locale;
import java.util.Scanner;

public class multiplos {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int a, b;
		
		System.out.println("Digite dois numeros inteiros:");
		a = sc.nextInt();
		b = sc.nextInt();
		
		if (a % b == 0 || b % a == 0) {
			System.out.println("S�o multiplos");
		}
		
		else {
			System.out.println("N�o s�o multiplos");
		}
		sc.close();
	}

}
