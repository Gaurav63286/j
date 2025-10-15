//SLIP 16 Q1
import java.util.Scanner;

@FunctionalInterface
interface Square {
double calculateSquare(double number);
}

public class SquareCalculator {
public static void main(String[] args) {
Scanner scanner = new Scanner(System.in);
Square squareFunction = (number) -> number * number;
System.out.print("Enter a number to find its square: ");
double inputNumber = scanner.nextDouble();
double result = squareFunction.calculateSquare(inputNumber);
System.out.println("The square of " + inputNumber + " is: " + result);
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

//SLIP 16 Q2
import javax.swing.*;
class Menu_bar
{
JMenu File;
JMenu Edit;
JMenu About;
JMenuItem i1,i2,i3,i4,i5;
Menu_bar()
{
JFrame f=new JFrame("java AWT Examples");
JMenuBar mb=new JMenuBar();
File =new JMenu("File");
File=new JMenu("Edit");
File=new JMenu("About");
i1=new JMenuItem("New Ctrl+N");
i2=new JMenuItem("Open");
i3=new JMenuItem("Save");
i4=new JMenuItem("Show About");
i5=new JMenuItem("Exit");
File.add(i1);
File.add(i2);
File.add(i3);
File.addSeparator();
File.add(i4);
File.addSeparator();
File.add(i5);
mb.add(File);
mb.add(Edit);
mb.add(About);
f.setJMenuBar(mb);
f.setSize(400,400);
f.setLayout(null);
}
public static void main(String args[])
{
new Menu_bar();
}

}
