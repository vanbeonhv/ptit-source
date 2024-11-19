import java.util.Scanner;

public class J01025_So_Chinh_Phuong {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        while (k-- > 0) {
            int n = in.nextInt();
            boolean isValid = false;
            for (int i = 1; i <= Math.sqrt(n); i++) {
                if (i * i == n) {
                    isValid = true;
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
