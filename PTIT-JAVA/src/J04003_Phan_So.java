import java.util.Scanner;

class PhanSo {
    long tu, mau, gcd;


    public PhanSo(long tu, long mau) {
        this.tu = tu;
        this.mau = mau;
        this.gcd = getGcd(tu, mau);
    }

    private long getGcd(long a, long b) {
        if (a == 0) {
            return b;
        }
        return getGcd(b % a, a);
    }

    @Override
    public String toString() {
        return tu/gcd + "/" + mau/gcd;
    }
}

public class J04003_Phan_So {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long tu = in.nextLong();
        long mau = in.nextLong();
        PhanSo phanSo = new PhanSo(tu, mau);
        System.out.println(phanSo);
    }
}
