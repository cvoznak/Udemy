package duracao;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		Scanner sc = new Scanner(System.in);
		
		int segIn, segOut, m, h;
		
		System.out.print("Digite a duração em segundos: ");
		segIn = sc.nextInt();
		
		h = segIn / 3600;
		m = (segIn % 3600) / 60;
		segOut = ((segIn % 3600) % 60);
		
		System.out.println(h + ":" + m + ":" + segOut);
		
		sc.close();
	}

}
