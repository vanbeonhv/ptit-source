import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

public class J07029_So_Nguyen_To_Lon_Nhat_Trong_File {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream objectInputStream = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer> arrayList = (ArrayList<Integer>)objectInputStream.readObject();

    }
}
