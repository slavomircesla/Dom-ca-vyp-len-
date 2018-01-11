package sk.akademiasovy.Geometry;

/**
 * Created by schoolpc on 11. 1. 2018.
 */
public class Rectangle {

   private double a;
   private double b;


    public Rectangle()
    {
     a=b=0;
    }

    public Rectangle(double a) {
        this.a = a;

    }

    public Rectangle(double a, double b) {
        this.a = a;
        this.b = b;
    }

    public double getArea()
    {
        return a*b;
    }

    public double getPerimeter()
    {
        return 2*a+2*b;
    }


}
