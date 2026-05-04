data_list=[34,56,28,79]
print("Original list:  ",end="")
for data in data_list:
    print(data,end=" ")
print()
data_list[2]=76
print("After replacement: ",end="")
for data in data_list:
    print(data,end=" ")
print()
data_list.sort()
data_list.reverse()
print("List decending:  ",end="")
for data in data_list:
    print(data,end=" ")
print()
print("Second element:  ",data_list[1])
data_list.reverse()
data_list.remove(79)
print("Final list : ",end="")
for data in data_list:
    print(data,end=" ")