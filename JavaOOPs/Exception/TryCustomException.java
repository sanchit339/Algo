package JavaOOPs.Exception;

public class TryCustomException {
    public static void main(String[] args) {
        try {
            int result = CustomException.divide(50, 0);
            System.out.println("Result: " + result);
        } catch (CustomException e) {
            System.out.println("Caught an exception: " + e.getMessage());
        }
    }
}
