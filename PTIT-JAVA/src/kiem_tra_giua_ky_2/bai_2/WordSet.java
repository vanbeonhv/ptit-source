package kiem_tra_giua_ky_2.bai_2;

import java.util.Arrays;
import java.util.TreeSet;

public class WordSet {
    private TreeSet<String> stringSet;

    public WordSet() {
    }

    public WordSet(String words) {
        stringSet = new TreeSet();
        words = words.trim();
        String[] wordList = words.split("\\s+");
        for (int i = 0; i < wordList.length; i++) {
            wordList[i] = wordList[i].toLowerCase().trim();
        }
        stringSet.addAll(Arrays.asList(wordList));
    }

    public WordSet union(WordSet wordSet) {
        WordSet newWordSet = new WordSet();
        TreeSet<String> union = new TreeSet<>(stringSet);
        union.addAll(wordSet.getStringSet());
        newWordSet.setStringSet(union);
        return newWordSet;
    }

    public WordSet intersection(WordSet wordSet) {
        WordSet newWordSet = new WordSet();
        TreeSet<String> union = new TreeSet<>(this.stringSet);
        union.retainAll(wordSet.getStringSet());
        newWordSet.setStringSet(union);
        return newWordSet;
    }

    public void setStringSet(TreeSet<String> stringSet) {
        this.stringSet = stringSet;
    }

    public TreeSet<String> getStringSet() {
        return stringSet;
    }

    @Override
    public String toString() {
        StringBuilder stringBuilder = new StringBuilder();
        for (String string : stringSet) {
            stringBuilder.append(string).append(" ");
        }
        return stringBuilder.toString();
    }
}
