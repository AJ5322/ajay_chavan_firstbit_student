// Source code is decompiled from a .class file using FernFlower decompiler (from Intellij IDEA).
package p2;

import java.util.Date;
import p1.Account;
import p1.Transaction;

public class SavingAccount extends Account {
   double minBalance;
   float tdInterest;
   double withdrawLimit;
   boolean isFrozen;
   double fdAmount;
   double fdYears;

   double getFdAmount() {
      return this.fdAmount;
   }

   void setFdAmount(double fdAmount) {
      this.fdAmount = fdAmount;
   }

   double getFdYears() {
      return this.fdYears;
   }

   void setFdYears(double fdYears) {
      this.fdYears = fdYears;
   }

   SavingAccount() {
      this.minBalance = 30000.0;
      this.tdInterest = 7.0F;
      this.withdrawLimit = 5000.0;
      this.isFrozen = false;
   }

   public SavingAccount(String accountHolderName, int accNo, String accountType, double currentBalance, String panNumber, String aadharNumber, String contactNumber, double minBalance, float tdInterest, double withdrawLimit, boolean isFrozen) {
      super(accountHolderName, accNo, accountType, currentBalance, panNumber, aadharNumber, contactNumber);
      this.minBalance = minBalance;
      this.tdInterest = tdInterest;
      this.withdrawLimit = withdrawLimit;
      this.isFrozen = isFrozen;
   }

   double getMinBalance() {
      return this.minBalance;
   }

   void setMinBalance(double minBalance) {
      this.minBalance = minBalance;
   }

   float getTdInterest() {
      return this.tdInterest;
   }

   void setTdInterest(float tdInterest) {
      this.tdInterest = tdInterest;
   }

   double getWithdrawLimit() {
      return this.withdrawLimit;
   }

   void setWithdrawLimit(double withdrawLimit) {
      this.withdrawLimit = withdrawLimit;
   }

   boolean isFrozen() {
      return this.isFrozen;
   }

   void setFrozen(boolean isFrozen) {
      this.isFrozen = isFrozen;
   }

   public String toString() {
      String var10000 = super.toString();
      return var10000 + "Minimum Balance: ₹" + this.minBalance + "\nFD Amount: ₹" + this.fdAmount + " for " + this.fdYears + " years\n";
   }

   public boolean checkMinBalance() {
      if (this.getCurrentBalance() < this.minBalance) {
         System.out.println("Balance below minimum of " + this.minBalance);
         return false;
      } else {
         System.out.println("Minimum balance maintained: " + this.getCurrentBalance());
         return true;
      }
   }

   public void withdraw(double amount) {
      if (amount <= 0.0) {
         System.out.println("Invalid withdrawal amount.");
      } else if (this.getCurrentBalance() - amount < this.minBalance) {
         System.out.println("Cannot withdraw. Minimum balance of ₹" + this.minBalance + " must be maintained.");
      } else {
         this.setCurrentBalance(this.getCurrentBalance() - amount);
         System.out.println(" Withdrawal successful. Current Balance: ₹" + this.getCurrentBalance());
         if (this.transCount < this.transactions.length) {
            this.transactions[this.transCount] = new Transaction(transId++, new Date(), "withdraw", amount, this.accountNumber);
            ++this.transCount;
            System.out.println();
         } else {
            System.out.println("Array is full");
         }

      }
   }

   public void calculateInterest(int year) {
      double fdInterestRate;
      if (this.getCurrentBalance() > 0.0) {
         fdInterestRate = this.getCurrentBalance() * (double)this.tdInterest * (double)year;
         this.setCurrentBalance(this.getCurrentBalance() + fdInterestRate);
         System.out.println("Interest on balance for " + year + " years: ₹" + fdInterestRate);
      }

      if (this.fdAmount > 0.0) {
         fdInterestRate = 0.07;
         double fdInterest = this.fdAmount * fdInterestRate * this.fdYears;
         System.out.println("FD Interest for " + this.fdYears + " years: ₹" + fdInterest);
      }

   }

   public void openFD(double amount, int year) {
      if (!(amount <= 0.0) && year > 0) {
         if (this.getCurrentBalance() - amount < this.minBalance) {
            System.out.println("Cannot open FD. Minimum balance of ₹" + this.minBalance + " must be maintained.");
         } else {
            this.fdAmount = amount;
            this.fdYears = (double)year;
            this.setCurrentBalance(this.getCurrentBalance() - amount);
            System.out.println("FD opened: ₹" + amount + " for " + year + " years.");
         }
      } else {
         System.out.println("Invalid FD amount or tenure.");
      }
   }
}
