package BaiToanBanHang;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner in = new Scanner(new File("KH.in"));
        int k = Integer.parseInt(in.nextLine());
        Map<String, KhachHang> khachHangs = new HashMap<>();
        while (k-- > 0) {
            KhachHang kh = new KhachHang(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine());
            khachHangs.put(kh.getMkh(), kh);
        }

        Scanner in2 = new Scanner(new File("MH.in"));
        int k2 = Integer.parseInt(in2.nextLine());
        Map<String, MatHang> matHangs = new HashMap<>();
        while (k2-- > 0) {
            MatHang mh = new MatHang(in2.nextLine(), in2.nextLine(), Integer.parseInt(in2.nextLine()), Integer.parseInt(in2.nextLine()));
            matHangs.put(mh.getMa(), mh);
        }


        Scanner int3 = new Scanner(new File("HD.in"));
        int k3 = Integer.parseInt(int3.nextLine());
        ArrayList<HoaDon> hoaDons = new ArrayList<>();
        while (k3-- > 0) {
            HoaDon hoaDon = new HoaDon(int3.next(), int3.next(), int3.nextInt());
            hoaDons.add(hoaDon);
        }

        for (HoaDon hoaDon : hoaDons) {
            String mkh = hoaDon.getMkh();
            KhachHang kh = khachHangs.get(mkh);
            String mh = hoaDon.getMhd();
            MatHang matHang = matHangs.get(mh);

        }


    }
}
