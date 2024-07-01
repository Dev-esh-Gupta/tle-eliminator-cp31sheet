if __name__ == "__main__":
    t = int(input())
    while t != 0:
        n, m = map(int, input().split())
        x = input()
        s = input()

        count = 0
        flag = False
        while count == 0 or len(x) <= 26*m:
            if s in x:
                flag = True
                break
            count += 1
            x += x
        
        if flag == True:
            print(count)
        else:
            print(-1)

        t -= 1

        