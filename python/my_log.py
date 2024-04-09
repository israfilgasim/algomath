import math

def ln(x):
    total = 0
    for n in range(1, 1000,2):
        total += (1/n) * ((x-1)/(x+1))**n
    return 2 * total

print(ln(2)) # 0.6931471805599451
print(math.log(2)) # 0.6931471805599453
print(ln(3)) # 1.0986122886681090
print(math.log(3)) # 1.0986122886681098
print(ln(10)) # 2.3025850929940455
print(math.log(10)) # 2.302585092994046