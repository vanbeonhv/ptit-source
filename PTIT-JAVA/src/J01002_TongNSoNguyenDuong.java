import java.util.Scanner;

public class J01002_TongNSoNguyenDuong {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        while(n-- > 0){
            int x = in.nextInt();
            long result = (long) x * (x+1) / 2;
            System.out.println(result);
        }
        in.close();
    }
}
