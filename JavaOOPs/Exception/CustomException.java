package JavaOOPs.Exception;

public class CustomException extends Exception {
    public CustomException(String msg) {
        super(msg);
    }

    static int divide(int a, int b) throws CustomException {
        if (b == 0) {
            throw new CustomException("This is infinity");
        }
        return a / b;
    }
}
