import java.util.Collection;
import java.util.Scanner;

public class J02010_Sap_Xep_Doi_Cho_Truc_Tiep {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = in.nextInt();
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[i]) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }

            System.out.print("Buoc " + (i + 1) + ":");
            for (int x : nums) {
                System.out.print(" " + x);
            }
            System.out.println();
        }
    }

}
