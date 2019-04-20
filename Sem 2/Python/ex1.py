class student:
    def getDetails(self):
        self.name = input("Enter your name here: ")
        self.dept = input("Enter your department here: ")
        self.rollno = int(input("Enter your roll number here: "))
    def showDetails(self):
        print("Student Details:-")
        print("Namee:",self.name)
        print("Roll number:",self.rollno)
        print("Department:",self.dept)

ob = student()
ob.getDetails()
ob.showDetails()
