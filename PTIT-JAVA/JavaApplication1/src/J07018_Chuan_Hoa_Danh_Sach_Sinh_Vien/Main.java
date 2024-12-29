/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07018_Chuan_Hoa_Danh_Sach_Sinh_Vien;

import java.util.*;
import java.io.*;

/**
 *
 * @author nguye
 */
public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("SINHVIEN.in"));
        List<SinhVien> sinhViens = new ArrayList<>();
        int k = Integer.parseInt(in.nextLine());
        for (int i = 0; i < k; i++) {
            SinhVien sv = new SinhVien(in.nextLine().trim(), in.nextLine().trim(), in.nextLine().trim(), Double.parseDouble(in.nextLine().trim()));
            sinhViens.add(sv);
        }

        for (SinhVien sinhVien : sinhViens) {
            System.out.println(sinhVien);
        }
    }

}
