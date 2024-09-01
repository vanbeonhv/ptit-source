import java.util.Scanner;

public class J01011_BCNN_UCLN {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int k = in.nextInt();
        while(k-- > 0){
            int a = in.nextInt(), b = in.nextInt();
            int c = gcd(a, b);
            System.out.printf("%d %d%n", lcm(a, b, c), c);
        }

        in.close();
    }

    //greatest common divisor
    private static int gcd(int a, int b){
        if(b == 0)  return a;
        return gcd(b, a % b);
    }

    //lowest common multiple
    private static long lcm(int a, int b, int gcd){
        return (long) a * b / gcd;
    }
}
