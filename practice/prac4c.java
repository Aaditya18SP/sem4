import java.util.*;
abstract class ab{
int a=1;
abstract void add();
void show(){
System.out.println("a is :"+a);
}
}
class ab1 extends ab{
void add(){
System.out.println("a is :"+(a+2));
}
}
class prac4c{
public static void main(String args[]){
ab1 ob=new ab1();
ob.add();
ob.show();

}
}