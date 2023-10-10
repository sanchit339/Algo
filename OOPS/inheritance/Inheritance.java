package OOPS.inheritance;

/*
 *  Single Inheritance
 *  
 */

class Shape{
    String colour;

    public void fun(){
        System.out.println("Shape");
    }
}

class Tringale extends Shape{
    
}

public class Inheritance {
    public static void main(String[] args) {
        Shape s1 = new Shape();
        s1.colour = "Red";

        Tringale tri = new Tringale();
        tri.fun();
    }
}
