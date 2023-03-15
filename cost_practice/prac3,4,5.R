mode=function(x){
unique_x=unique(x)
tabulate_x=tabulate(match(x,unique_x))
unique_x[which.max(tabulate_x)]
}
data=read.csv("D:\\ADITYA FYBscIT\\SUBJECTS\\4TH SEM\\COST\\practice_2\\prac3.csv")
num=data$numbers
print(num)
cat("mean is:",mean(num),"\n")
cat("median is:",median(num),"\n")
cat("mode is:",mode(num),"\n")
cat("sd is:",sd(num),"\n")
cat("var is:",var(num),"\n")
y=c(1,2,3,4,5,6)
cat("covariance is:",cov(num,y),"\n")
cat("quartiles are:",quantile(num,prob=c(0.25,0.75)),"\n")
cat("interquartile is:",IQR(num),"\n")
cat("range is:",range(num),"  ",max(num)-min(num),"\n")
hist(num,xlim=c(0,15),ylim=c(0,15),border="red",col="green")
dev.off()
