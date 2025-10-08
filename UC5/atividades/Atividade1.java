package atividades;

import java.util.Scanner;

public class Atividade1 {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		System.out.print("Digite um número de 1 a 12: ");

		int numero = scanner.nextInt();

		switch (numero) {
		case 12:
		case 1:
		case 2:
		case 3:
			System.out.println("É Verão");
			break;
		case 4:
		case 5:
		case 6:
			System.out.println("É Outono");
			break;
		case 7:
		case 8:
		case 9:
			System.out.println("É Inverno");
			break;
		case 10:
		case 11:
			System.out.println("É Primavera");
			break;
		
		default:
			System.out.println("Não existe este mês!");	

		}

	}

}
