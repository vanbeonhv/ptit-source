import java.util.Scanner;

public class J01006_Fibo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        long f[] = new long[100];
        f[1] = f[2] = 1;
        for(int i = 3; i <= 92; i++){
            f[i] = f[i-1] + f[i-2];
        }
        while(k-- > 0){
            int n = in.nextInt();
            System.out.println(f[n]);
        }
        in.close();
    }
}
