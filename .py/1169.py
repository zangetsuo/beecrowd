def calculate_wheat(squares):
    grains = 2**squares - 1  # Total grains is 2^n - 1
    kg = (grains / 12) / 1000  # Convert grains to kg
    return int(kg)  # Return as integer (floor value)

n = int(input())  # Number of test cases

for _ in range(n):
    x = int(input())  # Number of squares
    result = calculate_wheat(x)
    print(f"{result} kg")
