package JavaOOPs.Abstraction;

public class FullTimeEmployee extends Employee{

    public FullTimeEmployee(String name, int salary) {
        super(name, salary);
    }

    @Override
    void getInhand(int salary) {
        System.out.println(salary / 12);
    }
}
