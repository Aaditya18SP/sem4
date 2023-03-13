import java.util.*;

class marks{
float eng,maths;
String name;
marks(){
Scanner sc=new Scanner(System.in);
System.out.print("enter name:");
name=sc.nextLine();
System.out.print("enter eng marks:");
eng=sc.nextFloat();
System.out.print("enter math marks:");
maths=sc.nextFloat();
}

void show(){
System.out.println("name is:"+name);
System.out.println("english marks are:"+eng);
System.out.println("maths marks are:"+maths);
}

}

interface sports{
int sp=5;
void showsp();
}

class total extends marks implements sports{
public void showsp(){
System.out.println("sports marks are:"+ sp);
}
float totalmarks;
void showtotal(){
totalmarks=eng+maths+sp;
super.show();
showsp();
System.out.print("total marks are:"+totalmarks);
}


}


class prac5c{
public static void main(String args[]){
total t1=new total();
t1.showtotal();

}
}