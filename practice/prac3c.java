import java.util.*;
class prac3c{
public static void main(String args[]){
int lar,sma,i,j,k;
Scanner sc=new Scanner(System.in);
System.out.println("enter size of array:");
int a=sc.nextInt();
int elements[]=new int[a];
for(i=0;i<a;i++){
System.out.print("enter element:");
elements[i]=sc.nextInt();
}
sma=lar=elements[0];
for(i=0;i<a;i++){
if(elements[i]<sma){
sma=elements[i];
j=i;
}
if(elements[i]>lar){
lar=elements[i];
k=i;
}
}
System.out.println("largest element is:"+lar);
System.out.println("smallest element is:"+sma);


}

}
