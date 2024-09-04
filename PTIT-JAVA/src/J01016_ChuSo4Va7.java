import java.util.Scanner;

public class J01016_ChuSo4Va7 {
    public static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
         String s = in.next();
         int sum = 0;
         for(char c : s.toCharArray()){
             if(c == '4' || c == '7'){
                 sum++;
             }
         }

         if(sum == 4 || sum == 7){
             System.out.println("YES");
         } else{
             System.out.println("NO");
         }
    }
}
