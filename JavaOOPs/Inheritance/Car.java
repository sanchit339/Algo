package JavaOOPs.Inheritance;

// Java Does not support multiple Inheritance

class Car {
    public int gear;
    public int speed;

    public Car(int gear , int speed){
        this.gear = gear;
        this.speed = speed;
    }

    void increment(int speed){
        this.speed += speed;
    }

    void  decrement(int speed){
        this.speed -= speed;
    }

}
