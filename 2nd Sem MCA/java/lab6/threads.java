class Racer extends Thread
{
    public void run()
    {
        int i=0, laps = 5;
        try{
          while(i<laps)
          {
            System.out.println(this.getName()+",is driving lap "+i);
            i++;
            Thread.sleep(100);
          }
        }
        catch(Exception e){}
        finally {
          System.out.println(this.getName()+" Finished");
        }
    }
}
class Race
{
    public static void main(String[] args)
    {
        int laps = 10;

        Racer driver1 = new Racer();
        driver1.setName("Riccardo");
        driver1.start();

        Racer driver2 = new Racer();
        driver2.setName("Norris");
        driver2.start();

        Racer driver3 = new Racer();
        driver3.setName("Kimi");
        driver3.start();
    }
}
