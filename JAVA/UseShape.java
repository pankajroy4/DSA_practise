interface Shape{
    public String getName();
    public double area(); 
}

class Circle implements Shape{
    private int radius;
    public Circle(int radius){
        this.radius=radius;
    }
    public String getName(){
        return "Circle";
    }
    public double area(){
        return Math.PI*Math.pow(radius,2);
    }
}

class Rectangle implements Shape{
    private int length,breadth;
    public Rectangle(int length,int breadth){
        this.length=length;
        this.breadth=breadth;
    }
    public String getName(){
        return "Rectangle";
    }
    public double area(){
        return length*breadth;
    }
}

class UseShape{
    public static void main(String []args){
        Shape s;
        s=new Circle(10);
        System.out.println("Shape is "+s.getName());
        System.out.println("Area is "+s.area());

        s=new Rectangle(5,8);
        System.out.println("Shape is "+s.getName());
        System.out.println("Area is "+s.area());
    }
}




