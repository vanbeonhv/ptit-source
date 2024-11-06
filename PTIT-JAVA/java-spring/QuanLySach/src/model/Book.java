package model;


import java.io.Serializable;

/**
 *
 * @author nguye
 */
public class Book implements Serializable{
    private static int currentId = 1;
    private String tenSach, tacGia, chuyenNganh;
    private int id, soLuong;

    public Book() {
    }

    public Book(String tenSach, String tacGia, String chuyenNganh, int soLuong) {
        this.id = currentId++;
        this.tenSach = tenSach;
        this.tacGia = tacGia;
        this.chuyenNganh = chuyenNganh;
        this.soLuong = soLuong;
    }

    public static int getCurrentId() {
        return currentId;
    }

    public static void setCurrentId(int currentId) {
        Book.currentId = currentId;
    }

    public String getTenSach() {
        return tenSach;
    }

    public void setTenSach(String tenSach) {
        this.tenSach = tenSach;
    }

    public String getTacGia() {
        return tacGia;
    }

    public void setTacGia(String tacGia) {
        this.tacGia = tacGia;
    }

    public String getChuyenNganh() {
        return chuyenNganh;
    }

    public void setChuyenNganh(String chuyenNganh) {
        this.chuyenNganh = chuyenNganh;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public int getSoLuong() {
        return soLuong;
    }

    public void setSoLuong(int soLuong) {
        this.soLuong = soLuong;
    }
    
    

    public Object[] toObject(){
        return new Object[] {id, tenSach, tacGia, chuyenNganh, soLuong};
    }

    @Override
    public String toString() {
        return "Book{" + "tenSach=" + tenSach + ", tacGia=" + tacGia + ", chuyenNganh=" + chuyenNganh + ", id=" + id + ", soLuong=" + soLuong + '}';
    }
    
    
}
