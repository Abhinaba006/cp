package encapsulation;

public class encapsulationIntro{
    public static void main(String args[]){
        Laptop l = new Laptop();
        l.setPrice(15);
        l.setPrice(-10);
        l.getPrice();
    }
    public void doWork(){ // pulic means it can be accessed by any class, private means it can be accessed only by the class
        System.out.println("working is working");
    }

    public void fuck(){ // default access modifier, private means it can be accessed only by the class
        System.out.println("fuck");
    }

    public void fuck1(){ // private means it can be accessed only by the class
        System.out.println("fuck");
    }
    // protected means it can be accessed by the class and its subclasses -> data hiding

    

    
}

class Laptop{
    int ram;
    private int price;
    public void setPrice(int price){
        // validation
        if(price>0){
            System.out.println("price is not set");
            return;
        }
        this.price = price;
        System.out.println("price is set");
    }
    public void getPrice(){
        System.out.println("price is "+price);
    }
}