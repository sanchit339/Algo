package OOPS.Abstraction;
/*
 * Showing Usefull data And Hiding Unnecessary data
 * 
 */

abstract class Animal{ // (Concept) (Can Have Abstarcl and Non Abstract Methods)
    abstract void walk(); // only provides the methods to implemented
    Animal(){
         System.out.println("these are animals");
    }
    
 }
 
 class Horse extends Animal{
     Horse(){
         System.out.println("This is Horse"); // here when you call Horse it will also call the animal constracutor thn call the horse constructor this is known as constructor chaining
     }
     @Override
     void walk() {
     }
 
 }
 
 class BigCats extends Animal{
     @Override
     void walk() {
     }
 }
 public class Abstract {
     public static void main(String[] args) {
         BigCats bc = new BigCats(); // coz it called the default method
         
     }
 }
 