import java.util.Scanner;

public class J01018_SoKhongLienKe {
    public static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        int k = in.nextInt();
        while(k-- > 0 ){
            String s = in.next();
            int lastNum = s.charAt(0) - '0';
            int sum = lastNum;
            boolean ok = true;
            for(int i = 1; i < s.length(); i++){
                char c = s.charAt(i);
                int nextNum = Character.getNumericValue(c);
                if(Math.abs(nextNum - lastNum) != 2){
                    ok = false;
                    break;
                }
                sum += nextNum;
                lastNum = nextNum;
            }
            if(sum % 10 != 0) ok = false;
            System.out.println(ok ? "YES" : "NO");
        }
    }
}
