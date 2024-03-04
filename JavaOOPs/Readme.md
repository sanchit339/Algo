### Flow of the Concepts
- Class N Objects
- Packages Singleton Class
- Inheritance , Polymorphism , Encapsulation
- Access Control
- Abstraction and Interfaces
- Exception Handling

### Important KeyWords in Each
- Class and Object
    - Class c_name = new Class();
    - c_name.Methods to access;

- Inheritance
    - super(parameters) [ to call constructor ]
    - super.methods [ To access the Methods ]
    - super.varibales 
    - Extends (Class c_name extends parent_class)
    - we can access variables , methods and Constructors

- Polymorphism
    - Compile Time (Method OverLoading)
    - Runtime / Dynamic (Method Overriding)
    - Upcasting (Same Parent diff Children :) )

- Encapsulation
    - Using the getter and setter 
    - making the variables private

- Abstraction (Abstract KeyWord)
    - Same as normal class with ```Variables``` ans ```Methods```.
    - can have abstract a non-abstract methods.
    - Make the parent class as Abstract and rest is same as the inheritance.
    - You cannot directly use the Abstract it must implemented forst
        - Due to this no static methods
    - No Abstract Constructor
    - No Final Abstract Methods coz they cannot be overRidden

- Interfaces
  - Class ```Implements``` interface
  - ```Java 8``` Default and Static methods
  - ```Java 9``` private methods 
  - Interfaces inheritance can happen
  - Nested Interfaces
  - Static Methods can be directly accessed using the interface
  - at the compiling the methods in the parent and the child are compared
        - this takes time 
        - so, avoid using interfaces in the performant application

- Exception
    - Method ```throws``` Error ```[static int method( ) thorws exception{}]```
    - inside we method we ```throw``` the error

- Early Binding and Late binding
    
    - Final Variable = cannot be changed
    - Final method cannot be Overridden
    - Final class cannot be inherited [ cannot have subClasses ]

    - Dynamic Method Dispatch : - 
        - when methods are not final compiler will check weather the methods are final or not for the override method - it take time - its known as late binding 
        - Since the final method cannot overriden it can be directly compiled its known as Early Binding

- Problems with Multiple Inheritance
    - Class A : method func_name()
    - Class B : method func_name()

    class c extens a , b : func_name() // ambihuity which to call