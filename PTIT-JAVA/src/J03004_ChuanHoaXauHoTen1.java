import java.util.Scanner;
import java.util.StringTokenizer;

public class J03004_ChuanHoaXauHoTen1 {
    public static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        String s = in.nextLine();
        int k = Integer.parseInt(s);
        while(k-- > 0){
            String hoTen = in.nextLine();
            System.out.println(chanHoa(hoTen));
        }
    }

    public static String chanHoa(String hoTen){
        StringBuilder sb = new StringBuilder();
        StringTokenizer st = new StringTokenizer(hoTen);

        while (st.hasMoreTokens()){
            String tu = st.nextToken();
            tu = tu.toLowerCase();
            sb.append(Character.toUpperCase(tu.charAt(0)))
                    .append(tu.substring(1))
                    .append(" ");


//            System.out.println(tu);
        }
        return sb.toString().trim();
    }

}
