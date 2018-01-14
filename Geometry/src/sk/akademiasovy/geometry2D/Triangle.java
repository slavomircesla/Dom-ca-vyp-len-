package sk.akademiasovy.geometry2D;

public class Triangle implements Operation
{

    private double a,b,c,s;

    public Triangle()
    {
        a=6;
        b=7;
        c=5;
    }

    public Triangle(double a, double b,double c)
    {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    @Override
public double getPerimeter()
    {
        return a+b+c;


    }

    @Override
    public double getArea()
    {

        s=getPerimeter()/2;

        return Math.sqrt(s*(s-a)*(s-b)*(s-c));

    }


    public boolean isRectangular()
    {
        if(a*a + b*b == c*c)
            return true;

            else if (a*a+c*c==b*b)
                return true;
        else if(b*b+c*c==a*a)
            return true;
        else
            return false;


    }

    public boolean existTriangle()
    {
        if (a+b>c || b+c>a || a+c>b)
            return true;
        else
            return false;

    }

    public boolean isEquilateralTriangle()
    {
        if (a == b && b ==c && a==c )
            return true;
        else


        return false;
    }

   public  boolean isIsoscelesTriangle()    //rovnoramenny
    {
        if (a == b || b == c || a == c)
        return true;
        else
            return false;




    }



}
