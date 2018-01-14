package sk.akademiasovy.main;

import sk.akademiasovy.geometry2D.Square;
import sk.akademiasovy.geometry2D.Rectangle;
import sk.akademiasovy.geometry2D.Triangle;
import sk.akademiasovy.geometry2D.Circle;

public class Main
{
    public static void main(String[] args)
    {
        Square square1 = new Square(7.5);
        Square square2 = new Square();

        System.out.println("Area of square1 is: "+square1.getArea());
        System.out.println("Perimeter of square1 is: "+square1.getPerimeter());
        System.out.println("Diagonal of square1 is: "+square1.getDiagonal());

        Rectangle rectangle1 = new Rectangle(7.5,8.5);

        System.out.println("Area of rectangle is: "+rectangle1.getArea());
        System.out.println("Perimeter of rectangle is: "+rectangle1.getPerimeter());

        Triangle triangle1 = new Triangle();
        System.out.println(" Area of triangle: "+triangle1.getArea());
        System.out.println(" Perimeter of triangle: "+triangle1.getPerimeter());
        System.out.println(" Triangle RectAngle: "+triangle1.isRectangular());
        System.out.println(" Triangle Equilateral: "+triangle1.isEquilateralTriangle());
        System.out.println(" Triangle Isosceles: "+triangle1.isIsoscelesTriangle());
        System.out.println(" triangle exist: "+triangle1.existTriangle());

        Circle circle1 = new Circle(4);
        System.out.println("Circle Area is: "+circle1.getArea());



    }
}
