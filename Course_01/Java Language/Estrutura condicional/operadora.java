package condicional;

import java.util.Locale;
import java.util.Scanner;

public class operadora {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int tempo; 
		double total;
		
		System.out.print("Digite a quantidade de minutos: ");
		tempo = sc.nextInt();
		
		if (tempo > 100) {
			total = (double) 50 + (tempo - 100) * 2;
		}
		else {
			total = (double) 50;
		}
		
		System.out.println("Valor a pagar: R$ " + String.format("%.2f", total));
		
		sc.close();
	}

}
