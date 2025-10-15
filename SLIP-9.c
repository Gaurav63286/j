// SLIP 9
// Q1
import java.util.*;
class Clock {
int hours, minutes, seconds;
Clock() {
System.out.println("enter the time in HH MM SS format");
Scanner sc = new Scanner(System.in);
this.hours = sc.nextInt();
this.minutes = sc.nextInt();
this.seconds = sc.nextInt();
}
void isTimeValid() {
if ((hours >= 0 && hours < 24) && (minutes > 0 && minutes < 60)
&& (seconds > 0 && seconds < 60))
System.out.println("time is valid");
else
System.out.println("time is not valid");
}
void setTimeMode() {
if (hours < 12) {
System.out.println("time ="
+ hours + ":" + minutes + ":" + seconds + " AM");
} else
hours = hours - 12;
if (hours == 0) {
hours = 12;
}
System.out.println("time ="
+ hours + ":" + minutes + ":" + seconds + " PM");
}
public static void main(String args[]) {
Clock c = new Clock();
c.isTimeValid();
c.setTimeMode();
}
}
// Q2
interface ProductMarker {
}
class Product implements ProductMarker {
int product_id;
String product_name;
double product_cost;
int product_quantity;
static int objectCount = 0;
Product() {
objectCount++;
}
Product(int id, String name, double cost, int quantity) {
this.product_id = id;
this.product_name = name;
this.product_cost = cost;
this.product_quantity = quantity;
objectCount++;
}
void display() {
System.out.println("Product ID: " + product_id);
System.out.println("Product Name: " + product_name);
System.out.println("Product Cost: " + product_cost);
System.out.println("Product Quantity: " + product_quantity);
System.out.println("--------------------------");
}
static void displayObjectCount() {
System.out.println("Total Products Created: " + objectCount);
}
public static void main(String[] args) {
Product p1 = new Product(101, "Laptop", 50000.00, 10);
Product p2 = new Product(102, "Smartphone", 20000.00, 15);
p1.display();
p2.display();
Product.displayObjectCount();
}
}