package Vetores;

import java.util.Locale;
import java.util.Scanner;

public class Comerciante {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner (System.in);
		
		int i, n;
		
		System.out.print("Serão digitados dados de quantos produtos? ");
		n = sc.nextInt();
		
		String [] nome = new String [n];
		double [] compra = new double [n];
		double [] venda = new double [n];
		
		for (i = 0; i < n; i++) {
			System.out.println("Produto " + (i + 1));
			System.out.print("Nome: ");
			sc.nextLine();
			nome[i] = sc.nextLine();
			System.out.print("Preço de compra: ");
			compra[i] = sc.nextDouble();
			System.out.print("Preço de venda: ");
			venda[i] = sc.nextDouble();
		}
		
		int conteLucroMenos10, conteLucroMais20;
		double lucro, lucroTotal, compraTotal, vendaTotal, plucro;
		
		lucroTotal = 0;
		compraTotal = 0;
		vendaTotal = 0;
		conteLucroMenos10 = 0;
		conteLucroMais20 = 0;
		
		for (i = 0; i < n; i++) {
			lucro = venda[i] - compra[i];
			plucro = (lucro * 100) / compra[i];
			if (plucro < 10) {
				conteLucroMenos10++;
			}
			else if (plucro > 20) {
				conteLucroMais20++;
			}
			lucroTotal += lucro;
			compraTotal += compra[i];
			vendaTotal += venda[i];
		}
		
		System.out.println();
		System.out.println("RELATÓRIO:");
		System.out.println("Lucro abaixo de 10%: " + conteLucroMenos10);
		System.out.println("Lucro entre 10% e 20%: " + (n - (conteLucroMenos10 + conteLucroMais20)));
		System.out.println("Lucro acima de 20%: " + conteLucroMais20);
		System.out.println("Valor total de compra: " + compraTotal);
		System.out.println("Valor total de venda: " + vendaTotal);
		System.out.println("Lucro Total: " + String.format("%.2f", lucroTotal));
		
		
		sc.close();
	}

}
