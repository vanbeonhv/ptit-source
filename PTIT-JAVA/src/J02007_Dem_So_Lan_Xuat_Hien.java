import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class J02007_Dem_So_Lan_Xuat_Hien {
    public static final int N = (int) 1e5;

    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>();
        int[] result = new int[N+1];

        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        for(int i = 1; i <= k; i++) {
            int n = in.nextInt();
            while (n-- > 0) {
                int m = in.nextInt();
                if (!list.contains(m)) {
                    list.add(m);
                }
                result[m]++;
            }

            System.out.println("Test " + i + ":");
            for(int m : list){
                System.out.println(m + " xuat hien " + result[m] + " lan");
            }
            list.clear();
            Arrays.fill(result, 0);
        }


    }
}
