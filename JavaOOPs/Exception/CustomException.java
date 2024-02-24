package JavaOOPs.Exception;

public class CustomException extends Exception{
    public CustomException(String msg){
        super(msg);
    }

    static int divide(int a , int b) throws ArithmeticException{
        if(b == 0){
            throw new ArithmeticException("This is infinity");
        }
        return a/b;
    }
}
