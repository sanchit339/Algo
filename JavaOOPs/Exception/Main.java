package JavaOOPs.Exception;

public class Main {
    public static void main(String[] args) {
        int a = 10 , b = 0;

        try{
            int c = a / b;
        }catch (ArithmeticException e){
            System.out.println(e.getMessage());
        }catch (Exception e){
            System.out.println(e.getMessage());
        }finally {
            System.out.println("No Matter What Happen this will execute");
        }
    }
}
