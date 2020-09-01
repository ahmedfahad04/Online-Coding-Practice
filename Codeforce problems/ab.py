t = int(input())

for i in range(0,t,1):
    count = 1
    a,b = list(map(int,input().split()))

    if(a==b): print(0)
    else:
        if(a>b): x = a/b
        else: x = b/a

        while True:
            count += 1
            if(x==8 or x==4 or x==2):
                print(count-1)
                break

            if(x%8 == 0): 
                x = x/8

            if(x==1 or x==3 or x==5 or x==6 or x==7 or x==9):
                print(-1)
                break
                    

