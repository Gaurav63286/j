import java.util.*;

class Q1 {
    public static void main(String args[]) {
        System.out.println("Enter the row and column");
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();
        int mat[][] = new int[r][c];
        System.out.println("Enter the array Elements:");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {

                mat[i][j] = sc.nextInt();
            }
        }
        System.out.println("The matrix is:");
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < r; j++) {
                System.out.print(" " + mat[j][i]);
            }
            System.out.println(" ");
        }
    }
}

import java.awt.*;
import java.awt.event.*;

class LoginScreenAWT extends Frame implements ActionListener {
    Label userLabel, passLabel, messageLabel;
    TextField userField;
    TextField passField;
    Button loginButton, clearButton;
    int attempts = 0;

    public LoginScreenAWT() {
        setTitle("Login Screen");
        setSize(400, 200);
        setLayout(new GridLayout(4, 2));

        userLabel = new Label("Username:");
        passLabel = new Label("Password:");
        userField = new TextField();
        passField = new TextField();
        passField.setEchoChar('*');
        loginButton = new Button("Login");
        clearButton = new Button("Clear");
        messageLabel = new Label();

        add(userLabel);
        add(userField);
        add(passLabel);
        add(passField);
        add(loginButton);
        add(clearButton);
        add(messageLabel);

        loginButton.addActionListener(this);
        clearButton.addActionListener(this);

        setVisible(true);

        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                dispose();
            }
        });
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == clearButton) {
            userField.setText("");
            passField.setText("");
            messageLabel.setText("");
        } else if (e.getSource() == loginButton) {
            String username = userField.getText();
            String password = passField.getText();
            if (attempts < 3) {
                if (username.equals(password)) {
                    messageLabel.setText("Login Successful!");
                } else {
                    attempts++;
                    messageLabel.setText("Incorrect Login. Attempts left: " + (3 - attempts));
                    if (attempts >= 3) {
                        messageLabel.setText("Login Failed. No more attempts.");
                        loginButton.setEnabled(false);
                    }
                }
            }
        }
    }

    public static void main(String[] args) {
        new LoginScreenAWT();
    }
}
