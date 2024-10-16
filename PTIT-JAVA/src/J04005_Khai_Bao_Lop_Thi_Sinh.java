import java.util.Scanner;

class ThiSinh {
    String hoTen, ngaySinh;
    double tong;

    public ThiSinh(String hoTen, String ngaySinh, double diem1, double diem2, double diem3) {
        this.hoTen = hoTen;
        this.ngaySinh = ngaySinh;
        this.tong = diem1 + diem2 + diem3;
    }

    public String toString() {
        return hoTen + " " + ngaySinh + " " + tong;
    }
}

public class J04005_Khai_Bao_Lop_Thi_Sinh {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String hoTen = in.nextLine().trim();
        String ngaySinh = in.nextLine();
        double diem1 = in.nextDouble();
        double diem2 = in.nextDouble();
        double diem3 = in.nextDouble();
        ThiSinh thiSinh = new ThiSinh(hoTen, ngaySinh, diem1, diem2, diem3);
        System.out.println(thiSinh);

    }
}
