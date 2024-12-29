/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07037_Danh_Sach_Doanh_Nghiep;

/**
 *
 * @author nguye
 */
public class DoanhNghiep implements Comparable<DoanhNghiep> {

    private String ma, ten, soLuong;

    public DoanhNghiep(String ma, String ten, String soLuong) {
        this.ma = ma;
        this.ten = ten;
        this.soLuong = soLuong;
    }

    public String getMa() {
        return ma;
    }

    @Override
    public int compareTo(DoanhNghiep o) {
        return ma.compareTo(o.getMa());
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + soLuong;
    }

}
