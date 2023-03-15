#mcq question binomial distribution
cat("the probabilty of exact 4:",dbinom(4,size=12,prob=0.2),"\n")
value=dbinom(0,size=12,prob=0.2)+dbinom(1,size=12,prob=0.2)+dbinom(2,size=12,prob=0.2)+dbinom(3,size=12,prob=0.2)+dbinom(4,size=12,prob=0.2)
cat("the probability of less than 4:",value,"\n")
cat("the probability with pbinorm is:",pbinom(4,size=12,prob=0.2),"\n")

#marks in college exam
value1=pnorm(84,mean=72,sd=15.2,lower.tail=FALSE)
cat("the probability is:",value1,"\n")
cat("the percentage is:",value1*100,"\n")

x=seq(0,50,by=1)
y=dbinom(x,50,0.5)
plot(x,y)

x1=seq(-20,20,by=1)
y1=dnorm(x1)
plot(x1,y1)

x2=seq(-20,20,by=1)
y2=pnorm(x1)
plot(x2,y2)


