package kiem_tra_giua_ky_2.bai_3;

public class Team {
    public static int count = 1;
    private String id, name, truong;

    public Team(String name, String truong) {
        this.id = String.format("Team%02d", count++);
        this.name = name;
        this.truong = truong;
    }

    public static int getCount() {
        return count;
    }

    public static void setCount(int count) {
        Team.count = count;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getTruong() {
        return truong;
    }

    public void setTruong(String truong) {
        this.truong = truong;
    }
}
