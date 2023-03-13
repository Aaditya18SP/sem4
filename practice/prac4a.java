import java.util.*;
class SortData{
void asec(int arr[]){

int size=arr.length;
int i,j,temp;
for(i=0;i<size;i++){
for(j=0;j<size-i-1;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
System.out.println("ascending order is:");
for(i=0;i<size;i++){
System.out.print(arr[i]+" ");
}
}
void desc(int arr[]){

int size=arr.length;
int i,j,temp;
for(i=0;i<size;i++){
for(j=0;j<size-i-1;j++){
if(arr[j]<arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
System.out.println();
System.out.println("desending order is:");
for(i=0;i<size;i++){
System.out.print(arr[i]+" ");
}

}


}

class prac4a{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.print("enter size:");
int size=sc.nextInt();
int arr[]=new int[size];
int i;
System.out.print("enter elements:");
for(i=0;i<size;i++){
arr[i]=sc.nextInt();
}
SortData obj1=new SortData();
obj1.asec(arr);
obj1.desc(arr);



}

}
