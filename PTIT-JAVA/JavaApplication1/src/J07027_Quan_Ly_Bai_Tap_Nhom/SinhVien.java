/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07027_Quan_Ly_Bai_Tap_Nhom;

/**
 *
 * @author nguye
 */
public class SinhVien implements Comparable<SinhVien>{
    private String masv, hoten, sdt, baitapnhom;
    private int thutu;

    public SinhVien(String masv, String hoten, String std) {
        this.masv = masv;
        this.hoten = hoten;
        this.sdt = std;
    }

    public String getMasv() {
        return masv;
    }

    public void setThutu(int thutu) {
        this.thutu = thutu;
    }

    public void setBaitapnhom(String baitapnhom) {
        this.baitapnhom = baitapnhom;
    }
    
    

    
    
    @Override
    public int compareTo(SinhVien o) {
        return masv.compareTo(o.getMasv());
    }

    @Override
    public String toString() {
         return masv + " " + hoten + " " + sdt + " " + thutu + " " + baitapnhom;
    }
     
    
}
