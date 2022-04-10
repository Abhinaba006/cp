package basics;

public class Interface implements Car, Person{ // transformer

    @Override // na dileo kichu na temon
    public void start() {
        // TODO Auto-generated method stub
        System.out.println("car is starting");
        
    }

    @Override
    public void walk() {
        // TODO Auto-generated method stub
        System.out.println("person is walking");
        
    }

    @Override
    public void eat() {
        // TODO Auto-generated method stub
        System.out.println("person is eating");
        
    }
    
}

interface Car {
    void start(); // by default public abstract, 
    // abstract hole body thake, interface e thake na, sob abstract
}
// multiple inheritance not possible, tar jnne interface use kori

interface Person{
    void walk();
    void eat();
}
