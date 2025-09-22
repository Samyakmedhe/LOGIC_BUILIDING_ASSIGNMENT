import java.util.Scanner;

class Distance {
    int feet;
    int inches;


    void readDistance(Scanner sc) {
        System.out.print("Enter feet: ");
        feet = sc.nextInt();
        System.out.print("Enter inches: ");
        inches = sc.nextInt();
    }

    Distance addDistance(Distance d) {
        Distance temp = new Distance();
        temp.feet = this.feet + d.feet;
        temp.inches = this.inches + d.inches;

       
        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }
        return temp;
    }

    void display() {
        System.out.println("Total distance is:");
        System.out.println("Feet: " + feet + "  Inches: " + inches);
    }
}

class Assignment_4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Distance d1 = new Distance();
        Distance d2 = new Distance();

        System.out.println("Enter first distance:");
        d1.readDistance(sc);

        System.out.println("Enter second distance:");
        d2.readDistance(sc);

        Distance sum = d1.addDistance(d2);
        sum.display();

        sc.close();
    }
}
