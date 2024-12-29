/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07053_Xet_Tuyen;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author nguye
 */
public class NhanVien {

    private static int N = 1;
    private String ma, hoten, xeploai;
    private int tuoi, diemTb;

    public NhanVien(String hoten, String ngaysinh, Double diemlt, Double diemth) {
        this.ma = "PH" + String.format("%02d", N++);
        this.hoten = chuanHoa(hoten);
        this.tuoi = tinhTuoi(ngaysinh);
        this.diemTb = tinhDiem(diemlt, diemth);
        this.xeploai = tinhXl(diemTb);
    }

    public String chuanHoa(String ten) {
        String[] words = ten.split("\\s+");
        StringBuilder sb = new StringBuilder();
        for (String word : words) {
            sb.append(Character.toUpperCase(word.charAt(0)))
                    .append(word.substring(1).toLowerCase())
                    .append(" ");
        }
        return sb.toString().trim();
    }

    public int tinhTuoi(String ngaysinh) {
        try {
            SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");
            Date date = formatter.parse(ngaysinh);
            int year = date.getYear();
            return 2021 - (year + 1900);

        } catch (ParseException ex) {
            return 0;
        }

    }

    public int tinhDiem(Double diemlt, Double diemth) {
        Double diemthuong = 0.0;
        if (diemlt >= 8 && diemth >= 8) {
            diemthuong = 1.0;
        } else if (diemlt >= 7.5 && diemth >= 7.5) {
            diemthuong = 0.5;
        }

        int diem = (int) Math.round(diemthuong + (diemth + diemlt) / 2);

        return diem > 10 ? 10 : diem;
    }

    public String tinhXl(int diemTb) {
        if (diemTb < 5) {
            return "Truot";
        } else if (diemTb <= 6) {
            return "Trung binh";
        } else if (diemTb == 7) {
            return "Kha";
        } else if (diemTb == 8) {
            return "Gioi";
        } else {
            return "Xuat sac";
        }
    }

    @Override
    public String toString() {
        return ma + " " + hoten + " " + tuoi + " " + diemTb + " " + xeploai;
    }

}
