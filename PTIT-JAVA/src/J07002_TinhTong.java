import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07002_TinhTong {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DATA.in"));
        long sum = 0;
        while (in.hasNext()) {
            String text = in.next();
            try {
                sum += Integer.parseInt(text);
            } catch (Exception e) {

            }
        }
        System.out.println(sum);
    }
}