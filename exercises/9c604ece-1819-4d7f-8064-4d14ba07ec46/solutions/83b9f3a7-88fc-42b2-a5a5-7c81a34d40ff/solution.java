import java.util.Scanner;

public class solution {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);

      String card_number = s.nextLine();
      String new_card_number = card_number.replaceAll(".(?=.{4})", "*");

      System.out.println(new_card_number);
   }
}
