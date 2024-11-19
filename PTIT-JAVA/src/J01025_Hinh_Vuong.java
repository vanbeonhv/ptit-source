import java.util.Arrays;
import java.util.Scanner;

public class J01025_Hinh_Vuong {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] x = new int[4];
        int[] y = new int[4];
        for (int i = 0; i < 4; i++) {
            x[i] = in.nextInt();
            y[i] = in.nextInt();
        }

        Arrays.sort(x);
        Arrays.sort(y);

        int a = Math.max(x[3] - x[0], y[3] - y[0]);
        System.out.println(a * a);
    }
}
