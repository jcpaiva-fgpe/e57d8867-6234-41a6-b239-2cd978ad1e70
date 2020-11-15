import java.util.Scanner;
	public class solution {
	 public static void main(String[] args) {
		 int n;
		 int pos = 0, nullo = 0, neg = 0;
		 Scanner s = new Scanner(System.in);

		 n = s.nextInt();

		 for(int i = 1; i <= n; i++) {
			 int a, b;
			 a = s.nextInt();
			 b = s.nextInt();
			 if (a == 0 || b == 0)
			 	nullo++;
			 else if ((a > 0 && b > 0) || (a < 0 && b < 0))
			 	pos++;
			 else
			 	neg++;
		 }

		 System.out.format("%d%n", pos);
		 System.out.format("%d%n", neg);
		 System.out.format("%d%n", nullo);
	 }

}