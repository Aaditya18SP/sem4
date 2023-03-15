library("MASS")
data=table(Cars93$AirBags,Cars93$Type)
print(data)
cat("the chisquare test is:","\n")
print(chisq.test(data))
#cat("when q and df are given:","\n")
#print(qchisq.test(.95,7))
data1=read.csv("D:\\ADITYA FYBscIT\\SUBJECTS\\4TH SEM\\COST\\practice_2\\mendels.csv")
ofreq=data1$freq
prob=c(9/16,3/16,3/16,1/16)
cat("the chisquare test for mendels is:","\n")
print(chisq.test(ofreq,p=prob))


data2=read.csv("D:\\ADITYA FYBscIT\\SUBJECTS\\4TH SEM\\COST\\practice_2\\digits.csv")
ofreq1=data2$freq
cat("the chisq test is:","\n")
print(chisq.test(ofreq1))

#test of independence
m=as.table(rbind(c(31,49),c(23,78)))
dimnames(m)=list(type=c(1,2),lang=c("hindi","english"))
print(m)
print(chisq.test(m,correct=FALSE))


