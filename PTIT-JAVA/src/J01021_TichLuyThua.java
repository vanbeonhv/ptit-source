import java.util.Scanner;

// Sử dụng lũy thừa nhị phân
// https://blog.28tech.com.vn/luy-thua-nhi-phan

public class J01021_TichLuyThua {
    public static Scanner in = new Scanner(System.in);
    public static int mod = (int) (1e9 + 7);

    public static void main(String[] args) {
        while (true) {

            long a = in.nextLong();
            long b = in.nextLong();
            if (a == b && b == 0) {
                break;
            }

            long result = bitpow(a, b) % mod;
            System.out.println(result);
        }
    }

    public static long bitpow(long a, long b) {
        if (b == 0) {
            return 1;
        }

        long x = bitpow(a, b / 2);
        x = (x % mod) * (x % mod);
        if (b % 2 == 1) {
            return (x % mod) * (a % mod);
        } else {
            return x;
        }
    }
}