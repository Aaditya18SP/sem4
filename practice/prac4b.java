import java.util.*;
class cd{
cd(char a){
System.out.println("ascii is:"+ (int)a);
if(Character.isLetter(a)){
System.out.println("char is a letter");
}else if(Character.isDigit(a)){
System.out.println("char is a digit");
}else if(Character.isSpaceChar(a)){
System.out.println("char is a space");
}
}
 public void  finalize(){
System.out.println("destroyed");

}
}

class prac4b{
public static void main(String args[]){
  cd ob=new cd('a');
cd ob2=new cd(' ');
cd ob3=new cd('2');
ob2.finalize();
ob2=null;
}

}