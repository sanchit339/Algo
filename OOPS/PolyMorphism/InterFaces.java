package OOPS.PolyMorphism;
/*
 * InterFaces are created to provide Skeleton
 * Interfaces can implement Other interfaces (Car -> tyres , stering , etc (required))
 * Can Extend
 */

interface Animal{
    // just Provide methods here 
    String name();
}

class Birds implements Animal{

    String BirdName;
    @Override
    public String name() {
        return (this.BirdName);
    }

}

public class InterFaces{
    public static void main(String[] args) {
        Birds b = new Birds();
        b.BirdName = "Peigon";
        b.name();
    }
}