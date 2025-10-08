package atendimentoBancario;

import java.util.Scanner;

public class MenuBancario {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		double Balance = 0;
		
		while(true) {
			System.out.println("Bank Menu");
			
			System.out.println("\nWhat you want to do:");
			System.out.println("1 - Check your balance:");
			System.out.println("2 - Make a deposit:");
			System.out.println("3 - Make withdrawal:");
			System.out.println("0 - Leave the system");
			System.out.println("Option:");
			int option = input.nextInt();
			
			
			
			switch (option) {
			case 1:
				System.out.println("This is your balance: " + Balance);
				break;
			case 2:
				System.out.println("Enter the money you want to deposit:");
				double Deposit = input.nextDouble();
				Balance = Balance + Deposit;
				System.out.println("Your balance now is: $" + Balance);
				break;
			case 3:
				System.out.println("How much you want to withdraw: ");
				double Withdraw = input.nextDouble();
				if (Balance >= Withdraw) {
					Balance = Balance - Withdraw;
				} else {
					System.out.println("You dont have money for that");
				}
				break;
			}
			
		}
	}

}
