/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07048_Danh_Sach_San_Phan_2;

/**
 *
 * @author nguye
 */
public class SanPham implements Comparable<SanPham>{
    private String ma, ten;
    private Integer gia, baohanh;

    public SanPham(String ma, String ten, Integer gia, Integer baohanh) {
        this.ma = ma;
        this.ten = ten;
        this.gia = gia;
        this.baohanh = baohanh;
    }

    public String getMa() {
        return ma;
    }

    public Integer getGia() {
        return gia;
    }

    
    
    @Override
    public int compareTo(SanPham o) {
        if(gia.equals(o.getGia())){
            return ma.compareTo(o.getMa());
        }
        return o.getGia().compareTo(gia);
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + gia + " " + baohanh;
    }
    
    
    
    
}
