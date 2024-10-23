import java.util.ArrayList;
import java.util.Scanner;


public class J01024_So_Tam_Phan {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        ArrayList<Character> chars = new ArrayList<>();
        chars.add('0');
        chars.add('1');
        chars.add('2');

        while (k-- > 0) {
            String s = in.next();
            boolean isValid = true;
            for (int i = 0; i < s.length(); i++) {
                if (!chars.contains(s.charAt(i))) {
                    isValid = false;
                    break;
                }
            }

            if (isValid) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
