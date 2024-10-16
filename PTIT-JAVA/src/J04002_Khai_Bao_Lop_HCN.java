import java.util.Scanner;

import static java.lang.Math.round;

class Rectange {
    double width, height;
    String color;

    public Rectange() {
        width = 1;
        height = 1;
    }

    public Rectange(double width, double height, String color) {
        this.width = width;
        this.height = height;
        this.color = standardize(color);
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double newWidth) {
        width = newWidth;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double newHeight) {
        height = newHeight;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String newColor) {
        color = newColor;
    }

    public int findArea() {
        return (int)round(width * height);
    }

    public int findPerimeter() {
        return (int)round(2 * (width + height));
    }

    private String standardize(String oldColor) {
        return oldColor.substring(0, 1).toUpperCase() +
                oldColor.substring(1).toLowerCase();
    }

    public String toString(){
        return findPerimeter() + " " + findArea() + " " + color;
    }


}

public class J04002_Khai_Bao_Lop_HCN {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double w = in.nextDouble();
        double h = in.nextDouble();
        if(w <= 0 || h <= 0){
            System.out.println("INVALID");
            return;
        }
        String c = in.next();
        Rectange rectange = new Rectange(w, h, c);
        System.out.println(rectange);
    }
}
