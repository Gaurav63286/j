//slip18_1.java
import javax.swing.*;
import java.awt.*;

public class slip18_1 {
public static void main(String[] args) {
JFrame frame = new JFrame("Border Layout Example");
frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
frame.setSize(400, 300);
JButton btnNorth = new JButton("North");
JButton btnSouth = new JButton("South");
JButton btnEast = new JButton("East");
JButton btnWest = new JButton("West");
JButton btnCenter = new JButton("Center");
frame.add(btnNorth, BorderLayout.NORTH);
frame.add(btnSouth, BorderLayout.SOUTH);
frame.add(btnEast, BorderLayout.EAST);
frame.add(btnWest, BorderLayout.WEST);
frame.add(btnCenter, BorderLayout.CENTER);
frame.setVisible(true);
}
}

//slip18_2.java
import java.util.*;

class Player {
String n;
int innings;
int notOut;
int runs;
double avg;

Player(String n, int innings, int notOut, int runs) {
this.n = n;
this.innings = innings;
this.notOut = notOut;
this.runs = runs;
this.avg = calcAvg(runs, innings, notOut);
}

static double calcAvg(int runs, int innings, int notOut) {
return innings > 0 ? (double) runs / (innings - notOut) : 0.0;
}

static void sort(Player[] p) {
Arrays.sort(p, Comparator.comparingDouble(player -> player.avg));
}

void display() {
System.out.printf("Name: %s, Innings: %d, Not Out: %d, Total Runs: %d, Batting Average: %.2f%n",
n, innings, notOut, runs, avg);
}
}

public class slip18_2 {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
System.out.print("Enter number of players: ");
int n = sc.nextInt();
Player[] p = new Player[n];
for (int i = 0; i < n; i++) {
System.out.print("Enter name of player " + (i + 1) + ": ");
String name = sc.next();
System.out.print("Enter number of innings: ");
int innings = sc.nextInt();
System.out.print("Enter number of times not out: ");
int notOut = sc.nextInt();
System.out.print("Enter total runs: ");
int runs = sc.nextInt();
p[i] = new Player(name, innings, notOut, runs);
}
Player.sort(p);
System.out.println("\nPlayer details in sorted order by batting average:");
for (Player player : p) {
player.display();
}
sc.close();
}
}
