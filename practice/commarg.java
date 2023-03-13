import java.util.*;
class commarg{
public static void main(String args[]){
int size=args.length,i;
System.out.println("the size is:"+size);
String num="";
int j[]=new int[5];
System.out.print("the number is:");
for(i=0;i<size;i++){
num+=args[i];
}
for(i=0;i<num.length();i++){
j[i]=(num.charAt(i))-'0';
System.out.print(j[i]);
}




}


}