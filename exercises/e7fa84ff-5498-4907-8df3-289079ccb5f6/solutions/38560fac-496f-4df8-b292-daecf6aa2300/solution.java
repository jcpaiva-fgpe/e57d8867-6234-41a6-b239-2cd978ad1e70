import java.util.Scanner;
	public class solution {
	 public static void main(String[] args) {
		 final int N = 5;
		 int[] v = new int[N];
		 int somma = 0;
		 double m;
		 Scanner s = new Scanner(System.in);

		 for(int i = 0; i < N; i++) {
			 v[i] = s.nextInt();
			 somma += v[i];
		 }

		 m = (double) somma / N;
		 System.out.format("%.2f%n", m);
		 
		 for(int i = 0; i < N; i++)
		 	if (v[i] > m)
		 		System.out.format("%d ", v[i]);
		 System.out.println();
	 }
}