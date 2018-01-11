package sk.akademiasovy.main;

import sk.akademiasovy.Geometry.Rectangle;
import sk.akademiasovy.Geometry.Square;
import sk.akademiasovy.Geometry.Triangle;

/**
 * Created by schoolpc on 11. 1. 2018.
 */
public class main {
    public static void main(String[] args) {
        Square square1 = new Square(7.5);
        Square square2 = new Square();


        System.out.println("Area of square1 is: "+square1.getArea() );
        System.out.println("Perimeter of square 1 is: "+ square1.getPerimeter());
        System.out.println("Diagonal  of square1 is : "+square1.getDiagonal());



        Rectangle rectangle1 = new Rectangle(18.5, 11.15);
        Rectangle rectangle2 = new Rectangle();


        System.out.println("Area of rectan is: "+ rectangle1.getArea() );
        System.out.println("Perimeter of rectang1 is: "+ rectangle1.getPerimeter());


        Triangle triangle1 = new Triangle (3, 4, 5);

        System.out.println("Obvod of triangle is: "+ triangle1.getobvod() );
        System.out.println("Area of triangle is: "+ triangle1.getArea() );
        System.out.println("Triangle is :" +triangle1.isRectangular());
        System.out.println("Triangle can or cant be created: " +triangle1.isExistTriangle());
        System.out.println("Triangle is Equilateral??? :  " +triangle1.isEquilateralTriangle());


    }



    }

