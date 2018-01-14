package sk.akademiasovy.geometry3D;

import sk.akademiasovy.geometry2D.Diagonal;

public class Block implements operation3d,Diagonal

{
    private int a,b,c;

    @Override
    public double getSurface()
    {
        return 2*(a*b+b*c+a*c);
    }

    @Override
    public double getVolume()
    {
        return a*b*c;
    }


    @Override
    public double getDiagonal()

    {
        return Math.sqrt(a*a+b*b+c*c);
    }
}
