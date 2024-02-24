package JavaOOPs.Inheritance;

/**
 * The super keyword refers to superclass (parent) objects.
 * It is used to call superclass methods, and to access the superclass constructor.
 */


class VW extends Car {

    public VW(int gear, int speed) {
        super(gear, speed);
    }

    @Override
    void increment(int speed) {
        speed *= 2;
        super.increment(speed);
    }

    @Override
    void decrement(int speed) {
        speed *= 2;
        super.decrement(speed);
    }
}
