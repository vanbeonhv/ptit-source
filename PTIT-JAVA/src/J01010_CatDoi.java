import java.util.Scanner;

public class J01010_CatDoi {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int k = in.nextInt();
        while (k-- > 0) {
            String s = in.next();
            StringBuilder ans = new StringBuilder();
            boolean isExistNumber1 = false;
            boolean isValid = true;
            for (int i = 0; i < s.length(); i++) {
                char c = s.charAt(i);
                char j;
                if (c == '0' || c == '8' || c == '9') {
                    j = '0';
                } else if (c == '1') {
                    j = '1';
                } else {
                    j = '2';
                }

                if (j == '2') {
                    isValid = false;
                    break;
                }
                if (j == '1') isExistNumber1 = true;

                if (isExistNumber1) {
                    ans.append(j);
                }
            }
            if (isExistNumber1 && isValid) {
                System.out.println(ans);
            } else {
                System.out.println("INVALID");
            }
        }

        in.close();
    }
}
