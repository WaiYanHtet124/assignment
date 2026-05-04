def percentage_discount(price):
    return price-(price*0.1)

def flat_discount(price):
    return price-50

def buy1_get1(price):
    return price/2

def get_discount_function(discount_type):
    if discount_type=='percentage':
        return percentage_discount
    elif discount_type=='flat':
        return flat_discount
    elif discount_type=='buy1_get1':
        return buy1_get1
    else: return print('Invalid discount type.')

def apply_discount(discount_func,price):
    return discount_func(price)

price=int(input("Enter the price : "))
discount_type=input("Enter discount type:")
discount_func=get_discount_function(discount_type)
final_price=apply_discount(discount_func,price)
print(f"Final price : {final_price}")