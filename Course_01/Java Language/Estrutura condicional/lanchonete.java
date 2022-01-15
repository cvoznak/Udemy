package condicional;

import java.util.Locale;
import java.util.Scanner;

public class lanchonete {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int cod, qtd;
		double preco, total;
		
		System.out.print("Codigo do produto comprado: ");
		cod = sc.nextInt();
		System.out.print("Quantidade comprada: ");
		qtd = sc.nextInt();
		
		switch (cod) {
			case 1:
				preco = 5.0;
				break;
			case 2:
				preco = 3.5;
				break;
			case 3:
				preco = 4.8;
				break;
			case 4:
				preco = 8.9;
				break;
			case 5:
				preco = 7.32;
				break;
			default:
				preco = 0;
				break;
		}
		
		total = preco * qtd;
		
		System.out.println("Valor a pagar: R$ " + String.format("%.2f", total));
		
		sc.close();
	}

}
