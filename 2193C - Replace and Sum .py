t = int(input())

for _ in range(t):
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    
    for k in range(n-1, -1, -1):
        if k < n-1:
            a[k] = max(a[k], a[k+1], b[k])
        else:
            a[k] = max(a[k], b[k])


    prefix = [0]*(n+1)
    for i in range(n):
        prefix[i+1] = prefix[i] + a[i]

    for _ in range(q):
        l, r = map(int, input().split())
        print(prefix[r] - prefix[l-1], end=" ")
    print()