import java.util.Scanner;
public class solution {
	 public static void main(String[] args) {
		 String s1, s2;
		 Scanner s = new Scanner(System.in);

		 s1 = s.nextLine();
		 
		 s2 = s.nextLine();

		 if (s1.equals(s2))
		 	System.out.println("EQUALS");
		 else if (s1.equalsIgnoreCase(s2))
		 	System.out.println("SIMILAR");
		 else
		 	System.out.println("DIFFERENT");
	 }
}