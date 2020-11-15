import java.util.Scanner;
public class solution {

	 public static void main(String[] args) {
	 String s;
	 int a, b;
	 Scanner scan = new Scanner(System.in);

	 do {
		 s = scan.nextLine();
	 }
	 while (s.isEmpty() == true);
	 a = scan.nextInt();
	b = scan.nextInt();
	if (a < 0 || a > b || b > s.length()){
		System.out.println("ERROR");
	}
	else{
		String s2 = s.substring(a, b + 1);
		System.out.format("%s%n", s2);
		
		}
	 
	 
	}
}