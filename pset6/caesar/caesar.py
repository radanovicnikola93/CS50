from cs50 import get_string
import sys

def main():

    # The user must provide just 2 command arguments. Otherwhise the program will end immediately.
    while len(sys.argv) != 2:
        print("Usage: python caesar.py KEY")
        exit(1)

    # Only integers allowed
    if sys.argv[1].isdigit() == False:
        print("Usage: python caesar.py KEY(only integers)")
        exit(2)

    key = int(sys.argv[1])

    # Prompting user for plaintext
    plaintext = get_string("Enter plaintext: ")

    print("ciphertext: ", end="")
    for c in plaintext:
        if c.islower():
            print(chr((ord(c) - ord('a') + key) % 26 + ord('a')), end="")
        elif c.isupper():
            print(chr((ord(c) - ord('A') + key) % 26 + ord('A')), end="")
        else:
            print(c, end="")

    print()

if __name__ == "__main__":
    main()
