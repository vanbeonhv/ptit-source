/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07050_Sap_Xep_Mat_Hang;

import java.util.*;
import java.io.*;

/**
 *
 * @author nguye
 */
public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("MATHANG.in"));
        List<MatHang> matHangs = new ArrayList<>();
        int k = Integer.parseInt(in.nextLine());
        for (int i = 0; i < k; i++) {
            MatHang mh = new MatHang(in.nextLine(), in.nextLine(), Double.parseDouble(in.nextLine()), Double.parseDouble(in.nextLine()));
            matHangs.add(mh);
        }

        Collections.sort(matHangs);
        for (MatHang matHang : matHangs) {
            System.out.println(matHang);
        }
    }
}
