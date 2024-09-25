class SinhVien {
    public static int ID = 1;
    private String id, name, birth, grade;
    private double gpa;

    public SinhVien(String id, String name, String birth, String grade, double gpa) {
        this.id = "B20DCCN" + String.format("%03d", ID);
        this.name = name;
        this.birth = birth;
        this.grade = grade;
        this.gpa = gpa;
    }
}

public class J07010_DanhSachSinhVien {
}
