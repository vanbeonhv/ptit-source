/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07018_Chuan_Hoa_Danh_Sach_Sinh_Vien;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author nguye
 */
public class SinhVien {

    private static int N = 1;
    private String masv, hoten, ngaysinh, lop;
    private Double gpa;

    public SinhVien(String hoten, String lop, String ngaysinh, Double gpa) {
this.masv = "B20DCCN" + String.format("%03d", N++);
        this.hoten = chuanHoaTen(hoten);
        this.ngaysinh = chuanHoaNgay(ngaysinh);
        this.lop = lop;
        this.gpa = gpa;
    }

    private String chuanHoaTen(String name) {
        String[] words = name.split("\\s+");
        StringBuilder sb = new StringBuilder();
        for (String word : words) {
            sb.append(Character.toUpperCase(word.charAt(0)))
                    .append(word.substring(1).toLowerCase())
                    .append(" ");
        }
        return sb.toString().trim();
    }

    private String chuanHoaNgay(String ngay) {
        try {
            SimpleDateFormat formatter = new SimpleDateFormat("dd/mm/yyyy");
            Date date = formatter.parse(ngay);
            return formatter.format(date);
        } catch (ParseException ex) {
            return "";
        }
    }

    @Override
    public String toString() {
        return masv + " " + hoten + " " + lop + " " + ngaysinh + " " + String.format("%.2f", gpa);
    }

}
