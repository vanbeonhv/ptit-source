import java.util.ArrayList;
import java.util.Scanner;

public class J02014_Diem_Can_Bang {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        for (int i = 0; i < k; i++) {
            int n = in.nextInt();
            ArrayList<Integer> nums = new ArrayList<>();
            int sum = 0;
            for (int j = 0; j < n; j++) {
                int num = in.nextInt();
                sum += num;
                nums.add(num);
            }

            int left = 0;
            int right = sum;
            int pos = -1;

            for(int m = 1; m < n - 1; m++){
                int current_pos = nums.get(m - 1);
                left += current_pos;
                right -= current_pos;
                int totalRight = right - nums.get(m);
                if(left == totalRight){
                    pos = m + 1;
                    break;
                }
            }
            System.out.println(pos);
        }
    }
}
