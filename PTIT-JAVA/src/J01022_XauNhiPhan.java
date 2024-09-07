import java.util.Scanner;
// không thể generate hết chỗi vì sẽ bị tràn
// String thứ n = X[n-2] + X[n-1].
// xác định kí tự thứ k bằng cách bổ nhị phân, xác định xem nó K thuộc về X[n-2] hay X[n-1]

public class J01022_XauNhiPhan {
    public static long[] length = new long[100];

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        genFiboLength();

        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            long k = in.nextLong();
            System.out.println(findKCharacter(n, k));
        }
    }

    public static void genFiboLength() {
        length[1] = 1;
        length[2] = 1;
        for (int i = 3; i <= 93; i++) {
            length[i] = length[i - 2] + length[i - 1];
        }
    }

    public static char findKCharacter(int n, long k) {
        if (n == 1) {
            return '0';
        }
        if (n == 2) {
            return '1';
        }

        if (k <= length[n - 2]) {
            //Tìm trong xâu X[n-2]
            return findKCharacter(n - 2, k);
        } else {
            //Tìm trong xâu X[n-1]
            return findKCharacter(n - 1, k - length[n - 2]);
        }
    }

}
