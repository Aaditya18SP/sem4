import java.io.*;
import java.util.*;
class prac8c{
public static void main(String args[]){
String name;
int rollno;
float marks;
Scanner sc=new Scanner(System.in);
System.out.print("Enter name:");
name=sc.nextLine();
System.out.print("enter roll no:");
rollno=sc.nextInt();
System.out.print("enter marks:");
marks=sc.nextFloat();

File f1=new File("fileoutput.txt");

try{
FileOutputStream fos=new FileOutputStream(f1);
DataOutputStream dos=new DataOutputStream(fos);
dos.writeUTF(name);
dos.writeInt(rollno);
dos.writeFloat(marks);
FileInputStream fis=new FileInputStream(f1);
DataInputStream dis=new DataInputStream(fis);
System.out.println(dis.readUTF());
System.out.println(dis.readInt());
System.out.println(dis.readFloat());

dos.close();
fis.close();
}
catch(Exception e){
System.out.println("error:"+e);
}



}
}

