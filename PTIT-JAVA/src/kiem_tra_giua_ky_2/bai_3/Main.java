/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package kiem_tra_giua_ky_2.bai_3;

import java.util.*;

/**
 * @author vanbeonhv
 */
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();

        List<Team> teams = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            Team team = new Team(in.nextLine().trim(), in.nextLine().trim());
            teams.add(team);
        }

        int m = in.nextInt();
        in.nextLine();

        List<SinhVien> students = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            SinhVien student = new SinhVien(in.nextLine().trim(), in.nextLine().trim());
            students.add(student);
        }

        for (SinhVien student : students) {
            for (Team team : teams) {
                if (student.getTeam_id().equals(team.getId())) {
                    student.setTeam(team.getTeam_name());
                    student.setSchool(team.getSchool());
                }
            }
        }

        Collections.sort(students);

        for (SinhVien student : students) {
            System.out.println(student);
        }

    }
}
