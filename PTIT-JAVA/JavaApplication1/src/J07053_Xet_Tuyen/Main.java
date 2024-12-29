/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07053_Xet_Tuyen;

import java.io.*;
import java.util.*;

/**
 *
 * @author nguye
 */
public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("XETTUYEN.in"));
        int k = Integer.parseInt(in.nextLine());
        while (k-- > 0) {
            NhanVien nv = new NhanVien(in.nextLine().trim(),
                    in.nextLine().trim(),
                    Double.parseDouble(in.nextLine().trim()),
                    Double.parseDouble(in.nextLine().trim())
            );
            System.out.println(nv);
        }
    }
}
