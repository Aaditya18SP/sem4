#data types
i=1L
print(class(i))
num=23.5
print(class(num))
lg=TRUE
print(class(lg))
character="string"
print(class(character))
complex=23+4i
print(class(complex))

#data structures
vec=c(1,2,3,4)
print(class(vec))
print(vec)

#list
list1=list("aaditya",123,34L,23+8i)
print(list1)

#array
array1=array(c(1,2,3,4),dim=c(2,2))
print(array1)

#matrix
matrix1=matrix(c(1,2,3,4,5,6,7,8,9),nrow=3,ncol=3,byrow=TRUE)
print(matrix1)

#dataframe
df=data.frame(name=c("aaditya","sanika","anushka"),rollno=c(17,35,1))
print(df)

#factor
fac1=factor(vec)
print(fac1)