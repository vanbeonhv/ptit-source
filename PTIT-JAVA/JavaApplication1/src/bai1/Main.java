/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai1;

import java.util.*;

/**
 *
 * @author vanbeonhv
 */
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        in.nextLine();

        String[] s1 = in.nextLine().trim().split("\\s++");
        List<Integer> list = new ArrayList<>();
        for (String string : s1) {
            int i = Integer.parseInt(string);
            list.add(i);
        }

        TreeSet<Integer> A = new TreeSet<>();
        A.addAll(list);

        String[] s2 = in.nextLine().trim().split("\\s++");
        TreeSet<Integer> B = new TreeSet<>();
        for (String string : s2) {
            B.add(Integer.parseInt(string));
        }

        TreeSet<Integer> intersect = new TreeSet<>(A);

        intersect.retainAll(B);
        for (Integer integer : intersect) {
            System.out.print(integer);
            System.out.print(" ");
        }
        System.out.println();

        TreeSet<Integer> C = new TreeSet<>(A);
        C.removeAll(B);
        for (Integer integer : C) {
            System.out.print(integer);
            System.out.print(" ");
        }
        System.out.println();

        B.removeAll(A);
        for (Integer integer : B) {
            System.out.print(integer);
            System.out.print(" ");
        }
    }

}
