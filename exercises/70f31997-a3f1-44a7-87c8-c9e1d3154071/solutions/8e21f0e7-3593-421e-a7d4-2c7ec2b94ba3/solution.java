import java.util.Scanner;

public class solution {
    public static void main(String args[]) {
    	Scanner reader = new Scanner(System.in);
		String s = reader.nextLine();
      
      	if(s.length() < 2)
        	System.out.println("Incompatible.");
      	else if(s.charAt(0) == s.charAt(s.length()-1))
        	System.out.println("Two's a pair.");
        else
      		System.out.println(s.substring(s.length()-1) + s.substring(1,s.length()-1) + s.substring(0,1));
    }
}
