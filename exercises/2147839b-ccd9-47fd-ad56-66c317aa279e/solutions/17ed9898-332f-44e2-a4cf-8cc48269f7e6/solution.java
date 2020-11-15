import java.util.Scanner;

public class solution {
	 public static void main(String[] args) {
		 final double T1 = 2.50; 
		 final double T2 = 1.50;
		 int totHours;
		 double tariffa = 0.0;

		 Scanner s = new Scanner(System.in);
		 do {
		 	totHours = s.nextInt();
		 }
		 while (totHours < 0);

		 if (totHours > 0)
		 	tariffa = T1 + (totHours - 1) * T2;

		 System.out.format("%.2f%n",tariffa);

	 }

}