package atividade4;

import java.util.Scanner;

public class BrazilLanches {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		String[] produtos = {"Hambúrguer", "Pizza", "Suco", "Batata Frita", "Salada"};

        // Array de preços
        double[] precos = {15.00, 20.00, 6.50, 9.00, 10.00};

        // Array para armazenar quantidade de cada produto pedido
        int[] quantidades = new int[produtos.length];

        System.out.println("Bem-vindo à Lanchonete!");
        System.out.println("Digite a quantidade desejada de cada item.\n");

        // Loop para receber as quantidades dos produtos
        for (int i = 0; i < produtos.length; i++) {
            System.out.printf("%s (R$ %.2f): ", produtos[i], precos[i]);

            // Valida se a entrada é um número inteiro
            while (!input.hasNextInt()) {
                System.out.println("Entrada inválida! Digite apenas números inteiros.");
                System.out.printf("%s (R$ %.2f): ", produtos[i], precos[i]);
                input.nextInt(); // Limpa entrada incorreta
            }

            int quantidade = input.nextInt();

            // Verifica se é um número não-negativo
            if (quantidade < 0) {
                System.out.println(" Quantidade não pode ser negativa. Registrando como 0.");
                quantidade = 0;
            }

            quantidades[i] = quantidade;
        }

        // Relatório final
        double total = 0.0;
        System.out.println("\n Relatório do Pedido:");
        for (int i = 0; i < produtos.length; i++) {
            if (quantidades[i] > 0) {
                double subtotal = quantidades[i] * precos[i];
                System.out.printf("%d x %s = R$ %.2f%n", quantidades[i], produtos[i], subtotal);
                total += subtotal;
            }
        }

        System.out.printf("\n Valor total do pedido: R$ %.2f%n", total);
        input.close();
    }
}