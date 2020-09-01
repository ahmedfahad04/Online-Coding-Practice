
def is_prime(a):
    i = 2
    while(i*i<=a):
        if(a%i == 0):
            return 1
        i+=1
    
    return 0

t  = int(input())
for i in range(0,t,1):
    n,k = list(map(int,input().split()))
    if(n == k): print("1")
    elif(is_prime(n) == 0 or k == 1): print(n)
    else:
        x = k
        while(x>1):
            if(n%x == 0):
                print(n/x,end='\n')
                break
