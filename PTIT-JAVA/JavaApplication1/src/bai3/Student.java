/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai3;

/**
 *
 * @author vanbeonhv
 */
public class Student implements Comparable<Student> {

    private static int N = 1;
    private String id, name, team_id, team, school;

    public Student(String name, String team_id) {
        this.id = "C" + String.format("%03d", N++);
        this.name = name;
        this.team_id = team_id;
    }

    public String getTeam() {
        return team;
    }

    public String getTeam_id() {
        return team_id;
    }

    public String getName() {
        return name;
    }

    public void setSchool(String school) {
        this.school = school;
    }

    public void setTeam(String team) {
        this.team = team;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + team + " " + school;
    }

    @Override
    public int compareTo(Student s) {
        return this.name.compareTo(s.getName());
    }

}
