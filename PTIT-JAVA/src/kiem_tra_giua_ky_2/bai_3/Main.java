package kiem_tra_giua_ky_2.bai_3;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        in.nextLine();
        List<Team> teams = new ArrayList<>();

        while (k-- > 0) {
            Team team = new Team(in.nextLine(),in.nextLine());
            teams.add(team);
        }
        int m = Integer.parseInt(in.nextLine().trim());

        List<SinhVien> sinhViens = new ArrayList<>();
        while (m-- > 0) {
            SinhVien sinhVien = new SinhVien(in.nextLine(),in.nextLine());
            sinhViens.add(sinhVien);
        }

        for(SinhVien sinhVien : sinhViens) {
            for(Team team : teams) {
                if(sinhVien.getTeamId().equals(team.getId())) {
                    sinhVien.setTruong(team.getTruong());
                    sinhVien.setTeam(team.getName());
                }
            }
        }

        Collections.sort(sinhViens);
        for (SinhVien sinhVien : sinhViens) {
            System.out.println(sinhVien);
        }
    }
}
