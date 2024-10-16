package J07010_DanhSachSinhVien;


import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class SinhVien implements Comparable<SinhVien> {
    private static int count = 1;
    private String masv, hoten, ngaysinh, lop;
    private double gpa;

    public SinhVien(String hoten, String lop, String ngaysinh, double gpa) {
        this.masv = getMasv();
        this.hoten = hoten;
        this.ngaysinh = chuanHoaNgay(ngaysinh);
        this.lop = lop;
        this.gpa = gpa;
    }

    public String getHoten() {
        return hoten;
    }

    private String getMasv() {
        String newMasv = "B20DCCN" + String.format("%03d", count);
        count++;
        return newMasv;
    }

    private String chuanHoaNgay(String ngaysinh) {
        SimpleDateFormat formatter = new SimpleDateFormat("dd/mm/yyyy");
        Date newNgaysinh = null;
        try {
            newNgaysinh = formatter.parse(ngaysinh);
        } catch (ParseException e) {
            throw new RuntimeException(e);
        }
        return formatter.format(newNgaysinh);
    }

    public String toString() {
        return masv + " " + hoten + " " + lop + " " + ngaysinh + " " + String.format("%.2f", gpa);
    }

    @Override
    public int compareTo(SinhVien sv) {
        return hoten.compareTo(sv.getHoten());
    }

}
