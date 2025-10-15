// SLIP 3

// Q1
import java.util.Arrays;
import java.util.Scanner;
public class Q1 {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
System.out.print("Enter the number of cities: ");
int n = sc.nextInt();
String[] cities = new String[n];
for (int i = 0; i < n; i++) {
System.out.print("Enter the name of city " + (i + 1) + ": ");
cities[i] = sc.next();
}
Arrays.sort(cities);
System.out.println("cities in Ascending order:");
for (int i=0;i<n;i++) {
System.out.println(cities[i]);
}
}
}
//Q2
import java.util.*;
class Patient {
String name;
int age;
int oxylevel;
int HRCTreport;
Patient(String name, int age, int oxylevel, int HRCTreport) {
this.name = name;
this.age = age;
this.oxylevel = oxylevel;
this.HRCTreport = HRCTreport;
}
void display() {
System.out.println("--------------------------------");
System.out.println("Name : " + name);
System.out.println("Age : " + age);
System.out.println("Oxygwn Level : " + oxylevel);
System.out.println("HRCT Report : " + HRCTreport);
}
}
public class Q2 extends Exception {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
System.out.println("How many patient you want insert:");
int number = sc.nextInt();
Patient[] ob = new Patient[number];
for (int j = 0; j < number; j++) {
System.out.println("Enter Name ");
String name = sc.next();
System.out.println("Enter Age ");
int age = sc.nextInt();
System.out.println("Enter oxygen level");
int oxylevel = sc.nextInt();
System.out.println("Enter HRCT report");
int HRCTreport = sc.nextInt();
ob[j] = new Patient(name, age, oxylevel, HRCTreport);
}
for (int j = 0; j < number; j++) {
System.out.println();
ob[j].display();
if (ob[j].oxylevel < 95 && ob[j].HRCTreport > 10)
try {
throw new NullPointerException("\n");
} catch (Exception e) {
System.out.println("Patient is Covid Positive(+) and Need to
Hospitalized\n\n");
}
}
}
}