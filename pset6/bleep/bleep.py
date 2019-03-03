from cs50 import get_string
from sys import argv

def main():

    # Only 2 command line arguments accepted
    if len(argv) != 2:
        print("Usage: python bleep.py dictionary")
        exit(1)

    # Opens file and close automatically after done
    with open('banned.txt', 'r') as file:
        # Reads the file
        data = file.read()
        # Strip the data in file
        data = data.strip()
        # Split the data in file
        data = data.split()

        # Prompting user for message
        message = get_string("What message would you like to censor?\n")
        message = message.split()

        # Iritates over words in message
        for word in message:
            count = 0
            # Iritates over words in data
            for badWord in data:

                # If the bad word is found increment the count
                if word in badWord:
                    n = len(badWord)
                    count += 1

            # If true print censored words
            if count == 1:
                print(badWord.replace(badWord, "*" * n), end=" ")
            else:
                print(word, end=" ")

        print()

if __name__ == "__main__":
    main()
