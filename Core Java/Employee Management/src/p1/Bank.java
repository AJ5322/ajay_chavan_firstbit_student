package p1;

import java.util.Scanner;
import p2.CurrentAccount;
import p2.LoanAccount;
import p2.SalaryAccount;
import p2.SavingAccount;

public class Bank {
   Account[] accounts = new Account[50];
   int size = 0;
   String branchName = "City Bank";

   public Bank() {
   }

   public void createAccount(Scanner sc) {
      System.out.println("\nSelect Account Type:");
      System.out.println("1. Saving\n2. Current\n3. Loan\n4. Salary");
      int choice = sc.nextInt();
      sc.nextLine();
      System.out.print("Enter Account Holder Name: ");
      String name = sc.nextLine();
      System.out.print("Enter Account Number: ");
      int accNo = sc.nextInt();
      System.out.print("Enter Opening Balance: ");
      double balance = sc.nextDouble();
      switch (choice) {
         case 1:
            this.accounts[this.size++] = new SavingAccount(name, accNo, "Saving", balance, "PAN123", "AAD123", "9999999999", 30000.0, 7.0F, 5000.0, false);
            break;
         case 2:
            this.accounts[this.size++] = new CurrentAccount(name, accNo, "Current", balance, "PAN123", "AAD123", "9999999999", 50000.0, 20000.0, "Business", false, 0.03, 0.03, 0.05);
            break;
         case 3:
            this.accounts[this.size++] = new LoanAccount(name, accNo, "Loan", balance, "PAN123", "AAD123", "9999999999", 50000.0, 0.0, 50000.0, false, "Personal Loan", 0.0);
            break;
         case 4:
            this.accounts[this.size++] = new SalaryAccount(name, accNo, "Salary", balance, "PAN123", "AAD123", "9999999999", 75000.0, 5000.0);
            break;
         default:
            System.out.println("❌ Invalid choice!");
            return;
      }

      System.out.println(" Account created successfully!");
   }

   public Account getAccount(int accNo) {
      for(int i = 0; i < this.size; ++i) {
         if (this.accounts[i].getAccountNumber() == accNo) {
            return this.accounts[i];
         }
      }

      return null;
   }

   public void displayAllAccounts() {
      if (this.size == 0) {
         System.out.println("No accounts found.");
      } else {
         for(int i = 0; i < this.size; ++i) {
            System.out.println("\n--- Account " + (i + 1) + " ---");
            System.out.println(this.accounts[i]);
         }

      }
   }
}
