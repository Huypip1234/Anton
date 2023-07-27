def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True
primes = []
limit = 1000000
for number in range(2, limit):
    if is_prime(number):
        primes.append(number)
prime_tuple = tuple(primes)
print(prime_tuple)