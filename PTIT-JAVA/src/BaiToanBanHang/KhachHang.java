package BaiToanBanHang;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class KhachHang {
    public static int khCount = 1;
    private String mkh, ten, gioitinh, ngaysinh, diachi;

    public KhachHang(String ten, String gioitinh, String ngaysinh, String diachi) throws ParseException {
        this.mkh = "KH" + String.format("%03d", khCount++);
        this.ten = ten;
        this.gioitinh = gioitinh;
        this.ngaysinh = chuanHoaNgay(ngaysinh);
        this.diachi = diachi;
    }

    public String getMkh(){
        return this.mkh;
    }

    private String chuanHoaNgay(String date) throws ParseException {
        SimpleDateFormat format = new SimpleDateFormat("dd/mm/yyyy");
        Date newDate = format.parse(date);
        return format.format(newDate);
    }

}
