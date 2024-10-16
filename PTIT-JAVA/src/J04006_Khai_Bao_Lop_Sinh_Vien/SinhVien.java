package J04006_Khai_Bao_Lop_Sinh_Vien;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class SinhVien {
    private String maSv, hoTen, lop, ngaySinh;
    private double gpa;

    public SinhVien() {
        this.maSv = "B20DCCN001";
        this.hoTen = "";
        this.lop = "";
        this.ngaySinh = "";
        this.gpa = 0;
    }

    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    public void setLop(String lop) {
        this.lop = lop;
    }

    public void setNgaySinh(String ngaySinh) {
        this.ngaySinh = chanHoaNgay(ngaySinh);
    }

    public void setGpa(double gpa) {
        this.gpa = gpa;
    }


    private String chanHoaNgay(String ngaySinh) {
        SimpleDateFormat formatter = new SimpleDateFormat("dd/mm/yyyy");
        Date date = null;
        try {
            date = formatter.parse(ngaySinh);
        } catch (ParseException e) {
            throw new RuntimeException(e);
        }
        return formatter.format(date);
    }

    public String toString() {
        return maSv + " " + hoTen + " " + lop + " " + ngaySinh + " " + String.format("%.2f", gpa);
    }

}
