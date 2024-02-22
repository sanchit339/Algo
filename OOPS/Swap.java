public class Swap {
    public static void main(String[] args) {
        Integer a = 10;
        Integer b = 20;
        Integer[] arr = {a , b};
        swap(arr);
        System.out.println(arr[0] + " " + arr[1]);
    }
    static void swap(Integer[] arr){
        Integer temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
}