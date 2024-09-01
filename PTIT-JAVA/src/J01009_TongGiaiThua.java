import java.util.Scanner;

public class J01009_TongGiaiThua {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long product = 1;
        long total = 0;
        for(int i = 1; i <= n; i++){
            product *= i;
            total += product;
        }
        System.out.println(total);
    }
}
