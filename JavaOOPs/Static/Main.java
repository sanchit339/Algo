package JavaOOPs.Static;

public class Main {
    public static void main(String[] args) {
        Human h1 = new Human("Sanchit", 21);

        System.out.println(h1.population);
        // Both are the same
        System.out.println(Human.population);
    }
}
