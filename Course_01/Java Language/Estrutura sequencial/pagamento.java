package pagamento;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		Scanner sc = new Scanner(System.in);
		
		String nome;
		double valor, total;
		int horas;
		
		System.out.print("Nome: ");
		nome = sc.nextLine();
		System.out.print("Valor por hora: ");
		valor = sc.nextDouble();
		System.out.print("Horas trabalhadas: ");
		horas = sc.nextInt();
		
		total = valor * horas;
		
		System.out.println("O pagamento para " + nome + " deve ser " + String.format("%.2f", total));
		
		sc.close();
	}

}
