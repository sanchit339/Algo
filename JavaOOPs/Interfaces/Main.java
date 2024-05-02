package JavaOOPs.Interfaces;

public class Main {
    public static void main(String[] args) {
        Car c1 = new Car();
        c1.applyBrake(20);
        System.out.println(c1.getGear());
        System.out.println(c1.getSpeed());
        System.out.println(c1.maxSpeed(c1.getSpeed()));
        // Vehical.giveSurprise(200);
        c1.name = 10;
        System.out.println(c1.name);
    }
}
