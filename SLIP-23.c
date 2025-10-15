// MultilevelInheritanceDemo.java
class Continent {
    String continentName;

    Continent(String continentName) {
        this.continentName = continentName;
    }
}

class Country extends Continent {
    String countryName;

    Country(String continentName, String countryName) {
        super(continentName);
        this.countryName = countryName;
    }
}

class State extends Country {
    String stateName;
    String placeName;

    State(String continentName, String countryName, String stateName, String placeName) {
        super(continentName, countryName);
        this.stateName = stateName;
        this.placeName = placeName;
    }

    void display() {
        System.out.println("Place: " + placeName);
        System.out.println("State: " + stateName);
        System.out.println("Country: " + countryName);
        System.out.println("Continent: " + continentName);
    }
}

public class MultilevelInheritanceDemo {
    public static void main(String[] args) {
        State obj = new State("Asia", "India", "Maharashtra", "Nashik");
        obj.display();
    }
}

//q2
package Operation;

public class Addition {
    public void add(int a, int b) {
        System.out.println("Sum of integers: " + (a + b));
    }

    public void subtract(float a, float b) {
        System.out.println("Subtraction of floats: " + (a - b));
    }
}


package Operation;

public class Maximum {
    public void max(int a, int b) {
        int max = (a > b) ? a : b;
        System.out.println("Maximum number: " + max);
    }
}


import Operation.Addition;
import Operation.Maximum;

public class MainPackageDemo {
    public static void main(String[] args) {
        Addition addObj = new Addition();
        Maximum maxObj = new Maximum();

        addObj.add(10, 20);
        addObj.subtract(15.5f, 5.2f);
        maxObj.max(25, 40);
    }
}
