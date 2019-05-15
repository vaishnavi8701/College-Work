def factorial(x):
    if x == 1:
        return x
    else:
        return (x * factorial(x-1))

def fibo(n):
    n1 = 0
    n2 = 1
    sumN = 0
    count = 0
    if n > 0:
        while (count < n):
            print(n1,end=",")
            sumN = n1 + n2
            n1 = n2
            n2 = sumN
            count+=1
    else:
        print("Please enter a positive number.")


def sq2(n):
    return n*n

