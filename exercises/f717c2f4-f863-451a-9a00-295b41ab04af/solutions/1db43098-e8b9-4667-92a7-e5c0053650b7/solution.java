import java.util.Scanner;
import java.util.function.Function;
import java.util.stream.Collectors;

public class solution {
    public static void main(String args[]) {
      Scanner reader = new Scanner(System.in);
		  String str = reader.nextLine();

      int cont = (int)str.chars()
      .boxed()
      .collect(Collectors.groupingBy(Function.identity(), Collectors.counting()))
      .values()
      .stream()
      .filter(count -> count > 1)
      .count();

      System.out.println(cont);
    }
}
