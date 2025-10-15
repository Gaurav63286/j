// SLIP 7
// Q1
slip 7-q1

class Bank {
    private String accno;
    private String acc_holder;
    private double balance;

    public Bank(String accno, String acc_holder, double initialBalance) {
        this.accno = accno;
        this.acc_holder = acc_holder;
        this.balance = initialBalance;
    }

    public void deposit(double amount) {
        balance += amount;
        System.out.println("\nDeposited: Rs." + amount);
    }

    public void withdraw(double amount) {
        balance -= amount;
        System.out.println("\nWithdrew: Rs." + amount);
    }

    public void checkBalance() {
        System.out.println("\nAccount Holder: " + acc_holder);
        System.out.println("Account Number: " + accno);
        System.out.println("Current Balance: Rs." + balance);
        System.out.println("-----------------");
    }

    public static void main(String[] args) {
        Bank account = new Bank("12345", "Mayur", 1000.0);

        account.checkBalance();
        account.deposit(500.0);
        account.withdraw(200.0);
        account.checkBalance();
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
