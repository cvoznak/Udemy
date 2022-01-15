package condicional;

import java.util.Locale;
import java.util.Scanner;

public class menor_de_tres {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int a, b, c, menor;
		
		System.out.print("Primeiro valor: ");
		a = sc.nextInt();
		System.out.print("Segundo valor: ");
		b = sc.nextInt();
		System.out.print("Terceiro valor: ");
		c = sc.nextInt();
		
		menor = a;
		
		if (menor > b) {
			menor = b;
		}
		else if (menor > c) {
			menor = c;
		}
		
		System.out.println("MENOR = " + menor);
		
		sc.close();
	}

}
