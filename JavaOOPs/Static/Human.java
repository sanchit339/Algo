package JavaOOPs.Static;

public class Human {
    int age;
    String name;
    static int population = 0;
    
    public Human(String name, int age){
        this.name = name;
        this.age = age;
        ++population;
    }

}
