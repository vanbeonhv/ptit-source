import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

class NhanVien4007 {
    private static int COUNT = 1;
    private String id, hoten, gioitinh, ngaysinh, diachi, mst, ngayky;

    public NhanVien4007(String hoten, String gioitinh, String ngaysinh, String diachi, String mst, String ngayky) throws ParseException {
        this.id = String.format("%05d", COUNT++);
        this.hoten = hoten;
        this.gioitinh = gioitinh;
        this.ngaysinh = chuanHoa(ngaysinh);
        this.diachi = diachi;
        this.mst = mst;
        this.ngayky = chuanHoa(ngayky);
    }

    private String chuanHoa(String dateStr) throws ParseException {
        SimpleDateFormat formatter = new SimpleDateFormat("dd/mm/yyyy");
        Date date = formatter.parse(dateStr);
        return formatter.format(date);
    }

    @Override
    public String toString() {
        return id + " " + hoten + " " + gioitinh + " " + ngaysinh + " " + diachi + " " + mst + " " + ngayky;
    }
}


public class J04007_Khai_Bao_Lop_Nhan_Vien {


    public static void main(String[] args) throws ParseException {
        Scanner in = new Scanner(System.in);
        NhanVien4007 nhanVien4007 = new NhanVien4007(in.nextLine().trim(), in.nextLine().trim(), in.nextLine().trim(), in.nextLine().trim(), in.nextLine().trim(), in.nextLine().trim());
        System.out.println(nhanVien4007);
    }
}
