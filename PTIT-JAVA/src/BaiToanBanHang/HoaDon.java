package BaiToanBanHang;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class HoaDon {
    public static int khCount = 1;
    private String mkh, mhd;
    private int soluong;

    public HoaDon(String mkh, String mhd, int soluong) throws ParseException {
        this.mkh = mkh;
        this.mhd = mhd;
        this.soluong = soluong;
    }

    public String getMkh(){
        return this.mkh;
    }
    public String getMhd(){
        return this.mhd;
    }

    public int getSoluong(){
        return this.soluong;
    }}
