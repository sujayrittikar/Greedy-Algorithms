n = int(input("Enter the length of array: "))
a = list(map(int, input("Enter the array: ").split()))

a = sorted(a)

s = sum([a[i]*i for i in range(n)])
print(s)
