import java.util.Arrays;
import java.util.Scanner;

public class J01008_PhanTichThuaSoNguyenTo {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int k = in.nextInt();
        for(int i = 1; i <= k; i++){

            int n = in.nextInt();
            int cnt = 0;
            System.out.printf("Test %d:", i);

            for(int j = 2; j <= Math.sqrt(n); j++){
                while(n % j == 0){
                    n /= j;
                    cnt++;
                }
                if(cnt > 0){
                    System.out.printf(" %d(%d)", j, cnt);
                }
                cnt = 0;
            }
            if(n != 1){
                System.out.printf(" %d(%d)", n, 1);
            }
            System.out.println();

        }

        in.close();
    }

}
