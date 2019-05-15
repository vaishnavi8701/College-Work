print("Running simple calculation package")

from simpleCalculation.simpleCal import *

a = int(input("Enter the value of A here: "))
b = int(input("Enter the value of B here: "))

print("A + B =",add(a,b))
print("A - B =",sub(a,b))
print("A * B =",multiply(a,b))
print("A / B =",divide(a,b))
print("A**B =",power(a,b))

print("Running complex calculation package")

from advancedCalculation.complexCal import *

num = int(input("Enter a number here: "))
print("Fibonacci series of ",num," terms are")
print(fibo(num),"\n")
print(num,"! =",factorial(num))
print("Square of ",num," is",sq2(num))
