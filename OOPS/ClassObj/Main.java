package OOPS.ClassObj;

class Pen{
    String name;
    String type;

    public void write(){ // methods
        System.out.println("Hello World");
    }

    public void printCol(){
        System.out.println(this.name); // this will refer to which object the method has called
    }
}

class Student{
    String name;
    String age;

    public void hisName(){ // constructors dont have return type as name suggests
        System.out.println(this.name);
    }

    /*
     * 
     * No Destructor Present Objects are destroyed with Inbuilt Garbage Collector
     *  
     * Default Constructor
     *  Student()
     * 
     *  ParaMetorised Constructor
     *  Student(String name , String age)
     * 
     *  Copy Constructor for copy Object 
     *  
     *  Student(Student s2){
     *      this.name = s2.name;
     *      this.age = s2.age;
     *  }
     */
}

public class Main{
    public static void main(String[] args) {
        Pen pen1 = new Pen(); // Objects 
        pen1.name = "reno";
        pen1.type = "ball";
        pen1.write();

        Pen pen2 = new Pen(); // by default constructors
        pen2.name = "hel";
        pen2.type = "ball";

        pen1.printCol();
        pen2.printCol(); 

        Student std1 = new Student(); // new in Heap 
        std1.name = "student";
        std1.hisName();
    }
}