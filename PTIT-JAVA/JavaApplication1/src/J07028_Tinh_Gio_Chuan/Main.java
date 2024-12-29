/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07028_Tinh_Gio_Chuan;

import java.util.*;
import java.io.*;

/**
 *
 * @author nguye
 */
public class Main {
    
    public static void main(String[] args) throws FileNotFoundException {
        Scanner inMh = new Scanner(new File("MONHOC.in"));
        List<MonHoc> monHocs = new ArrayList();
        int kMh = Integer.parseInt(inMh.nextLine());
        while (kMh-- > 0) {
            String[] words = inMh.nextLine().split("\\s+");
            MonHoc mh = new MonHoc(words[0], words[1]);
            monHocs.add(mh);
        }
        
        Scanner inGv = new Scanner(new File("GIANGVIEN.in"));
        List<GiangVien> giangViens = new ArrayList();
        
        int kGv = Integer.parseInt(inGv.nextLine());
        while (kGv-- > 0) {
            String s = inGv.nextLine().trim();
            String[] words = s.split("\\s");
            GiangVien gv = new GiangVien(words[0], s.substring(words[0].length() + 1));
            giangViens.add(gv);
        }
        
        Scanner inGc = new Scanner(new File("GIOCHUAN.in"));
        List<GioChuan> gioChuans = new ArrayList();
        
        int kGc = Integer.parseInt(inGc.nextLine());
        while (kGc-- > 0) {
            String[] words = inGc.nextLine().split("\\s+");
            GioChuan gc = new GioChuan(words[0], words[1], Double.parseDouble(words[2]));
            gioChuans.add(gc);
        }
        
        for (GiangVien giangVien : giangViens) {
            for (GioChuan gioChuan : gioChuans) {
                if (gioChuan.getMaGv().equals(giangVien.getMaGv())) {
                    giangVien.setGioChuan(gioChuan.getGioChuan());
                }
            }
            
            System.out.println(giangVien);
        }
        
    }
    
}
