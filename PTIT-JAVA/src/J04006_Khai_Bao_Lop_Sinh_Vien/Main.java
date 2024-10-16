package J04006_Khai_Bao_Lop_Sinh_Vien;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        SinhVien sinhVien = new SinhVien();
        sinhVien.setHoTen(in.nextLine().trim());
        sinhVien.setLop(in.nextLine().trim());
        sinhVien.setNgaySinh(in.nextLine().trim());
        sinhVien.setGpa(Double.parseDouble(in.nextLine()));
        System.out.println(sinhVien);
    }
}
