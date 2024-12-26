/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai2;

import java.util.*;

/**
 *
 * @author vanbeonhv
 */
public class WordSet {

    private TreeSet<String> data = new TreeSet<>();
    
    public WordSet(){
        
    }

    public WordSet(String word) {
        String[] strings = word.split("\\s++");
        for (String string : strings) {
            data.add(string.toLowerCase());
        }
    }

    public TreeSet<String> getData() {
        return data;
    }

    public void setData(TreeSet<String> data) {
        this.data = data;
    }
    
    

    public WordSet union(WordSet wordSet) {
        TreeSet<String> A = new TreeSet<>(data);
        A.addAll(wordSet.getData());
        WordSet B = new WordSet();
        B.setData(A);
        return B;
    }

    public WordSet intersection(WordSet wordSet) {
        data.retainAll(wordSet.getData());
        return this;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (String string : data) {
            sb.append(string);
            sb.append(" ");
        }
        return sb.toString().trim();
    }

}
