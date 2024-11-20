import java.math.BigInteger;
import java.util.*;

public class J02008_Boi_So_Nho_Nhat_Cua_N_So_Nguyen_Duong {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        List<Integer> list = new ArrayList<>();
        int k = in.nextInt();
        while (k-- > 0) {
            int n = in.nextInt();
            list.add(n);
        }

        int maxN = Collections.max(list);
        BigInteger[] lcm_list = new BigInteger[maxN + 1];
        BigInteger current_lcm = BigInteger.valueOf(1);
        for (int i = 1; i <= maxN; i++) {
            current_lcm = lcm(BigInteger.valueOf(i), current_lcm);
            lcm_list[i] = current_lcm;
        }

        for (Integer i : list) {
            System.out.println(lcm_list[i]);
        }
    }

    public static BigInteger lcm(BigInteger a, BigInteger b) {
        return a.divide(a.gcd(b)).multiply(b);
    }
}
