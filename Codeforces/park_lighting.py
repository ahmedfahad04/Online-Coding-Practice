t = int(input())

for i in range(0,t,1):
    n,m = list(map(int,input().split()))
    k = n*m
    if(k%2 == 0): print(int(k/2))
    else: print(int(k/2+1))