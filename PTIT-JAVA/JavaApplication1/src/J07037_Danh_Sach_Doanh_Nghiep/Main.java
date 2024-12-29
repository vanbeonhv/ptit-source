/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07037_Danh_Sach_Doanh_Nghiep;

import java.io.*;
import java.util.*;

/**
 *
 * @author nguye
 */
public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DN.in"));
        int k = in.nextInt();
        in.nextLine();
        List<DoanhNghiep> doanhNghieps = new ArrayList<>();
        for (int i = 0; i < k; i++) {
            DoanhNghiep doanhNghiep = new DoanhNghiep(in.nextLine().trim(), in.nextLine().trim(), in.nextLine().trim());
            doanhNghieps.add(doanhNghiep);
        }

        Collections.sort(doanhNghieps);

        for (DoanhNghiep doanhNghiep : doanhNghieps) {
            System.out.println(doanhNghiep);
        }

    }
}
