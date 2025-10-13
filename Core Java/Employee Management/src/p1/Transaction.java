package p1;

import java.util.Date;

public class Transaction {
   int transactionId;
   Date date;
   String type;
   double amount;
   int accountNumber;

   Transaction() {
      this.transactionId = 12;
      this.date = new Date();
      this.type = "Deposit";
      this.amount = 69999.0;
      this.accountNumber = 234;
   }

   public Transaction(int transactionId, Date date2, String type, double amount, int accountNumber2) {
      this.transactionId = transactionId;
      this.date = date2;
      this.type = type;
      this.amount = amount;
      this.accountNumber = accountNumber2;
   }

   int getTransactionId() {
      return this.transactionId;
   }

   void setTransactionId(int transactionId) {
      this.transactionId = transactionId;
   }

   Date getDate() {
      return this.date;
   }

   void setDate(Date date) {
      this.date = date;
   }

   String getType() {
      return this.type;
   }

   void setType(String type) {
      this.type = type;
   }

   double getAmount() {
      return this.amount;
   }

   void setAmount(double amount) {
      this.amount = amount;
   }

   int getAccountNumber() {
      return this.accountNumber;
   }

   void setAccountNumber(int accountNumber) {
      this.accountNumber = accountNumber;
   }

   public void getRecord() {
      System.out.println("Transaction ID: " + this.transactionId);
      System.out.println("Date: " + String.valueOf(this.date));
      System.out.println("Type: " + this.type);
      System.out.println("Amount: " + this.amount);
      System.out.println("Account Number: " + this.accountNumber);
   }
}
