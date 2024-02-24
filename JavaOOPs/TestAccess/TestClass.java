package JavaOOPs.TestAccess;

import JavaOOPs.AccessModifiers.ProtectedDefault;

public class TestClass extends ProtectedDefault { // [SubClass] As it is Extended from the parent class
    public static void main(String[] args) {
        TestClass tc = new TestClass();
        System.out.println(tc.fullName);
    }
}
