/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07028_Tinh_Gio_Chuan;

/**
 *
 * @author nguye
 */
public class GioChuan {

    private String maGv, maMh;
    private Double gioChuan;

    public GioChuan(String maGv, String maMh, Double gioChuan) {
        this.maGv = maGv;
        this.maMh = maMh;
        this.gioChuan = gioChuan;
    }

    public String getMaGv() {
        return maGv;
    }

    public String getMaMh() {
        return maMh;
    }

    public Double getGioChuan() {
        return gioChuan;
    }

}
