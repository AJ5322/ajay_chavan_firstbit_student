package View;

import java.util.Scanner;
import p1.Account;
import p1.Bank;
import p2.LoanAccount;
import p2.SalaryAccount;
import p2.SavingAccount;

public class MainBankApp {
   public MainBankApp() {
   }

   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      Bank bank = new Bank();

      while(true) {
         System.out.println("\n=======  BANK MENU =======");
         System.out.println("1. Create Account");
         System.out.println("2. Deposit");
         System.out.println("3. Withdraw");
         System.out.println("4. Transfer Money");
         System.out.println("5. Calculate Interest");
         System.out.println("6. Credit Salary");
         System.out.println("7. Pay EMI");
         System.out.println("8. Open FD");
         System.out.println("9. Check Loan Status");
         System.out.println("10. Display All Accounts");
         System.out.println("11. End of Day Report");
         System.out.println("0. Exit");
         System.out.print("Enter choice: ");
         int choice = sc.nextInt();
         sc.nextLine();
         int accNo1;
         Account acc1;
         switch (choice) 
         {
            case 0:
               System.out.println("Exiting Bank System. Goodbye!");
               return;
            case 1:
               bank.createAccount(sc);
               break;
            case 2:
               System.out.print("Enter Account No: ");
               accNo1 = sc.nextInt();
               acc1 = bank.getAccount(accNo1);
               if (acc1 == null)
               {
                  System.out.println("Account not found!");
               }
               else
               {
                  System.out.print("Enter amount: ");
                  acc1.deposit(sc.nextDouble());
               }
               break;
            case 3:
               System.out.print("Enter Account No: ");
               accNo1 = sc.nextInt();
               acc1 = bank.getAccount(accNo1);
               if (acc1 == null) 
               {
                  System.out.println("Account not found!");
               }
               else
               {
                  System.out.print("Enter amount: ");
                  acc1.withdraw(sc.nextDouble());
               }
               break;
            case 4:
               System.out.print("Enter Sender Account No: ");
               accNo1 = sc.nextInt();
               acc1 = bank.getAccount(accNo1);
               if (acc1 == null) {
                  System.out.println("Sender account not found!");
               } 
               else
               {
                  System.out.print("Enter Receiver Account No: ");
                  int recvNo = sc.nextInt();
                  Account receiver = bank.getAccount(recvNo);
                  System.out.print("Enter amount: ");
                  double amt = sc.nextDouble();
                  acc1.transferMoney(receiver, amt);
               }
               break;
            case 5:
               System.out.print("Enter Account No: ");
               accNo1 = sc.nextInt();
               acc1 = bank.getAccount(accNo1);
               if (acc1 == null) {
                  System.out.println("Account not found!");
               } 
               else
               {
                  System.out.print("Enter years: ");
                  acc1.calculateInterest(sc.nextInt());
               }
               break;
            case 6:
               System.out.print("Enter Account No: ");
               accNo1 = sc.nextInt();
               acc1 = bank.getAccount(accNo1);
               if (acc1 instanceof SalaryAccount) 
               {
                  ((SalaryAccount)acc1).creditSalary();
               }
               else
               {
                  System.out.println("Not a Salary Account or Account not found!");
               }
               break;
            case 7:
               System.out.print("Enter Account No: ");
               accNo1 = sc.nextInt();
               acc1 = bank.getAccount(accNo1);
               if (acc1 instanceof LoanAccount) 
               {
                  System.out.print("Enter EMI Amount: ");
                  ((LoanAccount)acc1).payEmI(sc.nextDouble());
               }
               else 
               {
                  System.out.println("Not a Loan Account or Account not found!");
               }
               break;
            case 8:
               System.out.print("Enter Account No: ");
               accNo1 = sc.nextInt();
               acc1 = bank.getAccount(accNo1);
               if (acc1 instanceof SavingAccount) 
               {
                  System.out.println("Enter FD Amount: ");
                  double amt = sc.nextDouble();
                  System.out.println("Enter FD Years: ");
                  int yrs = sc.nextInt();
                  ((SavingAccount)acc1).openFD(amt, yrs);
               } 
               else
               {
                  System.out.println("Not a Saving Account or Account not found!");
               }
               break;
            case 9:
               System.out.println("Enter Account No: ");
               accNo1 = sc.nextInt();
               acc1 = bank.getAccount(accNo1);
               if (acc1 instanceof LoanAccount) 
               {
                  ((LoanAccount)acc1).checkLoanStatus();
               } 
               else
               {
                  System.out.println("Not a Loan Account or Account not found!");
               }
               break;
            case 10:
               bank.displayAllAccounts();
               break;
            case 11:
               System.out.println("Enter Account No: ");
               accNo1 = sc.nextInt();
               acc1 = bank.getAccount(accNo1);
               if (acc1 != null) 
               {
                  acc1.endOfDayReport();
               } 
               else
               {
                  System.out.println("Account not found!");
               }
               break;
            default:
               System.out.println("Invalid choice!");
         }
      }
   }
}
