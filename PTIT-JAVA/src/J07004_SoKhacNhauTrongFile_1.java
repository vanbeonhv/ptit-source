import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07004_SoKhacNhauTrongFile_1 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DATA.in"));
        int freq[] = new int[100001];
        while (in.hasNext()) {
            int num = in.nextInt();
            freq[num]++;
        }

        for (int i = 0; i < 100001; i++) {
            if (freq[i] > 0) {
                System.out.printf("%d %d %n", i, freq[i]);
            }
        }
    }
}
