import java.util.*;
class prac2a{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
String b1,b2,b3="";
int lendiff,i,j;
int m,n,carry=0,xoresult=0,temp;

System.out.print("enter 1st binary number:");
b1=sc.nextLine();
System.out.print("enter 2nd binary number:");
b2=sc.nextLine();
int b1len=b1.length();
int b2len=b2.length();

if(b1len>b2len){
lendiff=b1len-b2len;
for(i=0;i<lendiff;i++){
b2=0+b2;
}
}
else{
lendiff=b2len-b1len;
for(i=0;i<lendiff;i++){
b1=0+b1;
}
}
System.out.println("b1 is:"+b1+" b2 is:"+b2);

for(i=b1len-1;i>=0;i--){
m=b1.charAt(i)-'0';
n=b2.charAt(i)-'0';

if(carry==1){

temp=carry^m;
if(m==1 & carry==1){
carry=1;
}else{
carry=0;
}
xoresult=temp^n;
if(temp==1 & n==1){
carry=1;
}
b3+=xoresult;
if(i==0){
b3+=carry;
}

}

else{
xoresult=m^n;
if(m==1 & n==1){
carry=1;
}
else{
carry=0;
}
b3+=xoresult;
if(i==0){
b3+=carry;
}
}


}
System.out.print("the binary addition is:");
for(i=b3.length()-1;i>=0;i--){
System.out.print(b3.charAt(i));
}

}
}