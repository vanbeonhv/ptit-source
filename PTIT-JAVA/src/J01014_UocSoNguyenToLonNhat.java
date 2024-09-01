import java.util.Scanner;

public class J01014_UocSoNguyenToLonNhat {
    public static Scanner in = new Scanner(System.in);
    public static long MAX_N = (long) 1e10;
    public static long[] prime = new long[(int) 10000000005L];

    public static void main(String[] args) {

    }

    private static void sieve() {
        for (long i = 2; i <= MAX_N; i++) {
            prime[i] = 1;
        }

        for (long i = 2; i * i <= MAX_N; i++) {

            for (long j = i * i; j <= MAX_N; j += i) {
                prime[j] = 0;
            }
        }
    }
}
