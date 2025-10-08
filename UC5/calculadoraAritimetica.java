package atividadeCalculadora;

import java.util.Scanner;

public class calculadoraAritimetica {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		try {
			System.out.println("Enter the first number: ");
			double num1 = Double.parseDouble(input.nextLine().replace(",", "."));
			
			System.out.println("Enter the second number: ");
			double num2 = Double.parseDouble(input.nextLine().replace(",", "."));
			
			System.out.println("\nChoose an operation:");
			System.out.println("1 - Sum");
			System.out.println("2 - Subtraction");
			System.out.println("3 - Multiplication");
			System.out.println("4 - Division");
			System.out.print("Option: ");
			int opcao = Integer.parseInt(input.nextLine());
			
			double result;
			
			switch (opcao) {
			case 1:
				result = num1 + num2;
				System.out.println("Result of the sum: " + result);
				break;
			case 2:
				result = num1 - num2;
				System.out.println("Result of the subtraction: " + result);
				break;
			case 3:
				result = num1 * num2;
				System.out.println("Result of the multiplication: " + result);
				break;
			case 4:
				if (num2 != 0) {
					result = num1 / num2;
					System.out.println("Result of the division: " + result);	
				} else {
					System.out.println("Error: division by zero.");
				}
				break;
			default:	 
				System.out.println("Invalid option.");	
			}
			
		} catch (NumberFormatException e) {
			System.out.println("Error: Invalid input. Use valid numbers with dot to be a decimal separator");
		}
		
		input.close();
	}

}
