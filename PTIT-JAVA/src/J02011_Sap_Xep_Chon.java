import java.util.Scanner;

public class J02011_Sap_Xep_Chon {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = in.nextInt();
        }

        for (int i = 0; i < n - 1; i++) {
            int min = nums[i];
            int min_index = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < min) {
                    min = nums[j];
                    min_index = j;
                }
            }

            if (min_index != i) {
                int temp = nums[i];
                nums[i] = nums[min_index];
                nums[min_index] = temp;
            }

            System.out.print("Buoc " + (i + 1) + ":");
            for (int x : nums) {
                System.out.print(" " + x);
            }
            System.out.println();
        }
    }

}
