import math

#Sum of 2 number
def sum(a, b):
    return a+b

#Factorial
def fact(n): 
    k = 1
    for i in range(1, n):
        k = k*i
    return k
#
print("Sum = ", sum(3,5))

print("factorial of n = ", fact(10))