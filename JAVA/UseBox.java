// package FindArea.com;

class Box {
    public int l,b,h;
    public Box(){
        l=b=h=0;
    }
    public Box(int n){
        l=b=h=n;
    }
    public Box(int a,int x,int c){
        l=a;
        b=x;
        h=c;
    }
    public Box(Box y){
        l=y.l;
        b=y.b;
        h=y.h;
    }
    public void show(){
        System.out.println("Length is "+l+" ,Breadth is "+b+" and Height is "+h);
    }
}
// package FindArea.com;

class UseBox {
    public static void main(String[] args) {
        Box obj1,obj2,obj3,obj4;  //<----- Creating References
        obj1=new Box();
        obj2=new Box(5);
        obj3=new Box(2,5,7);
        obj4=new Box(obj2);
        obj1.show();
        obj2.show();
        obj3.show();
        obj4.show();
    }
}