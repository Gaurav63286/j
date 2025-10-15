//q1
import java.util.Scanner;

class Customer {
    int custno;
    String custname, contactnumber, custaddr;
    Customer(int custno, String name, String contact, String addr) {
        this.custno = custno; this.custname = name; this.contactnumber = contact; this.custaddr = addr;
    }
    void display() {
        System.out.println("CustNo: " + custno + ", Name: " + custname + ", Contact: " + contactnumber + ", Address: " + custaddr);
    }
}

public class CustomerSearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Number of customers: ");
        int n = sc.nextInt(); sc.nextLine();
        Customer[] c = new Customer[n];
        for(int i=0;i<n;i++){
            System.out.print("CustNo, Name, Contact, Address: ");
            c[i] = new Customer(sc.nextInt(), sc.next(), sc.next(), sc.next());
        }
        System.out.print("Enter contact to search: ");
        String contact = sc.next();
        for(Customer cust : c)
            if(cust.contactnumber.equals(contact)) { cust.display(); break; }
        sc.close();
    }
}

//q2
import java.util.Scanner;

class Vehicle {
    String company; double price;
    Vehicle(String c,double p){company=c; price=p;}
    void display(){System.out.print("Company: "+company+", Price: "+price);}
}

class LightMotorVehicle extends Vehicle {
    double mileage;
    LightMotorVehicle(String c,double p,double m){super(c,p); mileage=m;}
    void display(){super.display(); System.out.println(", Mileage: "+mileage+" km/l");}
}

class HeavyMotorVehicle extends Vehicle {
    double capacity;
    HeavyMotorVehicle(String c,double p,double cap){super(c,p); capacity=cap;}
    void display(){super.display(); System.out.println(", Capacity: "+capacity+" tons");}
}

public class VehicleInfo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Number of vehicles: "); int n = sc.nextInt();
        Vehicle[] v = new Vehicle[n];
        for(int i=0;i<n;i++){
            System.out.print("Type (1-Light,2-Heavy): "); int t = sc.nextInt(); sc.nextLine();
            System.out.print("Company: "); String c = sc.nextLine();
            System.out.print("Price: "); double p = sc.nextDouble();
            if(t==1){System.out.print("Mileage: "); double m=sc.nextDouble(); v[i]=new LightMotorVehicle(c,p,m);}
            else{System.out.print("Capacity in tons: "); double cap=sc.nextDouble(); v[i]=new HeavyMotorVehicle(c,p,cap);}
        }
        System.out.println("\nVehicle Details:");
        for(Vehicle vehicle:v) vehicle.display();
        sc.close();
    }
}

