def is_prime(n):
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    mid = int(n ** 0.5) + 1
    for i in range(3, mid, 2):
        if n % i == 0:
            return False
    return True

print(is_prime(2))
print(is_prime(3))
print(is_prime(4))