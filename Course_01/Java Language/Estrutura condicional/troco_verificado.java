package condicional;

import java.util.Locale;
import java.util.Scanner;

public class troco_verificado {

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
		
		troco = recebido - (qtd * preco);
		
		if (troco < 0) {
			System.out.println("DINHEIRO INSUFICIENTE. FALTAM " + String.format("%.2f", -troco) + " REAIS");
		}
		else {
			System.out.println("TROCO = " + String.format("%.2f", troco));
		}
		
		sc.close();
	}

}
