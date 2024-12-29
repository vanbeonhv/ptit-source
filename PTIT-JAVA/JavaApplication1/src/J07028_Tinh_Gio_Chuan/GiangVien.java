/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07028_Tinh_Gio_Chuan;

/**
 *
 * @author nguye
 */
public class GiangVien {

    private String maGv, tenGv;
    private Double gioChuan = 0.0;

    public GiangVien(String maGv, String tenGv) {
        this.maGv = maGv;
        this.tenGv = tenGv;
    }

    public String getMaGv() {
        return maGv;
    }

    public void setGioChuan(Double gioChuan) {
        this.gioChuan += gioChuan;
    }

    @Override
    public String toString() {
        return tenGv + " " + String.format("%.2f", gioChuan);
    }

}
