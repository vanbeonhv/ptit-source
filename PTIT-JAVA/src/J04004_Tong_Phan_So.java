import java.util.Scanner;

class PhanSo4004 {
    long tu, mau;

    public PhanSo4004(long tu, long mau) {
        long gcd = getGcd(tu, mau);
        this.tu = tu / gcd;
        this.mau = mau / gcd;
    }

    private long getGcd(long a, long b) {
        if (a == 0) {
            return b;
        }
        return getGcd(b % a, a);
    }

    public PhanSo4004 Sum(PhanSo4004 ps) {
        long newTu = tu * ps.mau + mau * ps.tu;
        long newMau = mau * ps.mau;
        long gcd = getGcd(newTu, newMau);
        return new PhanSo4004(newTu / gcd, newMau / gcd);
    }

    public String toString() {
        return tu + "/" + mau;
    }

}

public class J04004_Tong_Phan_So {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        long tu1 = in.nextLong();
        long mau1 = in.nextLong();
        PhanSo4004 ps1 = new PhanSo4004(tu1, mau1);
        long tu2 = in.nextLong();
        long mau2 = in.nextLong();

        PhanSo4004 ps2 = new PhanSo4004(tu2, mau2);
        PhanSo4004 result = ps1.Sum(ps2);
        System.out.println(result);
    }

}
