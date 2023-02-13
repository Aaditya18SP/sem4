import java.util.*;
import java.io.*;
class fileread{
public static void main(String args[]){
//File r=new File("inputfile.txt");
try{
FileReader f1=new FileReader("D:\\3944A017 SYIT\\JAVA\\pracs\\filehandling_files\\inputfile.txt");
int ch;
while((ch=f1.read())!=-1){
System.out.print((char)ch+" ");
}
f1.close();
}

catch(Exception e){
System.out.println("error is:" +e);
}

}
}