import java.util.*;
class func{
public int bintodec(int b1){
int a,i=0,decimal=0;
while(b1!=0){
a=b1%10;
decimal+=a*Math.pow(2,i);
b1=b1/10;
i++;
}
return decimal;
}

public String dectobin(int d1){
int a,i=0,j;
int binary[]=new int[15];
String final_binary="";
while(d1>1){
a=d1%2;
binary[i]=a;
d1=d1/2;
i++;
}
binary[i]=d1;

for(j=i;j>=0;j--){
final_binary+=binary[j];
}
return final_binary;
}

}
class prac2b{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int b1,d1,b2;
int dec1,dec2,dec3;
String binary_converted;
System.out.print("enter binary number:");
b1=sc.nextInt();
System.out.print("enter decimal number:");
d1=sc.nextInt();
func f1=new func();
System.out.println("binary to decimal:"+ f1.bintodec(b1));
System.out.println("decimal to binary:"+ f1.dectobin(d1));
dec1=f1.bintodec(b1);
System.out.print("enter  2nd binary number:");
b2=sc.nextInt();
dec2=f1.bintodec(b2);
dec3=dec1+dec2;
binary_converted=f1.dectobin(dec3);
System.out.println("binary addition is: "+ binary_converted);

}

}