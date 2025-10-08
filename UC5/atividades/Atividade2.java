package atividades;

import java.util.Scanner;

public class Atividade2 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		char tipoConta;
		
		System.out.println("Digite (c) para conta Corrente e (p) para conta Poupança: ");
		 tipoConta = scanner.next().charAt(0);
		 tipoConta = Character.toLowerCase(tipoConta);
		 
		 switch (tipoConta) {
		 case 'c':
			 System.out.println("Conta Corrente");
			 break;
		 case 'p':
			 System.out.println("Conta Poupança");
			 break;
		 default:
			 System.out.println("Tipo de conta inválido!");
		 }

	}

}
