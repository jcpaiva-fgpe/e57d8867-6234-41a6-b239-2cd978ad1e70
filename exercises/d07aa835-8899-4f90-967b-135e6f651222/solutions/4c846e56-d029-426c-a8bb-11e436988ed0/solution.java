import java.util.Scanner;
public class solution {
	 public static void main(String[] args) {
		 final int MAX_N = 35;
		 int n;
		 int[] voti = new int[MAX_N];
		 int somma = 0, contaSuff = 0, contaInsuff = 0;

		 Scanner s = new Scanner(System.in);

		 do {
		 	n = s.nextInt();
		 }
		 while (n < 1 || n > MAX_N);

		 for (int i = 0; i < n; i++) {
			 int v;
			 boolean errore;
			 do {
				 v = s.nextInt();

				 errore = (v < 1 || v > 10);

				 if (errore == true)
				 System.out.print("ERROR");

			 } while (errore == true);
			 somma += v;

			 if(v >= 6)
			 	contaSuff++;
			 else
			 	contaInsuff++;
			 voti[i] = v;
		 }

		 System.out.format("%.1f%n", (double) somma / n);
		 System.out.format("%.1f%%%n", 100.0 * contaSuff / n);
		 System.out.format("%.1f%%%n", 100.0 * contaInsuff / n);
	 }
}