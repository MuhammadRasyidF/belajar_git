package main;

import java.math.*;
import java.util.*;

/**
 * THis Program uses big numbers to compute the odds of winning the grand prinze in a lottery.
 * @author RF
 */
public class BigIntegerTest{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);

        System.out.print("how many number you need to draw? ");
        int k = in.nextInt();

        System.out.print("WHat is the highest number you can draw? ");
        int n = in.nextInt(); // hai

        /**
         * Compute binomial coeffiecient n*(n-1)(n-2)*...*(n-K+1)/(1*2*3*...*k)
         */

        BigInteger randomize = BigInteger.valueOf(1);

        for (int i = 1; i <= k; i++)
            randomize = randomize.multiply(BigInteger.valueOf(n - i + 1)).divide(BigInteger.valueOf(i));

        System.out.println("YOur odds are 1 in " + randomize + ". Good luck");

        in.close();
    }
}