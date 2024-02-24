package JavaOOPs.Abstraction;

// We have to extend it as it is the part of the Inheritance
// Don't use directly to the main class use this as the parent class
// create child class which extends this class

abstract public class Employee {
    int salary = 10000;
    String name ;

    public Employee(String name, int salary){
        this.name = name;
        this.salary = salary;
    }

    // abstract method
    abstract void getInhand(int salary);

    // Non-Abstract method
    void getCTC(int salary){
        System.out.println(salary / 12);
    }
}
