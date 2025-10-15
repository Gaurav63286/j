//SLIP 2
// Q1
class BM {
public static void main(String args[]) {
String fname = args[0];
String lname = args[1];
float weight = Float.parseFloat(args[2]);
float height = Float.parseFloat(args[3]);
float BMI = weight / (height * height);
System.out.println("First name is:" + fname);
System.out.println("Last Name is:" + lname);
System.out.println("weight is:" + weight);
System.out.println("height is:" + height);
System.out.println("The Body Mass Index (BMI) is " + BMI + " kg/m2");
}
}
// Q2
import java.util.Scanner;
class Cricket {
String name;
int inning, tofnotout, totalruns;
float batavg;
public Cricket() {
name = null;
inning = 0;
tofnotout = 0;
totalruns = 0;
batavg = 0;
}
public void get() {
Scanner scanner = new Scanner(System.in);
System.out.println("Enter the name, no of innings, no of times not out, total
runs: ");
name = scanner.nextLine();
inning = scanner.nextInt();
tofnotout = scanner.nextInt();
totalruns = scanner.nextInt();
scanner.nextLine();
}
public void put() {
System.out.println("Name: " + name);
System.out.println("No. of innings: " + inning);
System.out.println("No. of times not out: " + tofnotout);
System.out.println("Total runs: " + totalruns);
System.out.println("Batting average: " + batavg);
System.out.println("------------------------------------");
}
static void avg(int n, Cricket[] c) {
for (int i = 0; i < n; i++) {
if (c[i].inning > 0) {
c[i].batavg = (float) c[i].totalruns / c[i].inning;
} else {
c[i].batavg = 0;
}
}
}
public static void sort(Cricket[] players) {
for (int i = 0; i < players.length - 1; i++) {
for (int j = i + 1; j < players.length; j++) {
if (players[i].batavg < players[j].batavg) {
Cricket temp = players[i];
players[i] = players[j];
players[j] = temp;
}
}
}
}
}
public class CricketPlayer {
public static void main(String[] args) {
Scanner scanner = new Scanner(System.in);
System.out.println("Enter the number of players:");
int n = scanner.nextInt();
scanner.nextLine();
Cricket[] players = new Cricket[n];
for (int i = 0; i < n; i++) {
players[i] = new Cricket();
System.out.println("Enter details for player " + (i + 1) + ":");
players[i].get();
}
Cricket.avg(n, players);
Cricket.sort(players);
System.out.println("Player details sorted by batting average:");
for (int i = 0; i < n; i++) {
players[i].put();
System.out.println();
}
scanner.close();
}
}