// Programs 1 and 3 (Constructor overloading and nested constructors)

import java.util.Scanner;

class ConstOvr{
  public static void main(String args[]) {
    ConstOvr c1 = new ConstOvr();
    ConstOvr c2 = new ConstOvr("hello");
  }

  public ConstOvr() {
    this("hii");
    System.out.println("Constructor called without paramater");
  }

  public ConstOvr(String param) {
    String greeting = param;
    System.out.println("Constructor called with paramater: "+greeting);
  }
}
