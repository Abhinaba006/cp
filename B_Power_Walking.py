t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    setA = set(a)
    xtra = 0
    for k in range(1, n+1): 
        if k<len(setA):
            print(len(setA), end=' ')
        else:
            print(len(setA)+xtra, end=' ')
            xtra += 1
    print()