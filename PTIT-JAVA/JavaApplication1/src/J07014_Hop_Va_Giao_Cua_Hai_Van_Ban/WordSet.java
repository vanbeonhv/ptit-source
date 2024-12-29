/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07014_Hop_Va_Giao_Cua_Hai_Van_Ban;

import java.io.*;
import java.util.*;

/**
 *
 * @author nguye
 */
public class WordSet {

    private TreeSet<String> data = new TreeSet<>();

    public WordSet(String fileName) throws FileNotFoundException {
        Scanner in = new Scanner(new File(fileName));
        while (in.hasNextLine()) {
            String[] words = in.nextLine().trim().split("\\s+");
            for (String word : words) {
                data.add(word.toLowerCase());
            }
        }

    }

    public WordSet(TreeSet<String> treeData) {
        this.data = treeData;
    }

    public TreeSet<String> getData() {
        return data;
    }

    public WordSet union(WordSet s2) {
        TreeSet<String> ts = new TreeSet<>(data);
        ts.addAll(s2.getData());
        return new WordSet(ts);
    }

    public WordSet intersection(WordSet s2) {
        TreeSet<String> ts = new TreeSet<>(data);
        ts.retainAll(s2.getData());
        return new WordSet(ts);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (String string : data) {
            sb.append(string).append(" ");
        }
        return sb.toString().trim();
    }

}
