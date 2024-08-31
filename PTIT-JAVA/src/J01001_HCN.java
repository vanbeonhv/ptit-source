import java.util.Scanner;

public class J01001_HCN {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), m = in.nextInt();
        if(n <= 0 || m <= 0){
            System.out.println(0);
            return;
        }

        System.out.print(2 * (n + m) + " " + n * m);
    }
}

