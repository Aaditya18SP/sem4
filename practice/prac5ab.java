import java.util.*;
class A{
int m;
A(){
System.out.println("setting value");
Scanner sc=new Scanner(System.in);
System.out.print("enter a number:");
m= sc.nextInt();
}
void show(){
System.out.println("value of m is:"+m);
}
}

class B extends A{
int n=50;
void show(){
System.out.println("overidden method");
System.out.println("value of m and n is:"+m + " "+n);
}
void showofA(){
super.show();
}



}
class prac5ab{

public static void main(String args[]){
A a1 =new A();
B b1=new B();
b1.show();
a1.show();
b1.showofA();
A ref;
ref=a1;
ref.show();
ref=b1;
ref.show();


}
}

