t = int(input())

ans = list()

for i in range(0,t,1):
    num = int(input())
    k=0

    if (num >= 1 and num <= 9):
        print(1)
        print(num)
    else:
        while True:
            r = num%10
            j = pow(10,k)*int(r)
            #print("**",j,"**")
            if j != 0:
                ans.append(int(j))
            num /= 10
            k+=1
            if (num >= 1 and num < 10):
                j = pow(10,k)*int(num)
                #print("##",j,"##")
                ans.append(int(j))
                break
            
    if len(ans) == 0:
        continue
    else:
        print(len(ans))
        for item in ans:
            print(item,end=' ')

    ans.clear()
    print(end='\n')
    
