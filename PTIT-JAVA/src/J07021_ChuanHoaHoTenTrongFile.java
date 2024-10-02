import java.io.File;
import java.io.FileNotFoundException;
import java.util.Objects;
import java.util.Scanner;
import java.util.StringTokenizer;

public class J07021_ChuanHoaHoTenTrongFile {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DATA.in"));
        while (in.hasNextLine()) {
            String line = in.nextLine();
            if (Objects.equals(line, "END")) {
                return;
            }
            System.out.println(ChuanHoa(line.trim()));
        }
    }

    public static StringBuilder ChuanHoa(String line) {

        StringTokenizer st = new StringTokenizer(line);
        StringBuilder sb = new StringBuilder();
        while (st.hasMoreTokens()) {
            String s = st.nextToken();
            sb.append(s.substring(0, 1).toUpperCase())
                    .append(s.substring(1).toLowerCase())
                    .append(" ");
        }
        return sb;
    }
}
