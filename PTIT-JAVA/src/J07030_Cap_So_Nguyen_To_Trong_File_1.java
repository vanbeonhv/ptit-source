import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;

public class J07030_Cap_So_Nguyen_To_Trong_File_1 {
    public static int N = (int)1e6;
    public static int[] prime = new int[N];

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        sang();
        ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        List<Integer> list1 = (ArrayList<Integer>)ois1.readObject();
        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        List<Integer> list2 = (ArrayList<Integer>)ois2.readObject();

        List<Integer> result = new ArrayList<>();

        TreeSet<Integer> ts1 = new TreeSet<>(list1);
        TreeSet<Integer> ts2 = new TreeSet<>(list2);

        for (int n : ts1){
            int m = N - n;
            if(prime[n] == 1 && prime[m] == 1 && 2*n < 1e6 && ts2.contains(m)){
                result.add(n);
            }
        }

        for (int i : result){
            int m = N - i;
            System.out.println(i + " " + m);
        }

    }

    public static void sang(){
        Arrays.fill(prime, 1);
        prime[0] = prime[1] = 0;
        for(int i = 2; i <= Math.sqrt(N); i++){
            if(prime[i] == 1){
                for(int j = i * i; j < N; j += i){
                    prime[j] = 0;
                }
            }
        }
    }
}
