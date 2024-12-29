/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07027_Quan_Ly_Bai_Tap_Nhom;

import java.util.*;
import java.io.*;

/**
 *
 * @author nguye
 */
public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner insv = new Scanner(new File("SINHVIEN.in"));
        List<SinhVien> sinhViens = new ArrayList<>();

        int ksv = Integer.parseInt(insv.nextLine());
        for (int i = 0; i < ksv; i++) {
            SinhVien sv = new SinhVien(insv.nextLine(), insv.nextLine(), insv.nextLine());
            sinhViens.add(sv);
        }

        Scanner inbt = new Scanner(new File("BAITAP.in"));
        List<String> bts = new ArrayList<>();
        int kbt = Integer.parseInt(inbt.nextLine());
        for (int i = 0; i < kbt; i++) {
            bts.add(inbt.nextLine());
        }

        List<Nhom> nhoms = new ArrayList<Nhom>();
        Scanner innhom = new Scanner(new File("NHOM.in"));
        while(innhom.hasNextLine()){
            String[] words = innhom.nextLine().split("\\s+");
            Nhom n = new Nhom(words[0], Integer.parseInt(words[1]));
            nhoms.add(n);
        }
        
        for (SinhVien sinhVien : sinhViens) {
            for (Nhom nhom : nhoms) {
                if(nhom.getMsv().equals(sinhVien.getMasv())){
                    sinhVien.setThutu(nhom.getStt());
                    String detai = bts.get(nhom.getStt() - 1);
                    sinhVien.setBaitapnhom(detai);
                }
            }
            
        }
        
        Collections.sort(sinhViens);
        for (SinhVien sinhVien : sinhViens) {
            System.out.println(sinhVien);
        }

    }

}
