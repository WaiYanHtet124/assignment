def Kaprekar(num):
 square=1
 sum=0
 square=num*num
 N=str(square)
 n=len(N)
 n1=N[:n//2]
 n2=N[n//2:]
 if n1:
  num1=int(n1)
 else: num1=0
 if n2:
  num2=int(n2)
 else: num2=0
 sum=num1+num2
 if sum==num:
  return print(sum)
print("Kaprekar numbers below 1000:")
i=1
while i<1000:
 Kaprekar(i)
 i+=1