import java.util.*;
import java.io.*;
class prac1a{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int a,i;
System.out.print("enter a number:");
a=sc.nextInt();

System.out.println("multiplication table of "+a+"is :");
for(i=1;i<=10;i++){
System.out.println(a+ "x" + i + "=" + (a*i));
}

}
}
