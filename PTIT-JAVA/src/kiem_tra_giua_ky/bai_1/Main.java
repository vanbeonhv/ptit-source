package bai_1;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DANHSACH.in"));
        ArrayList<SinhVien> listSinhVien = new ArrayList<>();
        while (in.hasNextLine()) {
            SinhVien sinhVien = new SinhVien(in.nextLine().trim(), in.nextLine().trim(), in.nextLine().trim(), in.nextLine().trim(), in.nextLine().trim());
            listSinhVien.add(sinhVien);
        }

        Collections.sort(listSinhVien);
        for (SinhVien sv : listSinhVien){
            System.out.println(sv);
        }
    }
}
