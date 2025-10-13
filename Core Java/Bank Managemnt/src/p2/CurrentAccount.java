package p2;

import java.util.Date;
import p1.Account;
import p1.Transaction;

public class CurrentAccount extends Account {
   double overDraftLimit;
   double overDraftBalance;
   String businessName;
   boolean isFrozen;
   double interestRate;
   double overDraftRate;

   CurrentAccount() {
      this.overDraftLimit = 50000.0;
      this.overDraftBalance = 20000.0;
      this.businessName = "Dairy";
      this.isFrozen = false;
      this.interestRate = 0.03;
      this.overDraftRate = 0.05;
   }

   public CurrentAccount(String accountHolderName, int accNo, String accountType, double currentBalance, String panNumber, String aadharNumber, String contactNumber, double overDraftLimit, double overDraftBalance, String businessName, boolean isFrozen, double interesetRate, double interestRate, double overDraftRate) {
      super(accountHolderName, accNo, accountType, currentBalance, panNumber, aadharNumber, contactNumber);
      this.overDraftLimit = overDraftLimit;
      this.overDraftBalance = overDraftBalance;
      this.businessName = businessName;
      this.isFrozen = isFrozen;
      this.interestRate = interestRate;
   }

   double getOverDraftLimit() {
      return this.overDraftLimit;
   }

   void setOverDraftLimit(double overDraftLimit) {
      this.overDraftLimit = overDraftLimit;
   }

   double getOverDraftBalance() {
      return this.overDraftBalance;
   }

   void setOverDraftBalance(double overDraftBalance) {
      this.overDraftBalance = overDraftBalance;
   }

   String getBusinessName() {
      return this.businessName;
   }

   void setBusinessName(String businessName) {
      this.businessName = businessName;
   }

   boolean isFrozen() {
      return this.isFrozen;
   }

   void setFrozen(boolean isFrozen) {
      this.isFrozen = isFrozen;
   }

   double getInterestRate() {
      return this.interestRate;
   }

   void setInterestRate(double interestRate) {
      this.interestRate = interestRate;
   }

   double getOverDraftRate() {
      return this.overDraftRate;
   }

   void setOverDraftRate(double overDraftRate) {
      this.overDraftRate = overDraftRate;
   }

   public String toString() {
      String var10000 = super.toString();
      return var10000 + "OverDraft Limit : " + this.overDraftLimit + "\nOverDraft Balance : " + this.overDraftBalance + "\nBusiness Name : " + this.businessName + "\nIsFrozen : " + this.isFrozen + "\n";
   }

   public void withdraw(double amount) {
      if (amount > this.getCurrentBalance() + this.overDraftLimit) {
         System.out.println("Overdraft limit exceeded !");
      } else {
         double balance = this.getCurrentBalance();
         double var10000 = balance - amount;
         if (this.transCount < this.transactions.length) {
            this.transactions[this.transCount] = new Transaction(transId++, new Date(), "withdraw", amount, this.accountNumber);
            ++this.transCount;
            System.out.println();
         }

      }
   }

   public void calculateInterest(int year) {
      double interest;
      if (this.getCurrentBalance() > 0.0) {
         interest = this.getCurrentBalance() * this.interestRate * (double)year;
         System.out.println("Interest on positive balance for " + year + " years: ₹" + interest);
         this.setCurrentBalance(this.getCurrentBalance() + interest);
      } else if (this.getCurrentBalance() < 0.0) {
         interest = -this.getCurrentBalance() * this.overDraftRate * (double)year;
         System.out.println("Overdraft interest for " + year + " years: ₹" + interest);
         this.setCurrentBalance(this.getCurrentBalance() - interest);
      } else {
         System.out.println("No interest. Balance is zero.");
      }

   }
}
