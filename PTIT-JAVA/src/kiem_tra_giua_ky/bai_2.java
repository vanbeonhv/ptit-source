package kiem_tra_giua_ky;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.TreeSet;

import static java.lang.Math.sqrt;

public class bai_2 {
    private static int MAX = 1000000;
    private static int[] ngyento = new int[MAX + 1];

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DAYSO.DAT"));
        ArrayList<Integer> arrayList = (ArrayList<Integer>) in.readObject();
        sangNguyenTo();

        TreeSet<Integer> treeSet = new TreeSet<>();

        for (Integer i : arrayList) {
            treeSet.add(i);
        }

        for (Integer i : treeSet) {
            if (ngyento[i] == 1 && i >= 100) {
                System.out.println(i);
            }
        }

    }

    public static void sangNguyenTo() {
        ngyento[0] = ngyento[1] = 0;
        for (int i = 2; i <= MAX; i++) {
            ngyento[i] = 1;
        }

        for (int i = 2; i <= sqrt(MAX); i++) {
            if (ngyento[i] == 1) {
                for (int j = i * i; j <= MAX; j += i) {
                    ngyento[j] = 0;
                }
            }
        }
    }

}
