package condicional;

import java.util.Locale;
import java.util.Scanner;

public class aumento {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double salario, novoSalario, valorAumento;
		int aumento;
		
		System.out.print("Digite o salario da pessoa: ");
		salario = sc.nextDouble();
		
		if (salario <= 1000) {
			aumento = 20;
		}
		else if (salario > 1000 && salario <= 3000) {
			aumento = 15;
		}
		else if (salario > 3000 && salario <= 8000) {
			aumento = 10;
		}
		else {
			aumento = 5;
		}
		
		valorAumento = ((double)aumento / 100) * salario;
		novoSalario = salario + valorAumento;
		
		System.out.println("Novo salario = R$ " + String.format("%.2f", novoSalario));
		
		System.out.println("Aumento = R$ " + String.format("%.2f", valorAumento));
		
		System.out.println("Porcentagem = " + aumento + " %");
		
		sc.close();
	}

}
