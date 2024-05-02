package JavaOOPs.ClassNObj;

class Pen {
    String name;
    int price;

    Pen(String name){
        this.name = name;
    }
}

public class Main {
    public static void main(String[] args) {
        Pen p1 = new Pen("Reno");
        
        System.out.println(p1.name);
        System.out.println(p1.price);
        int a = 10;
        int b =20;
    }
}
