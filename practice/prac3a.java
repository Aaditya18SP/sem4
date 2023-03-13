import java.util.*;
class prac3a{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
String userin=sc.nextLine();
int i=0,num=0,letter=0,space=0,other=0;
char x;
for(i=0;i<userin.length();i++){
x=userin.charAt(i);
if(Character.isDigit(x)){
num++;
}else if(Character.isLetter(x)){
letter++;
}else if(Character.isSpaceChar(x)){
space++;
}else{
other++;
}

}
System.out.println("number of letters:" + letter);
System.out.println("number of numbers:" + num);
System.out.println("number of spaces:" + space);
System.out.println("number of other characters:" + other);


}
}