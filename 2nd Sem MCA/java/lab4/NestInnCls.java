class OuterClass
{
  {System.out.println("Outer class called");}
  class InnerClass{
    void display()
    {
    System.out.println("Inner class called");
    }
  }

  public static void main(String[] args)
  {
  OuterClass Outerobject=new OuterClass();
  OuterClass.InnerClass object=Outerobject.new InnerClass();
  object.display();
  }
}
