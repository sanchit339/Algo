In object-oriented programming (OOP), which Java fully supports, there are typically four main principles or "pillars" that serve as the foundation. These pillars help in structuring software in a way that makes it modular, reusable, and adaptable to changes. Here’s a detailed explanation of each pillar in the context of Java:

1. **Encapsulation**: Encapsulation is about bundling the data (variables) and code (methods) that operate on the data into a single unit or class. It also controls access to that data by making some attributes or methods private and exposing other parts of the class via public methods (getters and setters). This hides the internal state of the object from the outside world and restricts direct access to it. In Java, encapsulation is implemented using access modifiers like `private`, `protected`, and `public`.

   Example:
   ```java
   public class Person {
       private String name; // Private variable, encapsulated within the class

       public String getName() {
           return name; // Public getter to access the private variable
       }

       public void setName(String name) {
           this.name = name; // Public setter to modify the private variable
       }
   }
   ```

2. **Inheritance**: Inheritance allows a new class to adopt the properties and behaviors of an existing class. The new class known as the child class can also add new methods and fields or override existing ones. Inheritance promotes code reuse and establishes a natural hierarchy between parent and child classes. In Java, inheritance is implemented using the `extends` keyword.

   Example:
   ```java
   public class Animal {
       public void eat() {
           System.out.println("This animal eats food.");
       }
   }

   public class Dog extends Animal {
       @Override
       public void eat() {
           System.out.println("Dog eats kibble.");
       }
   }
   ```

3. **Polymorphism**: Polymorphism allows methods to do different things based on the object it is acting upon. In simpler terms, it allows objects of different classes to be treated as objects of a common superclass. Polymorphism can be achieved by method overriding (using the same method name with the same parameters but implementing different functionalities in child classes) or method overloading (using the same method name with different parameters within the same class). In Java, polymorphism is most commonly implemented through interface and abstract class.

   Example:
   ```java
   public interface Movable {
       void move();
   }

   public class Car implements Movable {
       public void move() {
           System.out.println("Car moves on roads.");
       }
   }

   public class Boat implements Movable {
       public void move() {
           System.out.println("Boat sails on water.");
       }
   }
   ```

4. **Abstraction**: Abstraction means hiding the complex implementation details of a system and exposing only the necessary parts of it. In Java, abstraction can be achieved using abstract classes and interfaces, which allow you to define what must be done without specifying how. It helps in reducing complexity and increasing reusability.

   Example:
   ```java
   public abstract class Device {
       public abstract void turnOn();
       public void turnOff() {
           System.out.println("Device is turned off.");
       }
   }

   public class Smartphone extends Device {
       @Override
       public void turnOn() {
           System.out.println("Smartphone is turned on using the power button.");
       }
   }
   ```

These pillars of OOP help developers manage and manipulate software design in effective ways, making the systems they build more flexible, scalable, and easier to maintain.