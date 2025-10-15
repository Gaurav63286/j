// SLIP 15
// Q1
import java.util.*;
import java.io.*;
public class file {
public static void main(String[] args)throws IOException
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter the First filename:");
String f1=sc.next();
System.out.println("Enter second filename:");
String f2=sc.next();
FileInputStream fis=new FileInputStream(f1);
FileOutputStream fos=new FileOutputStream(f2);
int ch;
while((ch=fis.read())!=-1)
{
fos.write(ch);
}
System.out.println("Data is copied successfully");
fis.close();
fos.close();
}
}
// Q2
class Account {
String custName;
String accNo;
public Account() {
this.custName = "Unknown";
this.accNo = "0000";
}
public Account(String custName, String accNo) {
this.custName = custName;
this.accNo = accNo;
}
}
class SavingAccount extends Account {
double savingBal;
double minBal;
public SavingAccount(String custName, String accNo, double savingBal, double minBal) {
super(custName, accNo);
this.savingBal = savingBal;
this.minBal = minBal;
}
}
class AccountDetail extends SavingAccount {
double depositAmt;
double withdrawalAmt;
public AccountDetail(String custName, String accNo, double savingBal, double minBal,
double depositAmt, double withdrawalAmt) {
super(custName, accNo, savingBal, minBal);
this.depositAmt = depositAmt;
this.withdrawalAmt = withdrawalAmt;
}
public void display_details() {
System.out.println("Customer Name: " + custName);
System.out.println("Account Number: " + accNo);
System.out.println("Saving Balance: " + savingBal);
System.out.println("Minimum Balance: " + minBal);
System.out.println("Deposit Amount: " + depositAmt);
System.out.println("Withdrawal Amount: " + withdrawalAmt);
}
public static void main(String[] args) {
AccountDetail c = new AccountDetail("Mayur Ahire", "011223523", 5000.0, 1000.0,
2000.0, 500.0);
c.display_details();
}
}