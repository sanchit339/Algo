package JavaOOPs.Polymorphism.CompileTime;

// Compile time Poly

public class OverLoading {
    static int multiply(int a , int b){
        return a * b;
    }

    static int multiply(int a , int b , int c){
        return a * b * c;
    }
}
