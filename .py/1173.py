V = int(input())

N = [0] * 10

for i in range(10):
    if i == 0:
        N[i] = V
    else:
        N[i] = N[i-1] * 2

for i in range(10):
    print(f"N[{i}] = {N[i]}")
