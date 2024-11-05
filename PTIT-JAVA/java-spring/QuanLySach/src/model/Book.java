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

    public Object[] toObject(){
        return new Object[] {id, tenSach, tacGia, chuyenNganh, soLuong};
    }
}
