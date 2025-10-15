//q1
abstract class Shape {
int dim1, dim2;
abstract void printArea();
}

class Rectangle extends Shape {
Rectangle(int length, int breadth) {
this.dim1 = length;
this.dim2 = breadth;
}
void printArea() {
int area = dim1 * dim2;
System.out.println("Rectangle Area: " + area);
}
}

class Triangle extends Shape {
Triangle(int base, int height) {
this.dim1 = base;
this.dim2 = height;
}
void printArea() {
double area = 0.5 * dim1 * dim2;
System.out.println("Triangle Area: " + area);
}
}

class Circle extends Shape {
Circle(int radius) {
this.dim1 = radius;
}
void printArea() {
double area = Math.PI * dim1 * dim1;
System.out.println("Circle Area: " + area);
}
}

public class ShapeTest {
public static void main(String[] args) {
Rectangle rect = new Rectangle(10, 5);
Triangle tri = new Triangle(6, 8);
Circle cir = new Circle(7);
rect.printArea();
tri.printArea();
cir.printArea();
}
}


//q2
import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class MouseEventDemo extends JFrame {
private JLabel label;

public MouseEventDemo() {
setTitle("Mouse Event Demo");
setSize(400, 400);
setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
setLayout(new BorderLayout());
label = new JLabel("", SwingConstants.CENTER);
label.setFont(new Font("Arial", Font.BOLD, 20));
label.setForeground(Color.RED);
add(label, BorderLayout.CENTER);
addMouseListener(new MouseAdapter() {
public void mouseClicked(MouseEvent e) {
label.setText("Mouse Clicked");
}
public void mouseEntered(MouseEvent e) {
label.setText("Mouse Entered");
}
public void mouseExited(MouseEvent e) {
label.setText("Mouse Exited");
}
public void mousePressed(MouseEvent e) {
label.setText("Mouse Pressed");
}
public void mouseReleased(MouseEvent e) {
label.setText("Mouse Released");
}
});
addMouseMotionListener(new MouseAdapter() {
public void mouseMoved(MouseEvent e) {
label.setText("Mouse Moved");
}
public void mouseDragged(MouseEvent e) {
label.setText("Mouse Dragged");
}
});
setVisible(true);
}

public static void main(String[] args) {
new MouseEventDemo();
}
}
