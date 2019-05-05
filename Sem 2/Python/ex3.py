"""Exercise - Tuple"""

myTuple = ('Hello',2.4,5,[9,8,7],5)

#Displaying myTuple:
print(myTuple)

#Indexing:
print(myTuple[0])

#Negative Indexing:
print("Last element of tuple:",myTuple[-1])

#Slicing:
print(myTuple[0:3])

#Changing nested list elements in myTuple:
myTuple[3][1] = 10
print(myTuple)

#Testing index() function of tuple:
print("Index of 2.4 in tuple:",myTuple.index(2.4))

#Testing count() function of tuple:
print("Count of 5 in tuple:",myTuple.count(5))
