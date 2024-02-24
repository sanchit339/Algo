package JavaOOPs.Abstraction;

public class ConstarctBasis extends Employee{

    public ConstarctBasis(String name, int salary){
        super(name, salary);
    }

    @Override
    void getInhand(int salary){
        System.out.println(salary / 10);
    }
}
