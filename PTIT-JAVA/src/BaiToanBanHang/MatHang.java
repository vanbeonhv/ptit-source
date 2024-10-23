package BaiToanBanHang;

import java.text.ParseException;

public class MatHang {
    public static int count = 1;
    private String ma, mathang, donvi;
    private int somua, soban;

    public MatHang( String mathang, String donvi, int somua, int soban) throws ParseException {
        this.ma = "MH" + String.format("%03d", count++);
        this.mathang = mathang;
        this.donvi = donvi;
        this.somua = somua;
        this.soban = soban;
    }

    public String getMa(){
        return this.ma;
    }

}
