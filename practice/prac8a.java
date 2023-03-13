import java.util.*;
import java.io.*;
class prac8a{
public static void main(String args[]){
File f1=new File("fileinput.txt");

//character reading
/*try{
FileReader fr=new FileReader(f1);
int ch;
while((ch=fr.read())!=-1){
System.out.print((char)ch);
}
System.out.println();
fr.close();
}
catch(Exception e){
System.out.print("Caught an exception");
}
*/ 

//byte reading
try{
FileInputStream fis=new FileInputStream(f1);

int ch;
while((ch=fis.read())!=-1){
System.out.print((char)ch);
}
fis.close();

}
catch(Exception e){
System.out.print("Caught an exception");
}

}
}