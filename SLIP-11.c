// SLIP 11 Q1
import java.util.Scanner;
interface Operation {
float pi = 3.142f;
void volume();
}
class Cylinder implements Operation {
double radius, height;
public void input() {
Scanner sc = new Scanner(System.in);
System.out.print("Enter the radius: ");
radius = sc.nextDouble();
System.out.print("Enter the height: ");
height = sc.nextDouble();
}
public void volume() {
double v = pi * radius * radius * height;
System.out.println("The volume of the cylinder is: " + v);
}
}
public class Q1 {
public static void main(String[] args) {
Cylinder cylinder = new Cylinder();
cylinder.input();
cylinder.volume();
}
}
// Q2
import java.util.Scanner;
public class UserLogin {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
System.out.print("Enter username: ");
String username = sc.nextLine();
System.out.print("Enter password: ");
String password = sc.nextLine();
try {
if (username.equals(password)) {
System.out.println("Login successful!");
} else {
throw new Exception("Invalid Password: Password must match the username.");
}
} catch (Exception e) {
System.out.println("Error: " + e.getMessage());
}
}
}