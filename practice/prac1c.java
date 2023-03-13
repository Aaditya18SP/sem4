import java.util.*;
class prac1c{
public static void main(String args[]){
double r,area,peri;
Scanner sc=new Scanner(System.in);
System.out.print("enter radius:");
r=sc.nextFloat();
area=3.14*Math.pow(r,2);
peri=2*3.14*r;
System.out.println("perimeter is: "+peri+" area is:"+area);
}
}