package JavaOOPs.Abstraction;

public class ContarctBasis extends Employee{

    public ContarctBasis(String name, int salary){
        super(name, salary);
    }

    @Override
    void getInhand(int salary){
        System.out.println(salary / 10);
    }
}
