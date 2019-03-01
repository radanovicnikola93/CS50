from cs50 import get_float   # needed for get_float

# initializing coins to count from 0
coins = 0

# Prompts user for a positive float number
while True:
    dollars = get_float("Change owed: ")
    if dollars > 0:
        break

# Rounding dollars to cents
cents = round(dollars * 100)

# QUARTERS: checks if cents are divided with quarters. If not it moves to dimes.
while cents >= 25:
    coins += 1
    cents -= 25
    if cents < 25:
        break

# DIME: checks if cents are divided with dimes. If not it moves to pickels.
while cents >= 10:
    coins += 1
    cents -= 10
    if cents < 10:
        break

# PICKELS: checks if cents are divided with pickels. If not it moves to pennies.
while cents >= 5:
    coins += 1
    cents -= 5
    if cents < 5:
        break

# PENNY: checks if cents are divided with pennies
while cents >= 1:
    coins += 1
    cents -= 1
    if cents < 1:
        break

# Prints number of coins used to give the required change
print(coins)
