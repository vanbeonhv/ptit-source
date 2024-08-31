import java.util.HashSet;
import java.util.Scanner;

/**
 * Một số n là số Fibonacci nếu và chỉ nếu một trong hai biểu thức sau là một số chính phương:
 * 5n^2 + 4
 * 5n^2 - 4
 *
 * nhưng bài này n quá lớn (< 10^18). không thể dùng
 *
 * Fail nhiều lần vì quên thêm 0 vào set
 */

public class J01007_KiemTraFibo {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        HashSet<Long> set = new HashSet<>();
        long[] f = new long[100];
        f[0] = 0;
        f[1] = f[2] = 1;
        set.add(0L);
        set.add(1L);
        for(int i = 3; i < 100; i++){
            f[i] = f[i-1] + f[i-2];
            set.add(f[i]);
        }

        int k = in.nextInt();
        while(k-- > 0){
            long n = in.nextLong();
            if(set.contains(n)){
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }


        in.close();
    }
}


