package OOPS.ClassObj.garbage;

public class FinalKeyword {
    public static void main(String[] args) {
        student sanchit = new student("sanchit ingale");  // Normal Initialization
        final student john = new student("john Doe");
        System.out.println(sanchit.name);
        sanchit = new student("hello");
        System.out.println(sanchit.name);


        john.name = "hello world";
        System.out.println(john.name);

//        john = new student("Hello"); you cannot reassign it
    }
}

class student{
    final String college = "PCCOER";
    String name;

    student(String name){
        this.name = name;
    }
}