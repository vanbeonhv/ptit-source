/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07051_Tinh_Tien_Phong;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author nguye
 */
public class KhanhHang implements Comparable<KhanhHang> {

    private static int N = 1;
    private String ma, ten, soPhong, ngayNhan, ngayTra;
    private Long tienDv, soNgayO, tongTien;

    public KhanhHang(String ten, String soPhong, String ngayNhan, String ngayTra, Long tienDv) {
        this.ma = "KH" + String.format("%02d", N++);
        this.ten = chuanHoaTen(ten);
        this.soPhong = soPhong;
        this.ngayNhan = ngayNhan;
        this.ngayTra = ngayTra;
        this.tienDv = tienDv;
        this.soNgayO = (tinhNgay(ngayTra) - tinhNgay(ngayNhan)) / (1000 * 60 * 60 * 24) + 1;
        this.tongTien = tinhTien(tienDv, soNgayO, soPhong);
    }

    public String chuanHoaTen(String name) {
        String[] words = name.split("\\s+");
        StringBuilder sb = new StringBuilder();
        for (String word : words) {
            sb.append(Character.toUpperCase(word.charAt(0)))
                    .append(word.substring(1).toLowerCase())
                    .append(" ");
        }
        return sb.toString().trim();
    }

    public long tinhNgay(String ngay) {
        try {
            SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");
            Date date = formatter.parse(ngay);
            return date.getTime();
        } catch (ParseException ex) {
            return 0;
        }

    }

    public long tinhTien(long tienDv, long soNgayO, String soPhong) {
        Character c = soPhong.charAt(0);
        long tien;
        if (c == '1') {
            tien = 25;
        } else if (c == '2') {
            tien = 34;
        } else if (c == '3') {
            tien = 50;
        } else {
            tien = 80;
        }
        return tienDv + tien * soNgayO;
    }

    public Long getTongTien() {
        return tongTien;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + soPhong + " " + soNgayO + " " + tongTien;
    }

    @Override
    public int compareTo(KhanhHang o) {
        return o.getTongTien().compareTo(tongTien);
    }

}
