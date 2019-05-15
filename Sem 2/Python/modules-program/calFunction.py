def add(x,y):
    return x+y

def sub(x,y):
    return x-y

def multiply(x,y):
    return x*y

def divide(x,y):
    return x/y

def pow(x,y):
    return x**y

def factorial(x):
    if x == 1:
        return x
    else:
        return (x * factorial(x-1))
