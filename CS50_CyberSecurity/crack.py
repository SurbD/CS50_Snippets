from string import ascii_letters, digits, punctuation
from itertools import product

# 8-character passcode will have 6,095,689,385,410,816

for passcode in product(ascii_letters + digits + punctuation, repeat=4):
    print(*passcode)
