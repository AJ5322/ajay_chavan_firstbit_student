package p2;

import java.util.Date;
import p1.Account;
import p1.Transaction;

public class LoanAccount extends Account {
   double loanAmount;
   double paidAmount;
   double remainingAmount;
   double monthlyEMI;
   boolean isFrozen;
   String loanType;

   LoanAccount() {
      this.loanAmount = 50000.0;
      this.paidAmount = 20000.0;
      this.remainingAmount = 30000.0;
      this.isFrozen = false;
      this.loanType = "Personal Loan";
      this.monthlyEMI = 2000.0;
   }

   public LoanAccount(String accountHolderName, int accNo, String accountType, double currentBalance, String panNumber, String aadharNumber, String contactNumber, double loanAmount, double paidAmount, double remainingAmount, boolean isFrozen, String loanType, double monthlyEMI) {
      super(accountHolderName, accNo, accountType, currentBalance, panNumber, aadharNumber, contactNumber);
      this.loanAmount = loanAmount;
      this.paidAmount = paidAmount;
      this.remainingAmount = remainingAmount;
      this.isFrozen = isFrozen;
      this.loanType = loanType;
      this.monthlyEMI = monthlyEMI;
   }

   double getLoanAmount() {
      return this.loanAmount;
   }

   void setLoanAmount(double loanAmount) {
      this.loanAmount = loanAmount;
   }

   double getPaidAmount() {
      return this.paidAmount;
   }

   void setPaidAmount(double paidAmount) {
      this.paidAmount = paidAmount;
   }

   double getRemainingAmount() {
      return this.remainingAmount;
   }

   void setRemainingAmount(double remainingAmount) {
      this.remainingAmount = remainingAmount;
   }

   boolean isFrozen() {
      return this.isFrozen;
   }

   void setFrozen(boolean isFrozen) {
      this.isFrozen = isFrozen;
   }

   void setloanType(String loanType) {
      this.loanType = loanType;
   }

   String getLoanType() {
      return this.loanType;
   }

   double getMonthlyEMI() {
      return this.monthlyEMI;
   }

   void setMonthlyEMI(double monthlyEMI) {
      this.monthlyEMI = monthlyEMI;
   }

   void setLoanType(String loanType) {
      this.loanType = loanType;
   }

   public String toString() {
      String var10000 = super.toString();
      return var10000 + "Loan Amount : " + this.loanAmount + "\nPaid Amount : " + this.paidAmount + "\nRemaining Amount : " + this.remainingAmount + "\nIs Frozen : " + this.isFrozen + "\n";
   }

   public void withdraw(double amount) {
      System.out.println("Withdraw not allowed for load account");
   }

   public void calculateInterest(int years) {
      double annualInterestRate;
      if (this.loanType.equals("Personal Loan")) {
         annualInterestRate = 0.1;
      } else if (this.loanType.equals("Home Loan")) {
         annualInterestRate = 0.08;
      } else if (this.loanType.equals("Vehicle Loan")) {
         annualInterestRate = 0.09;
      } else if (this.loanType.equals("Education Loan")) {
         annualInterestRate = 0.08;
      } else {
         annualInterestRate = 0.13;
      }

      double monthlyInterestRate = annualInterestRate / 12.0;
      int totalMonths = years * 12;
      this.monthlyEMI = this.loanAmount * monthlyInterestRate * Math.pow(1.0 + monthlyInterestRate, (double)totalMonths) / (Math.pow(1.0 + monthlyInterestRate, (double)totalMonths) - 1.0);
      double currentBalance = this.monthlyEMI * (double)totalMonths;
      this.setCurrentBalance(currentBalance);
   }

   public void payEmI(double amount) {
      if (this.isFrozen) {
         System.out.println("Account is frozen. Cannot pay EMI.");
      } else if (amount <= 0.0) {
         System.out.println("Invalid EMI amount");
      } else if (this.remainingAmount <= 0.0) {
         System.out.println("Loan already fully paid !");
      } else {
         if (amount > this.remainingAmount) {
            amount = this.remainingAmount;
         }

         this.paidAmount += amount;
         this.remainingAmount -= amount;
         this.setCurrentBalance(this.remainingAmount);
         System.out.println("Emi of " + amount + "paid successfully");
         System.out.println("Paid Amount : " + this.paidAmount);
         System.out.println("Remaining Amount : " + this.remainingAmount);
         if (this.transCount < this.transactions.length) {
            this.transactions[this.transCount] = new Transaction(transId++, new Date(), "payEmi", amount, this.accountNumber);
            ++this.transCount;
            System.out.println();
         } else {
            System.out.println("Array is full");
         }

      }
   }

   public void checkLoanStatus() {
      if (this.remainingAmount == 0.0) {
         System.out.println("Status : Fully paid");
      } else {
         System.out.println("Status : Remaining");
      }

   }
}
