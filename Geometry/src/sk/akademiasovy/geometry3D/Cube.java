package sk.akademiasovy.geometry3D;

public class Cube implements operation3d
{

    private int a;

    @Override
    public double getSurface()

    {
        return (a*a)*6;
    }

    @Override
    public double getVolume()

    {
        return a*a*a;
    }
}
