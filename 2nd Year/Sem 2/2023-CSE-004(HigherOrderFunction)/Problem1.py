def percentage_discount(price):
    return price-(price*0.1)
def flat_discount(price):
    return price-50
def buy1_get1(price):
    return price/2

def apply_discount(function,price):
       return function(price)    

print(apply_discount(percentage_discount,1000))
print(apply_discount(flat_discount,1000))
print("Buy 1 Get 1 : ",apply_discount(buy1_get1,1000))