package kiemtra;


import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;


public class Matrix {
    private int rows;
    private int cols;
    private int[][] value;

    public Matrix(int rows, int cols, int[][] value) {
        this.rows = rows;
        this.cols = cols;
        this.value = value;
    }

    public void sortColumn(int colIndex) {
        int[] column = new int[rows];
        for (int i = 0; i < rows; i++) {
            column[i] = this.value[i][colIndex];
        }
        Arrays.sort(column);
        for (int i = 0; i < rows; i++) {
            this.value[i][colIndex] = column[i];
        }
    }

    @Override
    public String toString() {
        String s = "";
        for (int[] row : value) {
            for (int num : row) {
                s += (num + " ");
            }
            s += "\n";
        }
        return s;
    }


    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("MATRIX.in"));
        int k = in.nextInt();

        while (k-- > 0) {
            in.nextLine();
            String input = in.nextLine();
            String[] numbers = input.split(" ");
            int N = Integer.parseInt(numbers[0]);
            int M = Integer.parseInt(numbers[1]);
            int i = Integer.parseInt(numbers[2]);
            int[][] matrixValue = new int[M][N];

            for (int m = 0; m < M; m++) {
                for (int n = 0; n < N; n++) {
                    matrixValue[m][n] = in.nextInt();
                }
            }

            Matrix matrix = new Matrix(M, N, matrixValue);
            matrix.sortColumn(i - 1);
            System.out.println(matrix.toString());
        }
    }
}
