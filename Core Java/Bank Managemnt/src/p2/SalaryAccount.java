package p2;

import java.util.Date;
import p1.Account;
import p1.Transaction;

public class SalaryAccount extends Account {
   double salaryAmount;
   double bonus;

   SalaryAccount() {
      this.salaryAmount = 75000.0;
      this.bonus = 5000.0;
   }

   public SalaryAccount(String accountHolderName, int accNo, String accountType, double currentBalance, String panNumber, String aadharNumber, String contactNumber, double salaryAmount, double bonus) {
      super(accountHolderName, accNo, accountType, currentBalance, panNumber, aadharNumber, contactNumber);
      this.salaryAmount = salaryAmount;
      this.bonus = bonus;
   }

   double getSalaryAmount() {
      return this.salaryAmount;
   }

   void setSalaryAmount(double salaryAmount) {
      this.salaryAmount = salaryAmount;
   }

   double getBonus() {
      return this.bonus;
   }

   void setBonus(double bonus) {
      this.bonus = bonus;
   }

   public String toString() {
      String var10000 = super.toString();
      return var10000 + "Salary Amount : " + this.salaryAmount + "\nBonus " + this.bonus + "\n";
   }

   public void calculateInterest(int year) {
      double interest = this.getCurrentBalance() * 0.03 * (double)year;
      System.out.println("Interest for " + year + " years: ₹" + interest);
   }

   public void withdraw(double amount) {
      if (this.getCurrentBalance() >= amount) {
         this.setCurrentBalance(this.getCurrentBalance() - amount);
         System.out.println("Withdraw succefully!");
      } else {
         System.out.println("Insufficient balance");
      }

      if (this.transCount < this.transactions.length) {
         this.transactions[this.transCount] = new Transaction(transId++, new Date(), "with", amount, this.accountNumber);
         ++this.transCount;
         System.out.println();
      } else {
         System.out.println("Array is full");
      }

   }

   public void creditSalary() {
      double totalSalary = this.salaryAmount + this.bonus;
      this.setCurrentBalance(this.getCurrentBalance() + totalSalary);
      System.out.println("Salary credited : " + totalSalary);
      System.out.println("Current balance : " + this.getCurrentBalance());
      if (this.transCount < this.transactions.length) {
         this.transactions[this.transCount] = new Transaction(transId++, new Date(), "Credit", totalSalary, this.accountNumber);
         ++this.transCount;
         System.out.println();
      } else {
         System.out.println("Array is full");
      }

   }
}
