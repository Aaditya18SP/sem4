import java.util.*;
class starpat{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int a,i,j,k,l;
System.out.print("Enter number of rows:");
a=sc.nextInt();
k=1;
for(i=0;i<a;i++){
for(l=a;l>i;l--){
System.out.print("  ");
}
for(j=0;j<=i;j++){
System.out.print(k+"   ");
k++;
}
System.out.println();
}

}
}
