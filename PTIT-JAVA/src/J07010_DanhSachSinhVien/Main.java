package J07010_DanhSachSinhVien;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("SV.in"));
        int k = Integer.parseInt(in.nextLine());
        SinhVien[] listSinhVien = new SinhVien[k];
        for (int i = 0; i < listSinhVien.length; i++) {
            listSinhVien[i] = new SinhVien(in.nextLine().trim(), in.nextLine().trim(), in.nextLine().trim(), Double.parseDouble(in.nextLine().trim()));
        }

//        Arrays.sort(listSinhVien);
        for (SinhVien sv : listSinhVien) {
            System.out.println(sv);
        }
    }
}
