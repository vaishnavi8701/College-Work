#Basic inheritance classes:

class base:
    def __init__(self,a,b):
        self.a = a
        self.b = b

class derived(base):
    def addNumbers(self):
        self.add = self.a + self.b
        return self.add
    def subNumbers(self):
        self.sub = self.a - self.b
        return self.sub

print("Basic Inheritance Program:")
ob = derived(5,2)
print("A =",ob.a)
print("B =",ob.b)
Sum = ob.addNumbers()
print("Sum is",Sum)
diff = ob.subNumbers()
print("Difference is",diff)

#Multiple Inheritance classes:

class student:
    def getDetails(self):
        self.name = input("Enter your name here: ")
        self.dept = input("Enter your department here: ")
        self.rollno = input("Enter your roll number here: ")
        self.rollno = int(self.rollno)
        
class marks:
    mark = [0,0,0,0,0]
    def getMarks(self):
        for i in range(5):
            self.mark[i] = int(input("Enter Subject " + str(i+1) + " Mark: "))
    def totalMarks(self):
        self.total = 0
        for i in range(5):
            self.total = self.total + self.mark[i]
        self.avg = self.total / 5

class cms(student,marks):
    def showDetails(self):
        print("\nStudent Details:-")
        print("Name:",self.name)
        print("Roll number:",self.rollno)
        print("Department:",self.dept)
        print("Total Marks:",self.total)
        print("Percentage:",self.avg)

print("\nMultiple Inheritance program")
ob = cms()
ob.getDetails()
ob.getMarks()
ob.totalMarks()
ob.showDetails()
