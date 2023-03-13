import java.util.*;

class matarith{
void matadd(int mat1[][],int mat2[][]){
int mat3[][]=new int[3][3];
int i,j;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
mat3[i][j]=mat1[i][j]+mat2[i][j];
}
}

System.out.println("added matrix is:");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
System.out.print(mat3[i][j]+"	");
}
System.out.println();
}

}


void matmul(int mat1[][],int mat2[][]){
int mat4[][]=new int[3][3];
int i,j,k,sum1=0,prod;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
sum1=0;
for(k=0;k<3;k++){
prod=mat1[i][k]*mat2[k][j];
sum1+=prod;
}
mat4[i][j]=sum1;
}
}

System.out.println("multiplied matrix is:");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
System.out.print(mat4[i][j]+"	");
}
System.out.println();
}


}


}


class prac6bc{
public static void main(String args[]){
int mat1[][]=new int[3][3];
int mat2[][]=new int[3][3];

int i,j;
Scanner sc=new Scanner(System.in);
System.out.println("enter matrix 1:");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
System.out.print("enter element:");
mat1[i][j]=sc.nextInt();
}
}

System.out.println("enter matrix 2:");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
System.out.print("enter element:");
mat2[i][j]=sc.nextInt();
}
}

System.out.println("mat 1 is:");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
System.out.print(mat1[i][j]+"	");
}
System.out.println();
}

System.out.println("mat 2 is:");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
System.out.print(mat2[i][j]+"	");
}
System.out.println();
}



matarith m1=new matarith();
m1.matadd(mat1,mat2);
m1.matmul(mat1,mat2);


}
}