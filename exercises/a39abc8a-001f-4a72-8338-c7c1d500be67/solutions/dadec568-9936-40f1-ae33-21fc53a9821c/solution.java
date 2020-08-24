import java.util.Scanner;

public class solution {
    public static void main(String args[]) {
    	Scanner s = new Scanner(System.in);
      	int n = s.nextInt();

      	if((n < 10) ? true : (n < 100) ? false : n == ("" + n).chars().map(cp -> (int)Math.pow(Character.getNumericValue(cp), ("" + n).length())).sum())
      		System.out.println("true");
      	else
      		System.out.println("false");
   	}
}
