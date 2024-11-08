from TD5_2_func import *
count=int(input("How many numbers do you want to add?: "))
txt="What numbers do you want to add?: "
for i in range(count):
    algList=listFiller(i, txt)
globalList()
for i in range(len(algList)):
    countNega, countPosi=negapi(i)
print(f"\nThere's {countNega} negative numbers and {countPosi} positive numbers")