class Circle{
    private int radius;
    public Circle(int radius){
        this.radius=radius;
    }
    public double area(){
        return Math.PI*Math.pow(radius,2);
    }
    public int getRadius(){
        return radius;
    }
}
class Cylinder extends Circle{
    private int height;
    public Cylinder(int radius,int height){
        super(radius);
        this.height=height;
    }
    public double area(){
        return 2*super.area()+2*Math.PI*super.getRadius()*height;
    }
    public double volume(){
        return super.area()*height;
    }
}
class UseCylinder{
    public static void main(String []args){
        Cylinder obj=new Cylinder(10,20);
        System.out.println("Area of cylinder is "+obj.area());
        System.out.println("Volume  of cylinder is "+obj.volume());
    }
}