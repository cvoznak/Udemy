package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class combustivel {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int cod, conte1, conte2, conte3;
		
		System.out.print("Informe um codigo (1, 2, 3) ou 4 para parar: ");
		cod = sc.nextInt();
		
		conte1 = 0;
		conte2 = 0;
		conte3 = 0;
		
		while (cod != 4) { 
			if (cod == 1) {
				conte1++;
			}
			else if (cod == 2) {
				conte2++;
			}
			else if (cod == 3) {
				conte3++;
			}
			System.out.print("Informe um codigo (1, 2, 3) ou 4 para parar: ");
			cod = sc.nextInt();
		}
		
		System.out.println("MUITO OBRIGADO");
		System.out.println("Alcool = " + conte1);
		System.out.println("Gasolina = " + conte2);
		System.out.println("Diesel =" + conte3);
		
		sc.close();
	}

}
