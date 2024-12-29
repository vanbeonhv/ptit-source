/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07045_Loai_Phong;

/**
 *
 * @author nguye
 */
public class LoaiPhong implements Comparable<LoaiPhong> {

    private String id, ten;
    private int dongia;
    private double phiphucvu;

    public LoaiPhong(String line) {
        String[] words = line.trim().split("\\s+");
        this.id = words[0];
        this.ten = words[1];
        this.dongia = Integer.parseInt(words[2]);
        this.phiphucvu = Double.parseDouble(words[3]);
    }

    public String getTen() {
        return ten;
    }

    @Override
    public String toString() {
        return id + " " + ten + " " + dongia + " " + phiphucvu;
    }

    @Override
    public int compareTo(LoaiPhong o) {
        return ten.compareTo(o.getTen());
    }

}
