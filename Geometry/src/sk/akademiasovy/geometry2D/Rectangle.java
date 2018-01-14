package sk.akademiasovy.geometry2D;

public class Rectangle implements Operation
{
    private double a;
    private double b;



    public Rectangle(double a, double b) {
        this.a = a;
        this.b = b;
    }

    public Rectangle()
    {
        a=0;
        b=0;

    }
    @Override
    public double getArea()
    {
        return a*b;

    }
    @Override
    public double getPerimeter()
    {
        return 2*(a+b);

    }
    public void transpose()
    {
        double temp;
        temp=a;
        a=b;
        b=temp;



    }







}


