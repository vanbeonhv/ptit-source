import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.TreeMap;
import java.util.TreeSet;

public class J07032_So_Thuan_Nghich_Trong_File {
    public static boolean isValid(int n) {
        String s = String.valueOf(n);
        if(s.length() % 2 == 0 || s.length() == 1) {
            return false;
        }
        StringBuilder sb = new StringBuilder();
        for (int i = s.length() - 1; i >= 0 ; i--) {
            int j = Character.getNumericValue(s.charAt(i));
            if(j % 2 == 0){
                return false;
            }
            sb.append(s.charAt(i));
        }

        return sb.toString().equals(s);
    }

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));

        List<Integer> list1 = (ArrayList<Integer>) ois1.readObject();
        List<Integer> list2 = (ArrayList<Integer>) ois2.readObject();

        TreeMap<Integer, Integer> treeMap = new TreeMap<>();
        for (int i: list1){
            treeMap.
        }




    }

}
