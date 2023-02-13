import java.io.*;
import java.util.*;
class filereadwrite{
public static void main(String args[]){
File r1=new File("D:\\3944A017 SYIT\\JAVA\\pracs\\filehandling_files\\inputfile.txt");
File w1=new File("D:\\3944A017 SYIT\\JAVA\\pracs\\filehandling_files\\outputfile.txt");
try{
FileReader f1= new FileReader(r1);
FileWriter f2=new FileWriter(w1);
int ch;
while((ch=f1.read())!=-1){
f2.write((char)ch);
}
f1.close();
f2.close();
}

catch(Exception e){
System.out.println("error is:");
}



}
}