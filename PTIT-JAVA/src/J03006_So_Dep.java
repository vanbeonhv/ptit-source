import java.util.Scanner;

public class J03006_So_Dep {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        while (k-- > 0) {
            String s = in.next().trim();
            StringBuilder sb = new StringBuilder();
            boolean isValid = true;
            for (int i = s.length() - 1; i >= 0; i--) {
                int num = Integer.parseInt(String.valueOf(s.charAt(i)));
                if (num % 2 != 0) {
                    isValid = false;
                    break;
                }
                sb.append(s.charAt(i));
            }

            if (!sb.toString().equals(s)) {
                isValid = false;
            }

            if (isValid) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
