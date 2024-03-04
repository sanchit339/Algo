package JavaOOPs.Encapsulation;


// Encapsulation is a class along with its methods

class Encapsulate{
    String name;
    int age;
    private int password;

    public Encapsulate(){

    }

    public Encapsulate(String name , int age){
        this.name = name;
        this.age = age;
    }

    public int getPassword(){
        return this.password;
    }

    public int setPassword(int pass){
        this.password = pass;
    }
}
