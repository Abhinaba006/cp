package basics;

public class Abstraction {

  // car c = new car(); // we dont need this, we will tell tera koi object nahi hoga
  // sad car *noises* bruuum bruum T.T
  // hum tumko abstract class bana dunga
  public static void main(String[] args) {
    Audi a = new Audi();
    a.start();
    BMW b = new BMW();
    b.start();
    b.stop();
  }
}

abstract class car {

  int price;

  abstract void start();

  void stop() {
    System.out.println("car is stopping");
  }
}

class Audi extends car {

  void start() {
    System.out.println("Audi is starting");
  }
}

class BMW extends car {

  void start() {
    System.out.println("BMW is starting");
  }
}

// abstract class chara fun hoyna, abstrcation er direct child nei


