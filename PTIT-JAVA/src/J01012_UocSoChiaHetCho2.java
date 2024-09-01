import java.util.Scanner;

public class J01012_UocSoChiaHetCho2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int k = in.nextInt();
        while (k-- > 0) {
            int n = in.nextInt();
            int cnt = 0;
            for (int i = 1; i <= Math.sqrt(n); i++) {
                if (n % i == 0) {
                    if (i % 2 == 0) {
                        cnt++;
                    }

                    if((n / i) % 2 == 0 && i != Math.sqrt(n)) {
                        cnt++;
                    }
                }
            }

            System.out.println(cnt);
        }
        in.close();
    }
}
