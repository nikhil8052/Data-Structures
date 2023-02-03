from math import sqrt  

def checkPerfectSquare(n):
    num = sqrt(n)
    if num*num == n :
        return " Valid "
    else: 
        return " Invalid "


    
n=int(input(" Enter the Number "))
print(checkPerfectSquare(n))


#  Enter the Number 625
#  Valid 

# Completed 