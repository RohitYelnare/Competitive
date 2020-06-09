for x in range(int(input())):
    num = int(input())
    while num>=1:
        if num==1:
            print('YES')
            break
        elif num<1:
            print('NO')
            break
        if num%2==0:
            num = num//2
        elif num%2!=0:
            num = 3*num + 1
