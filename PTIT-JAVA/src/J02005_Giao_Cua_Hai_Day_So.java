import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class J02005_Giao_Cua_Hai_Day_So {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();

        TreeSet<Integer> A = new TreeSet<>();
        TreeSet<Integer> B = new TreeSet<>();
        while (n-- > 0){
            A.add(in.nextInt());
        }

        while (m-- > 0){
            B.add(in.nextInt());
        }

        A.retainAll(B);

        for(Integer i : A){
            System.out.print(i + " ");
        }
    }
}
