// SLIP 7
// Q1
class Bank {
private double balance;
public Bank() {
balance = 0;
}
public Bank(double initialBalance) {
balance = initialBalance;
}
public void deposit(double amount) {
balance = balance + amount;
}
public void withdraw(double amount) {
balance = balance - amount;
}
public double getBalance() {
return balance;
}
public static void main(String[] args) {
Bank b = new Bank(1000);
b.withdraw(250);
System.out.println("The withdraw is:" + b.balance);
b.deposit(400);
System.out.println("The deposit is:" + b.balance);
System.out.println("The balance is:" + b.getBalance());
}
}
//Q2
import java.io.*;
import java.util.*;
class Q2 {
public static void main(String args[]) throws IOException {
Scanner sc = new Scanner(System.in);
System.out.println("Enter file Name :");
String File_name = sc.next();
FileInputStream fis = new FileInputStream(File_name);
BufferedInputStream bis = new BufferedInputStream(fis);
System.out.println("File Content in reverse order are :");
int size = fis.available();
for (int i = size - 1; i >= 0; i--) {
bis.mark(i);
bis.skip(i);
char c = (char) bis.read();
System.out.print(Character.toUpperCase(c));
bis.reset();
}
System.out.println();
bis.close();
}
}