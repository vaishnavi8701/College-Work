def division(function):
    def divideNumbers(a,b):
        print("A =",a)
        print("B =",b)

        if (b==0):
            print("ZeroError: Division cannot be possible")
            return b
        print("A/B is",function(a,b))
    return divideNumbers

def result(x,y):
    return x/y

ob = division(result)
ob(8,2)
