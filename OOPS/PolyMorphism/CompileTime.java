package OOPS.PolyMorphism;

/*
 *  Function OverLoading 
 *  Create(int a)
 *  Create(int a , int b)
 */

class Student{
    String name;
    int age;
    String clg;
    

    public void printInfo(String name){
        System.out.println(this.clg);
    }
    public void printInfo(String name , int age){
        System.out.println(this.clg);
    }
}

public class CompileTime {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.age = 15;
        s1.name = "Sanchit";
        s1.clg = "PCCOER";

        s1.printInfo("Sanchit");
        s1.printInfo("Sanchit" , 15);
    }
}
