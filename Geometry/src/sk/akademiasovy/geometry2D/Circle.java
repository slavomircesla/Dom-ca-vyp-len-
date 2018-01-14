package sk.akademiasovy.geometry2D;

public class Circle implements Operation
{

    private double r;

    public Circle(double r)
    {
        this.r = r;
    }




    public double getArea()
    {
        return Math.PI*r*r;
    }


    public double getPerimeter()
    {
        return 2*Math.PI*r;
    }
}
