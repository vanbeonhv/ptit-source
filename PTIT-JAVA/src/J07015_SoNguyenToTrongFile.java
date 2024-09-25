import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

public class J07015_SoNguyenToTrongFile {
    public static int MAX_INT = 10000;
    public static int prime[] = new int[MAX_INT];
    public static void sangNguyenTo(){
        for(int i = 2; i < MAX_INT; i++) {
            prime[i] = 1;
        }

        for(int i = 2; i <= Math.sqrt(MAX_INT); i++){
            if(prime[i] == 0) continue;
            for(int j = i * i; j < MAX_INT; j += i){
                prime[j] = 0;
            }
        }
    }

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
        ArrayList<Integer> arr = (ArrayList<Integer>) in.readObject();
        int result[] = new int[MAX_INT];
        sangNguyenTo();
        for(Integer num : arr){
            if(prime[num] == 1){
                result[num]++;
            }
        }

        for(int i = 0; i < MAX_INT; i++){
            if(result[i] > 0){
                System.out.printf(i + " " + result[i] + "\n");
            }
        }

    }
}
