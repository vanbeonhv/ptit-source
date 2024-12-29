/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07040_Liet_Ke_Theo_Thu_Tu_Xuat_Hien;

import java.util.*;
import java.io.*;

/**
 *
 * @author nguye
 */
public class J07040_Liet_Ke_Theo_Thu_Tu_Xuat_Hien {

    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("NHIPHAN.in"));
        List<String> nhiPhan = (ArrayList<String>) ois.readObject();

        TreeSet set = new TreeSet();
        for (String string : nhiPhan) {
            String[] words = string.toLowerCase().split("\\s+");
            set.addAll(Arrays.asList(words));
        }

        Scanner in = new Scanner(new File("VANBAN.in"));
        while (in.hasNext()) {
            String string = in.next().toLowerCase();
            if (set.contains(string)) {
                System.out.println(string);
                set.remove(string);
            }
        }

    }

}
