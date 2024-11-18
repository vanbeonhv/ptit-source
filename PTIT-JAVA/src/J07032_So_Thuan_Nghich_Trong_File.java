import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;

public class J07032_So_Thuan_Nghich_Trong_File {
    public static final int N = (int) 1e6;

    public static boolean isValid(String s) {
        StringBuilder sb = new StringBuilder(s).reverse();
        if (!sb.toString().equals(s)) {
            return false;
        }

        if (s.length() % 2 == 0 || s.length() == 1) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            int x = s.charAt(i) - '0';
            if (x % 2 == 0) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));

        List<Integer> list1 = (ArrayList<Integer>) ois1.readObject();
        List<Integer> list2 = (ArrayList<Integer>) ois2.readObject();

//        List<Integer> list1 = new ArrayList<>();
//        list1.add(939);
//        list1.add(939);
//        list1.add(11311);
//
//        List<Integer> list2 = new ArrayList<>();
//        list2.add(11311);
//        list2.add(11311);
//        list2.add(11311);
//        list2.add(939);
//        list2.add(939);
//        list2.add(131);
//        list2.add(222);
//        list2.add(212);
//        list2.add(2);
//        list2.add(1);

        int[] result = new int[N + 1];
        Arrays.fill(result, 0);

        for (Integer i : list1) {
            if (isValid(i.toString()) && list2.contains(i)) {
                result[i]++;
            }
        }

        for (Integer i : list2) {
            if (isValid(i.toString()) && list1.contains(i)) {
                result[i]++;
            }
        }

        int cnt = 0;
        for (int i = 0; i <= N; i++) {
            if (result[i] > 0) {
                System.out.println(i + " " + result[i]);
                cnt++;
            }
            if (cnt == 10) {
                break;
            }
        }

    }

}
