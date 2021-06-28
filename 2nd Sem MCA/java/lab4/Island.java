public class Island
{
    Island i;
    public static void main(String[] args)
    {
        Island ClassObj1 = new Island();
        Island ClassObj2 = new Island();

        ClassObj1.i = ClassObj2;
        ClassObj2.i = ClassObj1;

        ClassObj1 = null;
        ClassObj2 = null;
        System.gc();
    }
}
