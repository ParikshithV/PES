class InClass{
  static{
    System.out.println("Class loaded");
  }
}

class TheClass{
  public static void main (String[] args) throws Exception{
    Class.forName("InClass");
  }

}
