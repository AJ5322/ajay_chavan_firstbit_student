package p1;

import java.util.Date;

public abstract class Account {
   String accountHolderName;
   protected int accountNumber;
   String accountType;
   double currentBalance;
   String panNumber;
   String aadharNumber;
   String contactNumber;
   protected int transCount;
   protected static int transId = 0;
   protected Transaction[] transactions = new Transaction[100];

   public Account() {
      this.accountHolderName = "Dhananjay Sangle";
      this.accountNumber = 101;
      this.accountType = "Saving account";
      this.currentBalance = 10000.0;
      this.panNumber = "ABCDE1234F";
      this.aadharNumber = "1234-5678-9012";
      this.contactNumber = "9876543210";
   }

   public Account(String accountHolderName, int accNo, String accountType, double currentBalance, String panNumber, String aadharNumber, String contactNumber) {
      this.accountHolderName = accountHolderName;
      this.accountNumber = accNo;
      this.accountType = accountType;
      this.currentBalance = currentBalance;
      this.panNumber = panNumber;
      this.aadharNumber = aadharNumber;
      this.contactNumber = contactNumber;
   }

   String getAccountHolderName() {
      return this.accountHolderName;
   }

   void setAccountHolderName(String accountHolderName) {
      this.accountHolderName = accountHolderName;
   }

   int getAccountNumber() {
      return this.accountNumber;
   }

   void setAccountNumber(int accountNumber) {
      this.accountNumber = accountNumber;
   }

   String getAccountType() {
      return this.accountType;
   }

   void setAccountType(String accountType) {
      this.accountType = accountType;
   }

   protected double getCurrentBalance() {
      return this.currentBalance;
   }

   protected void setCurrentBalance(double currentBalance) {
      this.currentBalance = currentBalance;
   }

   String getPanNumber() {
      return this.panNumber;
   }

   void setPanNumber(String panNumber) {
      this.panNumber = panNumber;
   }

   String getAadharNumber() {
      return this.aadharNumber;
   }

   void setAadharNumber(String aadharNumber) {
      this.aadharNumber = aadharNumber;
   }

   String getContactNumber() {
      return this.contactNumber;
   }

   void setContactNumber(String contactNumber) {
      this.contactNumber = contactNumber;
   }

   public String toString() {
      return "Account Holder : " + this.accountHolderName + "\nAccount Number : " + this.accountNumber + "\nAccount Type : " + this.accountType + "\nBalance : " + this.currentBalance + "\nPAN Number : " + this.panNumber + "\nAadhar Number : " + this.aadharNumber + "\nContact : " + this.contactNumber + "\n";
   }

   public abstract void withdraw(double var1);

   public abstract void calculateInterest(int var1);

   public void deposit(double amount) {
      this.currentBalance += amount;
      System.out.println("Deposited Successfully");
      if (this.transCount < this.transactions.length) {
         this.transactions[this.transCount++] = new Transaction(this.transCount++, new Date(), "Deposit", amount, this.accountNumber);
      }

   }

   public double checkBalance() {
      return this.currentBalance;
   }

   public boolean transferMoney(Account receiver, double amount) {
      if (this.currentBalance <= 0.0) {
         System.out.println("Invalid transfer amount ");
         return false;
      } else if (receiver == null) {
         System.out.println("Account not exits");
         return false;
      } else if (this.currentBalance < amount) {
         System.out.println("Insufficient balance.");
         return false;
      } else {
         this.currentBalance -= amount;
         receiver.currentBalance += amount;
         if (this.transCount < this.transactions.length) {
            this.transactions[this.transCount++] = new Transaction(transId++, new Date(), "Transfer out", amount, this.accountNumber);
         }

         if (receiver.transCount < receiver.transactions.length) {
            receiver.transactions[receiver.transCount++] = new Transaction(transId++, new Date(), "Transfer in", amount, receiver.accountNumber);
         }

         return true;
      }
   }

   public void endOfDayReport() {
      System.out.println("\n--- Transaction Report for Account " + this.accountNumber + " ---");
      if (this.transCount == 0) {
         System.out.println("No transactions found.");
      } else {
         for(int i = 0; i < this.transCount; ++i) {
            if (this.transactions[i] != null) {
               this.transactions[i].getRecord();
               System.out.println();
            }
         }

      }
   }
}
