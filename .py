# 'a' is a variable which stores the value of the positive integer whose square root we are finding.
a=int(input("Enter any positive integer : "))
def square_root(x):
    # 'i' is the variable of iteration.
    for i in range(0,x//2,1):
        if(i*i==x):
            # 'r' is a variable which stores the value of the square root of given number.
            r=i
            print("The square root of",x,"is",r,".")
            break
square_root(a)
