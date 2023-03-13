import java.util.*;
class prac9c{
public static void main(String args[]){
int a,b,d,c[]={2,3};
try{
a=0;
b=5;
d=a/b;
System.out.println(d);
//c[5]=5;
throw new ArithmeticException("hello");
}
catch(ArithmeticException e){
System.out.print("cant divide by zero");
}
catch(ArrayIndexOutOfBoundsException e){
System.out.println(" array index error");
}

}

}