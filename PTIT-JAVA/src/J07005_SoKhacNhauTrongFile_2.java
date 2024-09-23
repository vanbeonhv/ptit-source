import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;

public class J07005_SoKhacNhauTrongFile_2 {
    public static void main(String[] args) throws IOException {
        DataInputStream in = new DataInputStream(new FileInputStream("DATA.IN"));
        int freq[] = new int[1001];
        for (int i = 0; i < 100000; i++) {
            int num = in.readInt();
            freq[num]++;
        }

        for (int i = 0; i < 1000; i++) {
            if (freq[i] > 0) {
                System.out.println(i + " " + freq[i]);
            }
        }
    }
}
