import java.util.Scanner;

public class J01005_ChiaTamGiac {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        while (k-- > 0){
            int n = in.nextInt(), h = in.nextInt();
            for(int i = 1; i < n; i++){
                double result = h * Math.sqrt((double) i / n);
                System.out.printf("%.6f ", result);
            }
            System.out.println();
        }
        in.close();
    }
}
