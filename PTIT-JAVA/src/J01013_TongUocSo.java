import java.util.Scanner;

public class J01013_TongUocSo {
    public static Scanner in = new Scanner(System.in);
    public static int MAX = (int) 2e6;
    public static int[] prime = new int[MAX + 1];

    public static void main(String[] args) {
        sieve();

        int k = in.nextInt();
        long total = 0;
        while (k-- > 0) {
            int n = in.nextInt();
            long sum = 0;
            while (n != 1) {
                sum += prime[n];
                n /= prime[n];
            }
            total += sum;
        }
        System.out.println(total);
    }

    // Sàng nguyên tố
    // Thông thường sẽ sàng bằng cách đánh dấu số nguyên tố là 1, còn lại là 0.
    // Nhưng tận dụng để tính tổng. Nên đánh dấu bằng uớc ngto nhỏ nhất
    public static void sieve() {
        //Đánh dấu tất cả các số đều là số nguyên tố.
        prime[0] = prime[1] = 0;
        for (int i = 2; i <= MAX; i++) {
            prime[i] = i;
        }


        //Gán tất cả phần từ trong mảng bằng ước nguyên tố nhỏ nhất của nó
        for (int i = 2; i * i <= MAX; i++) {
            if (prime[i] == i) {
                for (int j = i * i; j <= MAX; j += i) {
                    if (prime[j] == j) {
                        prime[j] = i;
                    }
                }
            }
        }
    }

}
