import java.util.Scanner;

public class template {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        int num = reader.nextInt();

        System.out.println(largestPrimeFactor(num));
    }

    {{code}}
}