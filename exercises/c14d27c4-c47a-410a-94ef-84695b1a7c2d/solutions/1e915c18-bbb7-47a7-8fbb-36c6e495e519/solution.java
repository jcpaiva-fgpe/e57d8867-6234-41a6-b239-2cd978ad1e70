import java.util.Scanner;

public class solution {
    public static void main(String args[]) {
      	Scanner s = new Scanner(System.in);
      	int year = s.nextInt();
      	
      	if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
            System.out.println("true");
       	else
       		System.out.println("false");
   }
}
