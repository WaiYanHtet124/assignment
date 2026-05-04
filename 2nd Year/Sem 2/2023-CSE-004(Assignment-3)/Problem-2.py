def Secret_Number_Generator(num):
    sum=0
    while num>0:
        digit=num%10
        num//=10
        if digit%2==0:
            digit+=5
        else: digit+=3

        sum+=digit
    
    return sum
count=0
print("      Secret numbers from 100 to 200     ")
for i in range(99,201):
  if count%15!=0:
   print(Secret_Number_Generator(i),end=" ")
  else:print()
  count+=1