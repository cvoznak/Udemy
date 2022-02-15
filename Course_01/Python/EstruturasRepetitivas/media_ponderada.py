n = int(input("Quantos números você vai digitar? "))

for i in range(0, n):
    print("Digite três números:")
    a = float(input())
    b = float(input())
    c = float(input())
    print(f"MÉDIA = {(a * 2 + b * 3 + c * 5) / 10:.1f}")