
//q1
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

public class slipQ1 {
    public static void main(String[] args) {
        State s = new State("Asia", "India", "Maharashtra", "Nashik");
        s.display();
    }
}
// q2

package Operation;

public class Addition {
    public int add(int a, int b) {
        return a + b;
    }

    public float subtract(float a, float b) {
        return a - b;
    }
}

package Operation;

public class Maximum {
    public int max(int a, int b) {
        return (a > b) ? a : b;
    }
}

import Operation.*;

public class TestOperation {
    public static void main(String[] args) {
        Addition addObj = new Addition();
        Maximum maxObj = new Maximum();
        System.out.println("Addition of 10 and 20: " + addObj.add(10, 20));
        System.out.println("Subtraction of 10.5 and 4.2: " + addObj.subtract(10.5f, 4.2f));
        System.out.println("Maximum of 15 and 25: " + maxObj.max(15, 25));
    }
}
