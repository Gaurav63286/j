// SLIP 5
// Q1
import java.util.*;
class Continent {
String cont_name;
Scanner sc = new Scanner(System.in);
void cont_input() {
System.out.print("Enter Continent Name: ");
cont_name = sc.nextLine();
}
}
class Country extends Continent {
String country_name;
void cou_input() {
System.out.print("Enter Country Name: ");
country_name = sc.nextLine();
}
}
class State extends Country {
String state_name;
String place_name;
void sta_input() {
System.out.print("Enter State Name: ");
state_name = sc.nextLine();
}
void pla_input() {
System.out.print("Enter Place Name: ");
place_name = sc.nextLine();
}
void displayDetails() {
System.out.println("\nContinent: " + cont_name);
System.out.println("Country: " + country_name);
System.out.println("State: " + state_name);
System.out.println("Place: " + place_name);
}
public static void main(String[] args) {
State s = new State();
s.cont_input();
s.cou_input();
s.sta_input();
s.pla_input();
s.displayDetails();
}
}
// Q2
import java.util.*;
class Q2 {
public static void main(String args[]) {
Scanner sc = new Scanner(System.in);
int i, j, k, op;
System.out.print("How many rows in first Matrix: ");
int m = sc.nextInt();
System.out.print("How many columns in first Matrix: ");
int n = sc.nextInt();
int a[][] = new int[m][n];
System.out.print("How many rows in second Matrix: ");
int p = sc.nextInt();
System.out.print("How many columns in second Matrix: ");
int q = sc.nextInt();
int b[][] = new int[p][q];
int add[][] = new int[m][n];
int mult[][] = new int[m][n];
System.out.println("Enter Elements of first matrix");
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
System.out.print("Enter a[" + i + "][" + j + "]: ");
a[i][j] = sc.nextInt();
}
}
System.out.println("Enter Elements of Second matrix");
for (i = 0; i < p; i++) {
for (j = 0; j < q; j++) {
System.out.print("Enter b[" + i + "][" + j + "]: ");
b[i][j] = sc.nextInt();
}
}
System.out.println("\nThe First Matrix is :");
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
System.out.print(a[i][j] + " ");
}
System.out.println();
}
System.out.println("\nThe Second Matrix is :");
for (i = 0; i < p; i++) {
for (j = 0; j < q; j++) {
System.out.print(b[i][j] + " ");
}
System.out.println();
}
do {
System.out.println("\n***Menu***");
System.out.println("\n1.Addition\n2.Multiplication\n3.Exit");
System.out.println("Enter an option: ");
op = sc.nextInt();
switch (op) {
case 1:
if (m == p && n == q) {
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
add[i][j] = a[i][j] + b[i][j];
}
}
System.out.println("\nThe Matrix after addition is :");
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
System.out.print(add[i][j] + " ");
}
System.out.println();
}
} else {
System.out.println("\nMatrix addition is not possible because
both matrix size not equal.\n");
}
break;
case 2:
if (n == p) {
for (i = 0; i < m; i++) {
for (j = 0; j < q; j++) {
for (k = 0; k < n; k++) {
mult[i][j] = mult[i][j] + a[i][k] * b[k][j];
}
}
}
System.out.println("\nThe Matrix after Multiplication is :");
for (i = 0; i < m; i++) {
for (j = 0; j < q; j++) {
System.out.print(mult[i][j] + " ");
}
System.out.println();
}
} else {
System.out.println(
"\nMatrix Multiplication is not possible because no. of
columns in first matrix is not equal to the no. of rows in second matrix.");
}
break;
case 3: System.exit(0);
}
} while (op != 4);
}
}