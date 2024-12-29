public static void main(String[] args) {
    StringBuilder sb = new StringBuilder();
    for (String word : words) {
        sb.append(Character.toUpperCase(word.charAt(0)))
                .append(word.substring(1).toLowerCase())
                .append(" ");
    }
}