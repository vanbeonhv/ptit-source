/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07051_Tinh_Tien_Phong;

import java.io.*;
import java.util.*;

/**
 *
 * @author nguye
 */
public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("KHACHHANG.in"));
        List<KhanhHang> khanhHangs = new ArrayList();

        int k = Integer.parseInt(in.nextLine());
        while (k-- > 0) {
            KhanhHang kh = new KhanhHang(
                    in.nextLine().trim(),
                    in.nextLine().trim(),
                    in.nextLine().trim(),
                    in.nextLine().trim(),
                    Long.parseLong(in.nextLine().trim()));
            khanhHangs.add(kh);
        }
        
        Collections.sort(khanhHangs);
        for (KhanhHang khanhHang : khanhHangs) {
            System.out.println(khanhHang);
        }
    }
}
