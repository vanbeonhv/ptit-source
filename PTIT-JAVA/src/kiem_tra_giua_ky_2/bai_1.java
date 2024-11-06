package kiem_tra_giua_ky_2;

import java.util.*;

public class bai_1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        Set<Integer> A = new HashSet<>();
        Set<Integer> B = new HashSet<>();

        List<Integer> AGiaoB = new ArrayList<>();
        List<Integer> ATruB = new ArrayList<>();
        List<Integer> BTruA = new ArrayList<>();


        for (int i = 0; i < n; i++) {
            A.add(in.nextInt());
        }


        for (int i = 0; i < m; i++) {
            B.add(in.nextInt());
        }

        for(Integer i : A) {
            if(B.contains(i)) {
                AGiaoB.add(i);
            }
            else {
                ATruB.add(i);
            }
        }

        for(Integer i : B) {
            if(!A.contains(i)) {
                BTruA.add(i);
            }
        }


        Collections.sort(AGiaoB);
        Collections.sort(ATruB);
        Collections.sort(BTruA);

        for(Integer i : AGiaoB) {
            System.out.print(i);
            System.out.print(" ");
        }
        System.out.println();

        for(Integer i : ATruB) {
            System.out.print(i);
            System.out.print(" ");
        }
        System.out.println();

        for(Integer i : BTruA) {
            System.out.print(i);
            System.out.print(" ");
        }

    }
}
