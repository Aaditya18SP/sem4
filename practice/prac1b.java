import java.util.*;
class prac1b{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int a,i,j,k;
System.out.print("enter number of rows:");
a=sc.nextInt();
for(i=0;i<a;i++){
for(k=0;k<i;k++){
System.out.print(" ");
}
for(j=a-i;j>0;j--){


System.out.print("* ");

}
System.out.println();
}

}
}