import java.math.BigInteger;
import java.util.Scanner;

public class J03013_HieuSoNguyenLon {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        while (k-- > 0) {
            BigInteger x = new BigInteger(in.next().trim());
            BigInteger y = new BigInteger(in.next().trim());
            BigInteger z = x.subtract(y);
            System.out.println(z.abs());
        }
        in.close();
    }
}
