from cs50 import get_int

# Prompting user for a positive integer and an integer between 0 and 8
while True:
    height = get_int("To draw a pyramid please enter a number between 1 and 8: ")
    if height > 0 and height < 9:
        break

# Prints number of lines
for lines in range(height):
    # Prints number of spaces
    for space in range(height - lines - 1):
        print(" ", end="")

    # Prints hashes
    for hashes in range(lines + 1):
        print("#", end="")

    # Prints new line
    print("")
