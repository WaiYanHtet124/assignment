def discount_generator(discount_type):
    if discount_type=='percentage':
      def percentage_discount(price):
       return price-(price*0.1)
      return percentage_discount
    elif discount_type=='flat':
      def flat_discount(price):
       return price-50
      return flat_discount
    elif discount_type=='buy1_get1':
      def buy1_get1(price):
       return price/2
      return buy1_get1
    else :
     def no_discount(price):
      return price
     return no_discount

price=int(input('Enter price: '))
discount_type=input('Enter discount type: ')
final_price=discount_generator(discount_type)
print(f"Final price: {final_price(price)}")