package kiem_tra_giua_ky_2.bai_3;

public class SinhVien implements Comparable<SinhVien> {
    public static int count = 1;
    private String id, name, teamId, team, truong;

    public SinhVien(String name, String teamId) {
        this.id = String.format("C%03d", count++);
        this.name = name;
        this.teamId = teamId;
    }
    public void setTruong(String truong) {
        this.truong = truong;
    }

    public void setTeam(String team) {
        this.team = team;
    }

    public static int getCount() {
        return count;
    }

    public static void setCount(int count) {
        SinhVien.count = count;
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

    public String getTeamId() {
        return teamId;
    }

    public void setTeamId(String teamId) {
        this.teamId = teamId;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + team + " " + truong;
    }


    @Override
    public int compareTo(SinhVien o) {
        return name.compareTo(o.name);
    }
}
