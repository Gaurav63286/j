// SLIP 17 Q1
import java.util.*;
class Customer {
String name;
long Pno;
}
class Depositer extends Customer {
int accno;
double bal;
}
class borrower extends Depositer {
int loanno;
double loanamt;
void read() {
System.out.println("Enter name, Phone number, accno, bal, loanno, loanamt");
Scanner sc = new Scanner(System.in);
this.name = sc.next();
this.Pno = sc.nextLong();
this.accno = sc.nextInt();
this.bal = sc.nextDouble();
this.loanno = sc.nextInt();
this.loanamt = sc.nextDouble();
}
void display() {
System.out.println("\nName: " + name);
System.out.println("Phone Number: " + Pno);
System.out.println("Account Number: " + accno);
System.out.println("Balance: " + bal);
System.out.println("Loan number: " + loanno);
System.out.println("Loan amount: " + loanamt);
System.out.println("------------------------------------");
}
public static void main(String args[]) {
int i;
Scanner sc = new Scanner(System.in);
System.out.println("Enter total number:");
int n = sc.nextInt();
borrower br[] = new borrower[n];
for (i = 0; i < n; i++) {
br[i] = new borrower();
br[i].read();
}
System.out.println("The details are:");
for (i = 0; i < n; i++) {
br[i].display();
}
}
}
// Q2
import javax.swing.*;
import java.awt.event.*;
class TextField implements ActionListener {
JTextField t1, t2, t3;
JButton b1, b2;
TextField() {
JFrame f = new JFrame("String operation");
t1 = new JTextField();
t1.setBounds(50, 50, 150, 20);
t2 = new JTextField();
t2.setBounds(50, 100, 150, 20);
t3 = new JTextField();
t3.setBounds(50, 150, 150, 20);
t3.setEditable(false);
b1 = new JButton("Concate");
b1.setBounds(30, 200, 100, 50);
b2 = new JButton("Reverse");
b2.setBounds(150, 200, 100, 50);
b1.addActionListener(this);
b2.addActionListener(this);
f.add(t1);
f.add(t2);
f.add(t3);
f.add(b1);
f.add(b2);
f.setSize(300, 300);
f.setLayout(null);
f.setVisible(true);
}
public void actionPerformed(ActionEvent e) {
String s1 = t1.getText();
String s2 = t2.getText();
if (e.getSource() == b1) {
String s3 = s1 + s2;
t3.setText(s3);
} else if (e.getSource() == b2) {
String str = s1;
String strArray = " ";
for (int i = str.length() - 1; i >= 0; i--) {
strArray = strArray + str.charAt(i);
}
t3.setText(strArray);
}
}
public static void main(String args[]) {
new TextField();
}
}