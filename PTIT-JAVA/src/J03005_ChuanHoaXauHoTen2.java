import java.util.Scanner;

public class J03005_ChuanHoaXauHoTen2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int k = Integer.parseInt(s);
        while (k-- > 0) {
            String name = in.nextLine();
            StringBuilder sb = new StringBuilder();
            String[] words = name.split("\\s+");

            for (int i = 1; i < words.length; i++) {
                String currentWord = words[i];
                currentWord = currentWord.toLowerCase();
                sb.append(Character.toUpperCase(currentWord.charAt(0)))
                        .append(currentWord.substring(1))
                        .append(currentWord).append(" ");
            }

            String firstName = words[0].toUpperCase();
            sb.insert(sb.capacity() - 1, String.format(", %s", firstName));

            System.out.println(sb);
        }

    }
}
