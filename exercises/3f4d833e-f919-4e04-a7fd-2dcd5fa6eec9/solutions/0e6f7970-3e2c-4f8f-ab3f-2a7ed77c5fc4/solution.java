import java.util.Scanner;

class solution { 
	public static void main (String[] args) { 

		Scanner s = new Scanner(System.in);
		int x,y,z; 
		x = s.nextInt();
		y = s.nextInt();
		z = s.nextInt(); 

		if(x==y && x==z)
			System.out.println("ALL");
		else if(y==x && (y > z || y < z)) 
			System.out.println("TWO");
		else if(y==z && (y > x || z < x)) 
			System.out.println("TWO");
		else if(x==z && (z > y || z < y)) 
			System.out.println("TWO");

		else 
			System.out.println("NONE");
	}
}