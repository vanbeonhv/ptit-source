/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai3;

/**
 *
 * @author vanbeonhv
 */
public class Team {

    private static int N = 1;
    private String id, team_name, school;

    public Team(String team_name, String school) {
        this.id = "Team" + String.format("%02d", N++);
        this.team_name = team_name;
        this.school = school;
    }

    public String getId() {
        return id;
    }

    public String getTeam_name() {
        return team_name;
    }

    public String getSchool() {
        return school;
    }

}
