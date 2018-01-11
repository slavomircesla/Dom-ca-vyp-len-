package sk.akademiasovy.Geometry;

/**
 * Created by schoolpc on 11. 1. 2018.
 */
public class Square {
    public double getA() {
        return a;
    }

    public void setA(double a) {
        this.a = a;
    }

    private double a;


    public Square(double value)
    {
        a=value;
    }

    public Square()
    {
        a=0;
    }



    public double getArea()
    {
        return a*a;
    }

    public double getPerimeter()
    {
        return 4*a;
    }


    public double getDiagonal()
    {
        return Math.sqrt (a*a);
    }
}
