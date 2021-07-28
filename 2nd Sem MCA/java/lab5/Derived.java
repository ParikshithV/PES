class Base{
   public void display(){

      System.out.println("Base Class");
   }
}
public class Derived extends Base {
   public void displaytwo(){
      System.out.println("Derived Class");
   }
   public static void main(String args[]){
      Derived obj1 = new Derived();
      obj1.display();
      obj1.displaytwo();
    }
}
