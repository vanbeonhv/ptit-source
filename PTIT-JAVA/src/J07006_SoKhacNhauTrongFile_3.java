import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

public class J07006_SoKhacNhauTrongFile_3 {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer> arrayList = (ArrayList<Integer>) in.readObject();
        int freq[] = new int[1000];
        for (Integer i : arrayList) {
            freq[i]++;
        }

        for (int i = 0; i < 1000; i++) {
            if (freq[i] > 0) {
                System.out.printf(i + " " + freq[i] + "\n");
            }
        }
    }
}
