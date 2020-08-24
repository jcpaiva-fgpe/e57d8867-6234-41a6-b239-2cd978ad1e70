import java.util.Scanner;

public class template {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        String phrase = reader.nextLine();
        int k = reader.nextInt();

        System.out.println(caesarCipher(phrase, k));
    }

    {{code}}
}
