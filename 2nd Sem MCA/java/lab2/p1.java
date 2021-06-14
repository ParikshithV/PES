class Statbloc {
    static {
      System.out.println("Static block called ");
    }

    public static String greet="Instance variable";

    public static void main(String args[]) {
      System.out.println(Statbloc.greet);
      Constr1 c1 = new Constr1();
      Constr2 c2 = new Constr2("hello");
    }
}

class Constr1 {
  public Constr1() {
    {
      System.out.println("Instance block");
    }
    
    System.out.println("Constructor called without paramater");
  }
}

class Constr2 {
  public static String greet="Constructor parameter";
  public Constr2(String param) {
    String greeting = param;
    System.out.println("Constructor called with paramater: "+greeting);
  }
}
