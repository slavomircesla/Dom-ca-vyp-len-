package sk.akademiasovy.geometry3D;

public class Ball implements operation3d
{
private double r;
    @Override
    public double getSurface()
    {
    return 0;
    }

    @Override
    public double getVolume()
    {
       return (4/3*Math.PI)*r*r*r;
    }
}
