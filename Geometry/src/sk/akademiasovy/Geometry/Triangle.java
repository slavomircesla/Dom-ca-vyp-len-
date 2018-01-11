package sk.akademiasovy.Geometry;

/**
 * Created by schoolpc on 11. 1. 2018.
 */
public class Triangle {
    private double a;
    private double b;
    private double c;

    public Triangle(double a, double b, double c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public Triangle() {
        a=b=c=0;
    }

    public double getobvod()
    {
        return a+b+c;
    }

    public double getArea()
    {
        double s=getobvod()/2;
        return Math.sqrt(s*(s-a)*(s-b)*(s-c));
    }


    public boolean isRectangular()
    {
        if(a*a+b*b==c*c)
            return true;
            else if (a*a+c*c==b*b)
                return true;
                else if(b*b+c*c==a*a)
                    return true;
                else
                    return false;
    }

    public boolean isExistTriangle()
    {
        if(a+b<c)
            return false;
            else if(a+c<b)
                return false;
            else if(b+c<a)
                return false;
            else
               return true;
    }

    public boolean isEquilateralTriangle()
    {
        if((a==b)&&(b==c))
            return true;
        else
            return false;
    }

}
