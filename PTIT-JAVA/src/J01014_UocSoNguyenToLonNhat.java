import java.util.Scanner;

//Su dung thuat toan trial division
public class J01014_UocSoNguyenToLonNhat {
    public static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        int k = in.nextInt();
        while (k-- > 0) {
            long n = in.nextLong();
            long result = 0;

            for (long i = 2; i <= Math.sqrt(n); i++) {
                while (n % i == 0) {
                    n /= i;
                    result = i;
                }
            }

            if(n != 1){
                result = n;
            }

            System.out.println(result);
        }
    }
}
