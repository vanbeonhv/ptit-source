import java.math.BigInteger;
import java.util.Scanner;

public class J03011_Ucln_2_So_Nguyen_Lon {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        while (k-- > 0) {
            BigInteger a = new BigInteger(in.next());
            BigInteger b = new BigInteger(in.next());
            System.out.println(a.gcd(b));
        }

    }
}
