package kiem_tra_giua_ky;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class bai_3 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("VANBAN.in"));
        var sb = new StringBuilder();
        while (in.hasNextLine()) {
            sb.append(in.nextLine().trim());
        }

        var set = new HashSet<>();
        ArrayList<String> arrayList = new ArrayList<>();
        String[] list = sb.toString().split("\\s++");
        for (String s : list) {
            if (isNumber(s) && isValid(s)) {
                if (!set.contains(s)) {
                    arrayList.add(s);
                }
                set.add(s);
            }
        }

        Collections.sort(arrayList);
        for (String s : arrayList) {
            System.out.println(s);
        }


    }

    public static boolean isNumber(String s) {
        boolean isOk = false;
        for (char c : s.toCharArray()) {
            if (Character.isDigit(c)) {
                isOk = true;
                break;
            }
        }
        return isOk;
    }

    public static boolean isValid(String s) {
        boolean isOk = true;
        for (char c : s.toCharArray()) {
            if (c == '.' || c == ',' || c == '!' || c == '?' || c == ':') {
                isOk = false;
                break;
            }
        }
        return isOk;
    }
}
