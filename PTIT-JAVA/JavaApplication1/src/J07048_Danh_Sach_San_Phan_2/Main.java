/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07048_Danh_Sach_San_Phan_2;

import java.util.*;
import java.io.*;

/**
 *
 * @author nguye
 */
public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("SANPHAM.in"));
        List<SanPham> sanPhams = new ArrayList<>();
        int n = Integer.parseInt(in.nextLine());
        for (int i = 0; i < n; i++) {
            SanPham sp = new SanPham(in.nextLine().trim(), in.nextLine().trim(), Integer.parseInt(in.nextLine().trim()), Integer.parseInt(in.nextLine().trim()));
            sanPhams.add(sp);
        }
        
        Collections.sort(sanPhams);
        for (SanPham sanPham : sanPhams) {
            System.out.println(sanPham);
        }
    }
}
