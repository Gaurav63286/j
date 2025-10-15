// 21 1
import java.util.*;

class InvalidDateException extends Exception {
}

class MyDate {
    int day, month, year;

    public void accept() {
        System.out.println("Enter Date, Month and Year");
        try {
            Scanner sc = new Scanner(System.in);

            day = sc.nextInt();
            if (day < 1 || day > 31)
                throw new InvalidDateException();
            month = sc.nextInt();
            if (month > 12 || month < 1)
                throw new InvalidDateException();
            year = sc.nextInt();
            if (year > 10000 || year < 1000)
                throw new InvalidDateException();
        } catch (InvalidDateException e) {
            System.out.println("Invalid Date entered");
            System.exit(0);
        } catch (Exception e) {
            System.out.println("Enter Valid Date");
            System.exit(0);
        }
    }

    public void display() {
        System.out.println("Entered Date is " + day + ":" + month + ":" + year);
    }

    public static void main(String args[]) {
        MyDate ob = new MyDate();
        ob.accept();
        ob.display();
    }
}

// 21 2
class Employee {
    int id;
    String name, deptname;
    double sal;
    static int cnt = 0;

    Employee() {
        cnt++;
        displayCount();
    }

    Employee(int id, String name, String deptname, double sal) {
        this.id = id;
        this.name = name;
        this.deptname = deptname;
        this.sal = sal;
        cnt++;
        displayCount();
    }

    public static void displayCount() {
        System.out.println("Total Objects created " + cnt);
    }

    public void displayData() {
        //System.out.println(this.id + "\t\t" + this.name + "\t\t\t" + this.deptname + "\t\t" + this.sal);
        System.out.println("\nID: "+id);
        System.out.println("Name: "+name);
        System.out.println("Department Name: "+deptname);
        System.out.println("Salary: "+sal);
        System.out.println("-------------------------------------------------------------------");


    }

    public static void main(String args[]) {
        Employee e1 = new Employee(101, "Mayur", "HR", 120020.20);
        e1.displayData();
        Employee e2 = new Employee(102, "Mayu", "IT", 140020.20);
        e2.displayData();
        Employee e3 = new Employee(104, "Summi", "Accounts", 100020.20);
        e3.displayData();
    }
}