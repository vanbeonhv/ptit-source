import java.io.File;
import java.io.FileNotFoundException;
import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class KhachHang implements Comparable<KhachHang> {
    public static int N = 1;
    private String maKh, hoTen, maPhong, ngayDen, ngayDi;
    private Long soNgay;

    public KhachHang(String hoTen, String maPhong, String ngayDen, String ngayDi) throws ParseException {
        this.maKh = "KH" + String.format("%02d", N++);
        this.hoTen = hoTen;
        this.maPhong = maPhong;
        this.ngayDen = ngayDen;
        this.ngayDi = ngayDi;
        this.soNgay = getNgay(ngayDen, ngayDi);

    }

    public Long getSoNgay() {
        return soNgay;
    }

    private Long getNgay(String ngayDen, String ngayDi) throws ParseException {
        if (ngayDen.equals(ngayDi)) {
            return 0L;
        }
        SimpleDateFormat format = new SimpleDateFormat("dd/MM/yyyy");
        Date ngayDenDate = format.parse(ngayDen);
        Date ngayDiDate = format.parse(ngayDi);
        return (ngayDiDate.getTime() - ngayDenDate.getTime()) / (1000 * 60 * 60 * 24);
    }

    @Override
    public int compareTo(KhachHang khachHang) {
        return khachHang.getSoNgay().intValue() - this.soNgay.intValue();
    }

    @Override
    public String toString() {
        return maKh + " " + hoTen + " " + maPhong + " " + soNgay;
    }
}

public class J07046_Danh_Sach_Luu_Tru {
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner in = new Scanner(new File("KHACH.in"));
        int k = in.nextInt();
        in.nextLine();
        List<KhachHang> khachHangList = new ArrayList<>();
        while (k-- > 0) {
            KhachHang khachHang = new KhachHang(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine());
            khachHangList.add(khachHang);
        }

        Collections.sort(khachHangList);
        for (KhachHang khachHang : khachHangList) {
            System.out.println(khachHang);
        }

    }
}
