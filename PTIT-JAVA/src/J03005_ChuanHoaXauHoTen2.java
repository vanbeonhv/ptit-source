import java.util.Scanner;

public class J03005_ChuanHoaXauHoTen2 {
    public static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
//        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int k = Integer.parseInt(s);
        while (k-- > 0) {
            String name = in.nextLine().trim();
            StringBuilder sb = new StringBuilder();
            String[] words = name.split("\\s+");

            for (int i = 1; i < words.length; i++) {
                String currentWord = words[i];
                currentWord = currentWord.toLowerCase();
                sb.append(Character.toUpperCase(currentWord.charAt(0)))
                        .append(currentWord.substring(1))
                        .append(" ");
            }

            String firstName = words[0].toUpperCase();
            int a = sb.length() - 1;
            String firstNameCapitalized = String.format(", %s", firstName);
            sb.insert(sb.length() - 1, String.format(", %s", firstName));

            System.out.println(sb);
        }

    }
}
