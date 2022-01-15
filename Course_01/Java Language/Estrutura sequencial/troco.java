package troco;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		Scanner sc = new Scanner(System.in);
		
		double preco, recebido, troco;
		int qtd;
		
		System.out.print("Preço unitário do produto: ");
		preco = sc.nextDouble();
		System.out.print("Quantidade comprada: ");
		qtd = sc.nextInt();
		System.out.print("Dinheiro recebido: ");
		recebido = sc.nextDouble();
		
		troco = recebido - (preco * qtd);
		
		System.out.println("TROCO = " + troco);
		
		sc.close();
	}

}
