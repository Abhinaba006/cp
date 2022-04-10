import encapsulation.encapsulationIntro;

public class mainClass {
    public static void main(String[] args) {
        // System.out.println("Hello World!");
        Person p = new Person(); // default constructor
        Person p1 = new Person();
        p.name = "John";
        p1.name = "Jane";
        p.age = 30;
        System.out.println(p.name);
        System.out.println(p.age);
        p.walk();
        p1.eat();
        p.walk(15);
        System.out.println(p.count); // this is not the way to access the static variable
        Person p2 = new Person("Bob", 10); // initializing the constructor
        System.out.println(p2.name);
        System.out.println(p2.age);
        p2.walk();
        System.out.println(Person.count); // it is the number of objects created, property of class, no need to make instance to use it, it is dont matter for object
        Developer d = new Developer("Abhi", 20);
        d.walk();
        d.doWork();
        System.out.println(d.count+" developer count");
        System.out.println(Person.count+" person count");

        encapsulationIntro obj = new encapsulationIntro();
        obj.doWork();
        obj.fuck(); // this is not possible because fuck is private, can I fuck you Titi? (●'◡'●) （づ￣3￣）づ╭❤～
    }
}

class Person {
    public Person() {
        count++;
        System.out.println("Person constructor");
    }
    public Person(String name, int age) { // constructor with parameters, overloading // inheritance
        this(); // calling the default constructor
        this.name = name; // this is the way to access the instance variable
        this.age = age;
        // count++;
        System.out.println("Person constructor with name");
    }
    static int count; // static means shared by all instances, it is property of class, not instance
    String name;
    int age;
    void walk() {
        System.out.println(name + " is walking");
    }   
    void eat() {
        System.out.println(name + " is eating");
    }
    void walk(int speed) { // overload polymorphism-> compile time polymorphism, rekta runtime polymorphism hoy
        System.out.println(name + " is walking at " + speed + " mph");
    }
    void doWork() {
        System.out.println(name + " is working");
    }
}

class Developer extends Person {
    static int count;
    public Developer() {
        super(); // calling the parent constructor
        System.out.println("Developer constructor");
    }
    public Developer(String name, int age) {
        super(name, age); // calling the parent constructor
        System.out.println("Developer constructor with name");
    }
    // void doWork() {
    //     System.out.println(name + " is coding");
    // }
    // void walk(){ // runtime polymorphism -> runtime e link hochhe
    //     System.out.println(name + " is coding walking");
    // }
}