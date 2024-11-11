import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.List;

public class J07029_So_Nguyen_To_Lon_Nhat_Trong_File {
    private static final int N = (int) 1e6;
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream objectInputStream = new ObjectInputStream(new FileInputStream("DATA.in"));
        List<Integer> arrayList = (ArrayList<Integer>) objectInputStream.readObject();
        int[] prime = new int[N + 1];
        for (int i = 0; i <= N; i++) {
            prime[i] = 0;
        }

        for (int i : arrayList) {
            if (isPrime(i)) {
                prime[i]++;
            }
        }

        int cnt = 0;
        for (int i = N; i > 2; i--) {
            if (prime[i] > 0) {
                cnt++;
                System.out.println(i + " " + prime[i]);
            }
            if (cnt == 10) {
                break;
            }
        }

    }

    private static boolean isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
