
/*
Online Java - IDE, Code Editor, Compiler

Online Java is a quick and easy tool that helps you to build, compile, test your programs online.
*/
import java.util.Scanner;

public class Main
{
    public static Scanner in = new Scanner(System.in);
    public static void main(String[] args) {
        long mod = 1000000007;
        while(true){
            int a = in.nextInt();
            long b = in.nextLong();
            if(a == b && b == 0){
                break;
            }
            
            long result = 1;
            while(b-- > 0){
                result *= a % mod;
                result %= mod;
            }
            System.out.println(result);
        }
    }
}