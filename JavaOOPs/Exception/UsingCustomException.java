package JavaOOPs.Exception;

public class UsingCustomException {
    public static void main(String[] args) {
        String name = "Sanchit";
        try{
            if(name.equals("Sanchit")){
                throw new CustomException("This is Correct");
            }
        } catch (CustomException e) {
            throw new RuntimeException(e);
        } catch (Exception e){
            System.out.println(e.getMessage());
        }
    }
}
