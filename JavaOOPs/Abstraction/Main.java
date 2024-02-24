package JavaOOPs.Abstraction;

public class Main {
    public static void main(String[] args) {
        int salaryC = 1000000 , salaryF = 1200000;

        // Upcasting allows you to treat objects of derived classes
        // as objects of their base class.

        // This can be beneficial in scenarios where you want to treat objects uniformly,
        // regardless of their specific subclass type.

        Employee emp1 = new ConstarctBasis("Sanchit" , salaryC);
        Employee emp2 = new FullTimeEmployee("Ath" , salaryF);

        emp2.getInhand(salaryF);
    }
}
