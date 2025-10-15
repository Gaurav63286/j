
slip10_1.java

//? functional interface.
import java.util.Scanner;
interface Cube {
int calculate(int n);
}
public class slip10_1 {
public static void main(String[] args) {
Scanner scanner = new Scanner(System.in);
System.out.print("Enter a number: ");
int number = scanner.nextInt();
Cube cube = (n) -> n * n * n;
int result = cube.calculate(number);
System.out.println("Cube of " + number + " is: " + result);
scanner.close();
}
}


@FunctionalInterface
interface PrintNumber
{
public void print(int num1);
}
public class Printcube
{
public static void main(String[] a)
{
PrintNumber p = n -> System.out.println("Cube is: "+ n*n*n);
p.print(5);
}
}
//Q2
StudentInfo.java

package student;
public class StudentInfo {
private int rollNo;
private String name;
private String className;
private double percentage;

public StudentInfo(int rollNo, String name, String className, double percentage) {
this.rollNo = rollNo;
this.name = name;
this.className = className;
this.percentage = percentage;
}
public void displayInfo() {
System.out.println("Student Roll No: " + rollNo);
System.out.println("Student Name: " + name);
System.out.println("Class: " + className);
System.out.println("Percentage: " + percentage + "%");
}
}


package student;
import java.util.Scanner;
public class StudentPer {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
System.out.print("Enter Roll No: ");
int rollNo = sc.nextInt();
sc.nextLine();
System.out.print("Enter Name: ");
String name = sc.nextLine();
System.out.print("Enter Class: ");
String className = sc.nextLine();
int[] marks = new int[6];
int totalMarks = 0;
for (int i = 0; i < 6; i++) {
System.out.print("Enter marks for subject " + (i + 1) + ": ");
marks[i] = sc.nextInt();
totalMarks += marks[i];
}
double percentage = (double) totalMarks / 6;
StudentInfo student = new StudentInfo(rollNo, name, className, percentage);
student.displayInfo();
sc.close();
}
}

