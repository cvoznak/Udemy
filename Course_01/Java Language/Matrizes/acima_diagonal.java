package Matrizes;

import java.util.Locale;
import java.util.Scanner;

public class acima_diagonal {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int m, i, j;
		
		System.out.print("Qual a ordem da matriz? ");
		m = sc.nextInt();
		
		int [][] matriz = new int [m][m];
		
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				matriz[i][j] = sc.nextInt();
			}
		}
		
		int soma = 0;
		
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				if (j > i) {
					soma += matriz[i][j];
				}
			}
		}
		
		System.out.print("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " + soma);
		
		sc.close();
	}

}
