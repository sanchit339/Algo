package JavaOOPs.Polymorphism.Runtime;

public class Circle extends Shape {
    @Override
    void type() {
//        super.type(); --> this will call the method from the parent
        System.out.println("THis is Circle");
    }
}
