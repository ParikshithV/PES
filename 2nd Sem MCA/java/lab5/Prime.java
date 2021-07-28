package data;
import java.util.Scanner;
 
 public class Prime
{
	public void find()
	{
        	Scanner sc = new Scanner(System.in);
        	int a, b, i, j, flag;
 
       
        	System.out.println("Enter lower bound of the interval: ");
        	a = sc.nextInt(); 
 
        
        	System.out.println("Enter upper bound of the interval: ");
       		b = sc.nextInt(); 
 		System.out.println("Prime numbers");
        	for (i = a; i <= b; i++) 
		{
            		if (i == 1 || i == 0)
                	continue;
 
            		flag = 1;
 
            		for (j = 2; j <= i / 2; ++j)
	    		{
                		if (i % j == 0) 
				{
                    			flag = 0;
                    			break;
              			}
            		}
            		if (flag == 1)
                	System.out.println(i);
        	}
	}
    
}