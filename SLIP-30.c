//q1
import java.util.Scanner;

class Person {
    String personName, aadharNo, panNo;

    Person(String personName, String aadharNo, String panNo) {
        this.personName = personName;
        this.aadharNo = aadharNo;
        this.panNo = panNo;
    }

    void display() {
        System.out.println("Name: " + this.personName);
        System.out.println("Aadhar No: " + this.aadharNo);
        System.out.println("PAN No: " + this.panNo);
        System.out.println("----------------------");
    }
}

public class PersonDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Person[] people = new Person[5];

        for (int i = 0; i < 5; i++) {
            System.out.println("Enter details for Person " + (i + 1));
            System.out.print("Name: "); String name = sc.nextLine();
            System.out.print("Aadhar No: "); String aadhar = sc.nextLine();
            System.out.print("PAN No: "); String pan = sc.nextLine();
            people[i] = new Person(name, aadhar, pan);
        }

        System.out.println("\n--- Person Information ---");
        for (Person p : people) p.display();
        sc.close();
    }
}
//q2
import javax.swing.*;
import java.awt.event.*;

public class DivisionGUI {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Integer Division");
        frame.setSize(350, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(null);

        JLabel lbl1 = new JLabel("Number1");
        lbl1.setBounds(20, 20, 80, 25);
        JTextField num1Field = new JTextField();
        num1Field.setBounds(100, 20, 100, 25);

        JLabel lbl2 = new JLabel("Number2");
        lbl2.setBounds(20, 60, 80, 25);
        JTextField num2Field = new JTextField();
        num2Field.setBounds(100, 60, 100, 25);

        JLabel lblResult = new JLabel("Result");
        lblResult.setBounds(20, 100, 80, 25);
        JTextField resultField = new JTextField();
        resultField.setBounds(100, 100, 100, 25);
        resultField.setEditable(false);

        JButton divideBtn = new JButton("Divide");
        divideBtn.setBounds(220, 40, 80, 25);
        divideBtn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                try {
                    int n1 = Integer.parseInt(num1Field.getText());
                    int n2 = Integer.parseInt(num2Field.getText());
                    int res = n1 / n2;
                    resultField.setText(String.valueOf(res));
                } catch (NumberFormatException ex) {
                    JOptionPane.showMessageDialog(frame, "Please enter valid integers!", "Number Format Error", JOptionPane.ERROR_MESSAGE);
                } catch (ArithmeticException ex) {
                    JOptionPane.showMessageDialog(frame, "Division by zero is not allowed!", "Arithmetic Error", JOptionPane.ERROR_MESSAGE);
                }
            }
        });

        frame.add(lbl1); frame.add(num1Field);
        frame.add(lbl2); frame.add(num2Field);
        frame.add(lblResult); frame.add(resultField);
        frame.add(divideBtn);
        frame.setVisible(true);
    }
}
