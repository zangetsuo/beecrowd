# Read 20 integer numbers into array N
N = [int(input()) for _ in range(20)]

# Swap elements
for i in range(10):
    N[i], N[19-i] = N[19-i], N[i]

# Print the modified array
for i in range(20):
    print(f"N[{i}] = {N[i]}")
