num=as.integer(readline("enter number of numbers wanted:"))
i=0L
j=1L
x=1L
while(x<=num){
cat(i," ")
k=i
i=i+j
j=k
x=x+1
}
print("\n")
num1=as.integer(readline("enter number:"))
og=num1
reverse=0L
while(num1!=0){
r=num1%%10
reverse=(reverse*10)+r
num1=num1%/%10
}
if(og==reverse){
print("palindrome")
}else{
print("not palindrome")
}
print("\n")
num2=as.integer(readline("enter a number:"))
og=num2
sum1=0L
while(num2!=0){
r=num2%%10
sum1=sum1+(r*r*r)
num2=num2%/%10
}
if(og==sum1){
print("armstrong")
}else{
print("not armstrong")
}
print("\n")
num3=as.integer(readline("enter number:"))
i=2L
f=0L
while(i<num3){
if(num3%%i==0){
f=1L
break
}
i=i+1
}
if(f==1){
print("not prime")
}else{
print("prime")
}