import java.util.Scanner;

public class J01017_SoLienKe {
    public static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        int k = in.nextInt();
        while(k-- > 0){
            String s = in.next();
            int lastChar = s.charAt(0) - '0';
            boolean ok = true;
            for(int i = 1; i < s.length(); i++){
                char c = s.charAt(i);
                int nextChar = Character.getNumericValue(c);
                if(Math.abs(nextChar - lastChar) != 1){
                    ok = false;
                    break;
                }
                lastChar = nextChar;
            }
            System.out.println(ok ? "YES" : "NO");
        }

    }
}
