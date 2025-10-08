package atividades;

import java.util.Random;
import java.util.Scanner;

public class Desafio {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Random random = new Random();
		
		int numeroSecreto = random.nextInt(100) + 1;
		int palpite = 0;
		int tentativas = 0;
		
		System.out.println("dê um palpite entre 1 a 100: ");
		
		do {
			System.out.println("Digite o número do seu palpite: ");
			palpite = scanner.nextInt();
			tentativas ++;
			
			if(palpite < numeroSecreto) {
				System.out.println("Passou, mas passou longe, palpite baixo!");
				System.out.println("Tente mais uma vez!");
			} else if(palpite > numeroSecreto) {
				System.out.println("Errou a casa, palpite alto!");
				System.out.println("Tente novamente!");
			} else {
				System.out.println("Finalmente!, depois de errar tanto, você finalmente acertou!");
				System.out.println("seus erros: "+ tentativas);
			}
			
		}while(palpite !=numeroSecreto);
	}

}
