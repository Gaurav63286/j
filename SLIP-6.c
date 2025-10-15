//SLIP 6
// Q1
class Emp {
int id, salary;
String name;
String desig;
Emp(int id, String name, int salary, String desig) {
this.id = id;
this.name = name;
this.salary = salary;
this.desig = desig;
}
public String toString()
{
return id + " " + name + " " + salary + " " + desig;
}
public static void main(String args[]) {
Emp E1 = new Emp(111, "Mayur", 50000, "HR");
Emp E2 = new Emp(112, "Mangesh", 25000, "Manager");
System.out.println("Employee details: " + E1);
System.out.println("Employee details: " + E2);
}
}
// Q2
import java.util.Scanner;
abstract class Order {
String des;
int id;
public abstract void accept();
public abstract void display();
}
class Porder extends Order {
String cnm, vnm;
public void accept() {
Scanner scanner = new Scanner(System.in);
System.out.println("Enter Purchase Order ID:");
id = scanner.nextInt();
System.out.println("Enter Purchase Order Description:");
des = scanner.next();
scanner.nextLine();
System.out.println("Enter Customer Name:");
cnm = scanner.nextLine();
System.out.println("Enter Vendor Name:");
vnm = scanner.nextLine();
}
public void display() {
System.out.println("\nPurchase Order ID: " + id);
System.out.println("Description: " + des);
System.out.println("Customer Name: " + cnm);
System.out.println("Vendor Name: " + vnm);
System.out.println("-------------------");
}
}
class Sorder extends Order {
String cnm, vnm;
public void accept() {
Scanner scanner = new Scanner(System.in);
System.out.println("Enter Sales Order ID:");
id = scanner.nextInt();
System.out.println("Enter Sales Order Description:");
des = scanner.next();
scanner.nextLine();
System.out.println("Enter Customer Name:");
cnm = scanner.nextLine();
System.out.println("Enter Vendor Name:");
vnm = scanner.nextLine();
}
public void display() {
System.out.println("Sales Order ID: " + id);
System.out.println("Description: " + des);
System.out.println("Customer Name: " + cnm);
System.out.println("Vendor Name: " + vnm);
System.out.println("-------------------");
}
}
class Q2 {
public static void main(String[] args) {
Scanner scanner = new Scanner(System.in);
int choice;
while (true) {
System.out.println("Select an option:");
System.out.println("1. Create Purchase Order");
System.out.println("2. Create Sales Order");
System.out.println("3. Exit");
choice = scanner.nextInt();
switch (choice) {
case 1:
System.out.println("Enter the number of Purchase Orders:");
int n = scanner.nextInt();
Porder[] purchaseOrders = new Porder[n];
for (int i = 0; i < n; i++) {
purchaseOrders[i] = new Porder();
purchaseOrders[i].accept();
}
for (Porder porder : purchaseOrders) {
porder.display();
}
break;
case 2:
System.out.println("Enter the number of Sales Orders:");
int m = scanner.nextInt();
Sorder[] salesOrders = new Sorder[m];
for (int i = 0; i < m; i++) {
salesOrders[i] = new Sorder();
salesOrders[i].accept();
}
for (Sorder sorder : salesOrders) {
sorder.display();
}
break;
case 3:
System.out.println("Exiting...");
System.exit(0);
default:
System.out.println("Invalid choice. Please try again.");
}
}
}
}