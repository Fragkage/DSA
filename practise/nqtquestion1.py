i = int(input())

def cal_price(i):
    if i<=2:
        price = 100*i
    elif i<=5:
        k = i - 2
        price = 2*100 + k*50
    else:
        k = i-5
        price = 2*100 + 3*50 + k*20
    print(price)

cal_price(i)