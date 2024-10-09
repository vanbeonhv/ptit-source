import java.math.BigInteger;
import java.util.Scanner;

// Bài này đáp án yêu cầu phải thêm

public class J03013_HieuSoNguyenLon1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        while(k-- > 0){
            String sx = in.next();
            String sy = in.next();

            BigInteger x = new BigInteger(sx);
            BigInteger y = new BigInteger(sy);
            BigInteger z = x.subtract(y).abs();
            String result = z.toString();

            int maxLength = Math.max(sx.length(), sy.length());
            int gapLength = maxLength - result.length();
            if(gapLength > 0){
                StringBuilder sb = new StringBuilder(result);
                while(gapLength-- > 0){
                    sb.insert(0, '0');
                }
                System.out.println(sb);
            } else {
                System.out.println(result);
            }
        }

    }
}
