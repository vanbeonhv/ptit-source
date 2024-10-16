package bai_1;

import java.util.Objects;

public class SinhVien implements Comparable<SinhVien> {
    private String msv, hoten, lop, email, sdt;

    public SinhVien(String msv, String hoten, String lop, String email, String sdt) {
        this.msv = msv;
        this.hoten = hoten;
        this.lop = lop;
        this.email = email;
        this.sdt = "0" + sdt;
    }

    public String getLop() {
        return lop;
    }

    public String getMsv() {
        return msv;
    }


    @Override
    public String toString() {
        return msv + " " + hoten + " " + lop + " " + email + " " + sdt;
    }

    @Override
    public int compareTo(SinhVien o) {
        if (Objects.equals(lop, o.lop)) {
            return msv.compareTo(o.getMsv());
        }
        return lop.compareTo(o.getLop());
    }
}
