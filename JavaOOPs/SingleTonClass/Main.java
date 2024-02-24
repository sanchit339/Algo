package JavaOOPs.SingleTonClass;

public class Main {
    public static void main(String[] args) {
        Singleton s1 = Singleton.getInstance();
        Singleton s2 = Singleton.getInstance();
        // this both will point to the same object
    }
}
