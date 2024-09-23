import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J07022_LoaiBoSoNguyen {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DATA.in"));
        ArrayList<String> result = new ArrayList<>();
        while (in.hasNext()) {
            String s = in.next();
            try {
                Integer.parseInt(s);
            } catch (Exception e) {
                result.add(s);
            }
        }
        Collections.sort(result);
        for (String s : result) {
            System.out.print(s + " ");
        }

    }
}
