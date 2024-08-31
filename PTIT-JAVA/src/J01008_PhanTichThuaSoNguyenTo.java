import java.util.Arrays;
import java.util.Scanner;

public class J01008_PhanTichThuaSoNguyenTo {
    public static int[] f = new int[100000000];

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int k = in.nextInt();
        for(int i = 1; i <= k; i++){
            int n = in.nextInt();
            analyze(n);
            show(i);
            Arrays.fill(f, 0);
        }

        in.close();
    }

    public static void analyze(int n) {
        int i = 2;
        while (n != 1) {
            if (n % i == 0) {
                n /= i;
                f[i]++;
            } else {
                i++;
            }
        }
    }

    public static void show(int k){
        System.out.print("Test " + k + ": ");
        for(int i = 0; i < 100; i++){
            if(f[i] != 0){
                System.out.print(i + "(" + f[i] + ") ");
            }
        }

        System.out.println();
    }
}
