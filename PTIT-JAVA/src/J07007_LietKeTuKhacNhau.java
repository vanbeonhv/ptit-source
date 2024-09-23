import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.SortedSet;
import java.util.TreeSet;

public class J07007_LietKeTuKhacNhau {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("VANBAN.in"));
        SortedSet<String> result = new TreeSet<>();
        while (in.hasNext()) {
            String s = in.next().toLowerCase();
            result.add(s);
        }

        for (String s : result) {
            System.out.println(s);
        }
    }
}
