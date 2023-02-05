data <- read.csv("D:\\ADITYA FYBscIT\\SUBJECTS\\4TH SEM\\COST\\Book2.csv")
print(data)
class = data$class_m
frequency =c(data$frequency)
h=class[2]-class[1]
i=1L
cu_freq=c()
n=0L

while(i<=length(class)){
n=n+frequency[i]
cu_freq=append(cu_freq,n)
i=i+1
}

data$cu_freq=cu_freq
print(data)

max_freq=frequency[1]
#modal class selection
for(i in 1:length(class)){
if(max_freq<frequency[i]){
max_freq=frequency[i]
j=i
}
}
cat("j is:",j,"\n")
#finding lower class boundary
l1=(class[j]+class[j+1])/2-h
if(j!=1){
f0=cu_freq[j-1]
}else{
f0=cu_freq[j]
}
f1=frequency[j]
f2=frequency[j+1]

mode_class= l1+((f1-f0)/((2*f1)-f0-f2))*h
cat("L1 is:" ,l1,"\n")
cat("f0 is:" ,f0,"\n")
cat("f1:" ,f1,"\n")
cat("f2:" ,f2,"\n")
cat("the mode is :",mode_class,"\n")


