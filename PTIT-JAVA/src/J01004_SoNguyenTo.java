import java.util.Scanner;

public class J01004_SoNguyenTo {
    private static boolean isPrime(int x){
        if(x < 2) return false;
        for(int i = 2; i < Math.sqrt(x); i++){
            if(x % i == 0) return false;
        }
        return true;
     }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        while(n-- > 0){
            int a = in.nextInt();
            if(isPrime(a)){
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        in.close();
    }
}
