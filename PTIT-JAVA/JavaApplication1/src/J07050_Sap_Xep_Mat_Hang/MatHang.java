/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07050_Sap_Xep_Mat_Hang;

/**
 *
 * @author nguye
 */
public class MatHang implements Comparable<MatHang> {

    private static int N = 1;
    private String ma, ten, nhom;
    private double giaMua, giaBan, loiNhuan;

    public MatHang(String ten, String nhom, double giaMua, double giaBan) {
        this.ma = "MH" + String.format("%02d", N++);
        this.ten = ten;
        this.nhom = nhom;
        this.giaMua = giaMua;
        this.giaBan = giaBan;
        this.loiNhuan = giaBan - giaMua;
    }

    public double getLoiNhuan() {
        return loiNhuan;
    }

    
    @Override
    public int compareTo(MatHang o) {
        return Double.compare(o.getLoiNhuan(),loiNhuan);
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + nhom + " " + String.format("%.2f", loiNhuan);
    }
    
    

}
