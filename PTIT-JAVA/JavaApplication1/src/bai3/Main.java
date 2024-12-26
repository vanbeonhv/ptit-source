/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai3;

import java.util.*;

/**
 *
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

        List<Student> students = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            Student student = new Student(in.nextLine().trim(), in.nextLine().trim());
            students.add(student);
        }

        for (Student student : students) {
            for (Team team : teams) {
                if (student.getTeam_id().equals(team.getId())) {
                    student.setTeam(team.getTeam_name());
                    student.setSchool(team.getSchool());
                }
            }
        }
        
        Collections.sort(students);

        for (Student student : students) {
            System.out.println(student);
        }

    }
}
