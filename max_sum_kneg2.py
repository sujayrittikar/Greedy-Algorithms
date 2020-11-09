def sol(a, k):
	while k>0:
		a = sorted(a)
		if a[0]==0:
			k = 0
		else:
			a[0] = (-1)*a[0]
			k-=1
	return sum(a)
	
a = [-2, 0, 5, -1, 2]
print(sol(a, 4))
