#include <reg51.h>
void main(){
int sine[]={0,0,5,0,10,15,20,25,30,35,40,45,45,40,35,30,20,25,20,15,10,5,0,0};
int i;
while(1){
for(i=0;i<23;i++){
P3=sine[i];
}
}

}