package atividades;

import java.util.Scanner;

public class Atividade3 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("========== Menu de navegação ==========");
		System.out.println("1 - Home");
		System.out.println("2 - Perfil");
		System.out.println("3 - Configurações");
		System.out.print("Escolha a opção desejada: ");
		
		int opcao = scanner.nextInt();
		
		switch (opcao) {
		case 1:
			System.out.println("======== Home ========");
			break;
		case 2: 
			System.out.println("======= Perfil =======");
			break;
		case 3:
			System.out.println("==== Configurações ====");
			break;
		default:
			System.out.println("Finalizando Sistema...");
		}
	}

}
