package JavaOOPs.Interfaces;

public class Car implements Vehical{
    private int gear = 0;
    private int speed = 100;

    @Override
    public void applyBrake(int decrement) {
        speed -= decrement;
    }

    @Override
    public void changeGear(int newGear) {
        gear = newGear;
    }

    @Override
    public void speedUp(int increment) {
        speed += increment;
    }

    public int getGear() {
        return gear;
    }

    public void setGear(int gear) {
        this.gear = gear;
    }

    public int getSpeed() {
        return speed;
    }

    public void setSpeed(int speed) {
        this.speed = speed;
    }
}