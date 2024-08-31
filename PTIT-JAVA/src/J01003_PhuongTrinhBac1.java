import java.util.Scanner;

public class J01003_PhuongTrinhBac1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt(), b = in.nextInt();
        if (a == 0 && b != 0) {
            System.out.println("VN");
        } else if (a == 0) {
            System.out.println("VSN");
        } else {
            double c = (double) (-1 * b) / a;
            System.out.printf("%.2f",c);
        }

        in.close();
    }
}
