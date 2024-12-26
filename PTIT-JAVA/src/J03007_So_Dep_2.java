import java.util.Scanner;

public class J03007_So_Dep_2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        for (int i = 0; i < k; i++) {
            String n = in.next();
            if (!isThuanNghich(n)) {
                System.out.println("NO");
                continue;
            }

            if (!isStartEnd8(n)) {
                System.out.println("NO");
                continue;
            }

            if (!isDivide10(n)) {
                System.out.println("NO");
                continue;
            }

            System.out.println("YES");
        }
    }

    public static boolean isThuanNghich(String num) {
        StringBuilder sb = new StringBuilder(num).reverse();
        return sb.toString().equals(num);
    }

    public static boolean isStartEnd8(String num) {
        char start = num.charAt(0);
        char end = num.charAt(num.length() - 1);
        return start == '8' && end == '8';
    }

    public static boolean isDivide10(String num){
        int sum = 0;
        for (int i = 0; i < num.length(); i++) {
            int c = num.charAt(i) - '0';
            sum += c;
        }
        return sum % 10 == 0;
    }
}
