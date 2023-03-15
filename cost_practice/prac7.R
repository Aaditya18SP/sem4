#q1 -->LIGHT BULB
popmean=10000
sapmean=9900
n=30
popsd=120
a=0.05
z=(sapmean-popmean)/(popsd/sqrt(n))
print(z)
talpha=qt(1-a,df=n-1)
print(talpha)

#q2-->grams of packets
popmean1=2
sapmean1=2.1
popsd1=0.25
n1=35
a1=0.05
z1=(sapmean-popmean1)/(popsd1/sqrt(n1))
print(z1)
zalpha=qnorm(1-a1)
print(zalpha)

