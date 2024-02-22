package OOPS.ClassObj;

public class GarbageCoollection {
    public static void main(String[] args) {
        A obj;
        for (int i = 0; i < 1000000; i++) {
            obj = new A("hello world");
        }
    }
}

class A {
    String name;

    A(String name) {
        this.name = name;
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println("Object Destroyed");
    }
}
