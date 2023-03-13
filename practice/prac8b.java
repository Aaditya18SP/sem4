import java.util.*;
import java.io.*;
class prac8b{
public static void main(String args[]){
File f1=new File("fileinput.txt");
File f2=new File("fileoutput.txt");

//character stream class
/*try{
FileReader fr=new FileReader(f1);
FileWriter fw=new FileWriter(f2);
int ch;
while((ch=fr.read())!=-1){
fw.write((char)ch);
}
System.out.println("write successful");
fr.close();
fw.close();

File f3=new File("fileoutput.txt");
FileReader fr2=new FileReader(f3);
ch=0;
while((ch=fr2.read())!=-1){
System.out.print((char)ch);
}

}
catch(Exception e){
System.out.println("exception" +e);
}

*/

//byte stream class

try{

FileInputStream fis=new FileInputStream(f1);
FileOutputStream dis=new FileOutputStream(f2);
int ch;
while((ch=fis.read())!=-1){
dis.write((byte)ch);
}
fis.close();
System.out.println("write successful");
ch=0;
FileInputStream fis2=new FileInputStream(f2);
while((ch=fis2.read())!=-1){
System.out.print((char)ch);
}
dis.close();
fis2.close();

}
catch(Exception e){
System.out.println("exception" +e);
}

}
}