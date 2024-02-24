package JavaOOPs.Interfaces;


//multiple inheritance is not supported in the case of class because of ambiguity
// ambiguity -> while calling which to call

// Interface inheritance we can extend one Interface with other

public interface Vehical {
    void changeGear(int gear);
    void speedUp(int speed);
    void applyBrake(int speed);

    // from the Java 8
    default int maxSpeed(int speed){
        giveOutPut(speed);
        return speed * 2;
    }

    // from java 9 this feature is added
    private void giveOutPut(int anyParameters){
        System.out.println("hello world" + " " + anyParameters);
    }

    static void giveSurprise(int data){
        System.out.println("Surprise from the Interface" + data);
    }
}

