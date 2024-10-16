import java.util.Scanner;

class Point {
    private double x, y;

    public Point() {
    }

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public Point(Point p) {
        this.x = p.x;
        this.y = p.y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public double distance(Point secondPoint) {
        return Math.sqrt(Math.pow(x - secondPoint.x, 2) + Math.pow(y - secondPoint.y, 2));
    }

    public double distance(Point p1, Point p2) {
        return Math.sqrt(Math.pow(p1.x - p2.x, 2) + Math.pow(p1.y - p2.y, 2));
    }

    public String toString() {
        return x + " " + y;
    }
}

public class J04001_Khai_Bao_Lop_Point {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = Integer.parseInt(in.nextLine());
        while (k-- > 0) {
            double firstX = in.nextDouble();
            double firstY = in.nextDouble();
            double secondX = in.nextDouble();
            double secondY = in.nextDouble();
            Point firstPoint = new Point(firstX, firstY);
            Point secondPoint = new Point(secondX, secondY);
            double distance = firstPoint.distance(secondPoint);
            System.out.printf("%.4f\n", distance);
        }
    }
}
