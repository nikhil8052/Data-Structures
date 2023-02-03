# series 1 1 2 3 4 9 8 27 16 81 32 243 64 
# you are given the interger number print the series upto the given number


def printSeries(n):
    i,j=(-1,-1)
    arr=[]
    for num in range (1, n+1 ):
        if(num%2==1):
            i=i+1
            arr.append(pow(2,i)) 
        else : 
            j=j+1
            arr.append(pow(3,j))  
    return arr 

    

n=int(input(" Enter the number "))
print(printSeries(n))


# Enter the number 20
# [1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187, 256, 6561, 512, 19683]
# Completed 