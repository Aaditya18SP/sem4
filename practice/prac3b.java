import java.util.*;
class func{
int digisum(char arr[]){
int sum1=0,i,digit;
for(i=0;i<arr.length;i++){
digit=arr[i]-'0';
sum1+=digit;
}
return sum1;
}

}
class prac3b{
public static void main(String args[]){
char arr[]={'0','1','2','3','4','5','6','7','8','9'};
func f1=new func();
System.out.println("the sum of digits is:"+f1.digisum(arr));
}
}