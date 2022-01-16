package Repetitivo;

import java.util.Locale;
import java.util.Scanner;

public class experiencias {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, i, qtd, conteC, conteR, conteS, total;
		char tipo;
		double pCoelhos, pRatos, pSapos;
		
		System.out.print("Quantos casos de teste serão digitados? ");
		n = sc.nextInt();
		
		conteC = 0;
		conteR = 0;
		conteS = 0;
				
		for (i = 0; i < n; i++) {
			System.out.print("Quantidade de cobaias: ");
			qtd = sc.nextInt();
			System.out.print("Tipo de cobaia: ");
			tipo = sc.next().charAt(0);
			if (tipo == 'c' || tipo == 'C') {
				conteC += qtd;
			}
			else if (tipo == 'R' || tipo == 'r') {
				conteR += qtd;
			}
			else if (tipo == 'S' || tipo == 's') {
				conteS += qtd;
			}
		}
		total = conteC + conteR + conteS;
		pCoelhos = (double) conteC * 100 / total;
		pRatos = (double) conteR * 100 / total;
		pSapos = (double) conteS * 100 / total;
		
		System.out.println("RELATÓRIO FINAL:");
		System.out.println("Total: " + total + " cobaias");
		System.out.println("Total de coelhos: " + conteC);
		System.out.println("Total de ratos: " + conteR);
		System.out.println("Total de sapos: " + conteS);
		System.out.println("Percentual de coelhos: " + String.format("%.2f", pCoelhos) + "%");
		System.out.println("Percentual de ratos: " + String.format("%.2f", pRatos) + "%");
		System.out.println("Percentual de sapos: " + String.format("%.2f", pSapos) + "%");
		sc.close();
	}

}
