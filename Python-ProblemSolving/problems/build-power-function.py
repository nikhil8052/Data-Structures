
# Build the own power function  

from math import ceil 

def getPower(number , power ):
    if(power ==0 ):
        return 1 
    if(power==1 or power==0 ):
        return number 
    return getPower(number,ceil(power/2)) * getPower(number , int(power/2))
     

    
n=int(input(" Enter the Number "))
p=int(input(" Enter the Power "))
print(getPower(n,p))


# Enter the Number 2
# Enter the Power 6
# 64

# Completed 