import java.util.Scanner;

public class J02004_Mang_Doi_Xung {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        while(k-- > 0){
            int n = in.nextInt();
            StringBuilder sb = new StringBuilder();
            while (n-- > 0){
                sb.append(in.next());
            }
            if(sb.toString().contentEquals(sb.reverse())){
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
