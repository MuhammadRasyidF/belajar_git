package main;

import java.util.*;

/**
 * this program demonstrates a <code>fot</code> loop.
 * @author RF
 */
public class Lottery0dds 
{
    public static void main(String[] args)
     {
        Scanner in = new Scanner(System.in);

        System.out.print("How many numbers do you need to draw? ");
        int k = in.nextInt();

        System.out.print("what is the highest number you can draw? ");
        int n = in.nextInt();

        /*
         * compute binomial coeffoecient n*(n-1)*(n-2)*....*(n-k+1)/(1*2*3...*k)
         */
        
        int Lottery0dds = 1;
        for (int i = 1; i <= k; i++)
            Lottery0dds = Lottery0dds * (n - i + 1) / i;
        
        System.out.println("Your odds are 1 in " + Lottery0dds + ". Good luck!");
        
        in.close();
    }   
}
