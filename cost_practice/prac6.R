data=read.csv("D:\\ADITYA FYBscIT\\SUBJECTS\\4TH SEM\\COST\\practice_2\\prac3.csv")
num=data$numbers
library("moments")
cat("the skewness is:",skewness(num),"\n")
cat("the kurtosis is:",kurtosis(num),"\n")
