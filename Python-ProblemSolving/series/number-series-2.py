
# Print the below series upto the n number 
# 1 2 4 8 16 32 64 128 .... 

def getNumber(n):
    return pow(2,n-1)

def printSeries(n):
    arr=[]
    for i in range(1,n+1):
        arr.append(getNumber(i))
    return arr  

n=int(input(" Enter the Number "))
print(printSeries(n))


# Enter the Number 10
# [1, 2, 4, 8, 16, 32, 64, 128, 256, 512] 
# Completed 