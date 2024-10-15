import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

class SinhVien implements Comparable<SinhVien> {
    private String id, name, grade, email;

    public SinhVien(String id, String name, String grade, String email) {
        this.id = id;
        this.name = name;
        this.grade = grade;
        this.email = email;
        standardize();
    }

    public String getId() {
        return id;
    }

    private void standardize() {
        String[] list = name.split("\\s+");
        StringBuilder newName = new StringBuilder();
        for (int i = 0; i < list.length; i++) {
            newName.append(list[i].substring(0, 1).toUpperCase())
                    .append(list[i].substring(1).toLowerCase());
            if (i != list.length - 1) {
                newName.append(" ");
            }
        }
        name = newName.toString();
    }


    @Override
    public String toString() {
        return id + " " + name + " " + grade + " " + email;
    }

    @Override
    public int compareTo(SinhVien sv) {
        return id.compareTo(sv.getId());
    }

}

public class J07033_Danh_Sach_Sinh_Vien_Trong_File {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("SINHVIEN.in"));
        int k = Integer.parseInt(in.nextLine());
        SinhVien[] students = new SinhVien[k];
        for (int i = 0; i < k; i++) {
            String id = in.nextLine();
            String name = in.nextLine();
            String grade = in.nextLine();
            String email = in.nextLine();
            students[i] = new SinhVien(id, name, grade, email);
        }

        Arrays.sort(students);
        for (SinhVien student : students) {
            System.out.println(student);
        }
    }
}
