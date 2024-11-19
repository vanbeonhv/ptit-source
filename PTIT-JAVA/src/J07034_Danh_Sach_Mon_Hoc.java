import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

class MonHoc implements Comparable<MonHoc> {
    private String maMon, tenMon;
    private int soTinChi;

    public MonHoc(String maMon, String tenMon, int soTinChi) {
        this.maMon = maMon;
        this.tenMon = tenMon;
        this.soTinChi = soTinChi;
    }

    public String getTenMon() {
        return tenMon;
    }

    @Override
    public int compareTo(MonHoc monHoc) {
        return tenMon.compareTo(monHoc.getTenMon());
    }

    @Override
    public String toString() {
        return maMon + " " + tenMon + " " + soTinChi;
    }
}

public class J07034_Danh_Sach_Mon_Hoc {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("MONHOC.in"));
        int n = in.nextInt();
        in.nextLine();
        List<MonHoc> monHocList = new ArrayList<>();
        while (n-- > 0) {
            MonHoc monHoc = new MonHoc(in.nextLine(), in.nextLine(), Integer.parseInt(in.nextLine()));
            monHocList.add(monHoc);
        }

        Collections.sort(monHocList);
        for (MonHoc monHoc : monHocList) {
            System.out.println(monHoc);
        }
    }

}

