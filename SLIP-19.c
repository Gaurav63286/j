//slip-19
import java.util.*;

class Matrix {
    public static void main(String args[]) {
        int r, c, i, j, sum = 0;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter no. of rows: ");
        r = sc.nextInt();
        System.out.print("Enter no. of Colums: ");
        c = sc.nextInt();

        int array[][] = new int[r][c];
        System.out.println("Enter the elements of the array: ");
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                array[i][j] = sc.nextInt();

        System.out.println("Elements of the array are: ");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                System.out.print(array[i][j] + " ");
                if (i == j)
                    sum = sum + array[i][j];
            }
            System.out.println();
        }
        System.out.println("Sum of Diagonal elements is " + sum);

    }
}


//q2
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class Box_Example {
    JFrame f;
    JTextField t1;

    Box_Example() {
        f = new JFrame("ComboBox Example");
        JLabel label = new JLabel();
        t1 = new JTextField(10);
        label.setHorizontalAlignment(JLabel.CENTER);
        label.setSize(400, 100);
        JButton b = new JButton("Show");
        b.setBounds(200, 100, 75, 20);
        String languages[] = { "C", "C++", "C#", "Java", "PHP" };
         JComboBox cb = new JComboBox(languages);
        cb.setBounds(50, 100, 90, 20);
        f.add(cb);
        f.add(label);
        f.add(b);
        f.add(t1);
        f.setLayout(new FlowLayout());
        f.setSize(350, 350);
        f.setVisible(true);
        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String data = "Programming language Selected: " +
                        cb.getItemAt(cb.getSelectedIndex());
                t1.setText(data);
            }
        });
    }

    public static void main(String[] args) {
        new Box_Example();
    }
}