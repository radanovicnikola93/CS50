from nltk.tokenize import sent_tokenize


def lines(a, b):
    """Return lines in both a and b"""

    lines_a = set(a.split("\n"))
    lines_b = set(b.split("\n"))

    return lines_a & lines_b


def sentences(a, b):
    """Return sentences in both a and b"""

    sentences_a = set(sent_tokenize(a))
    sentences_b = set(sent_tokenize(b))

    return sentences_a & sentences_b


def get_substrings(str, n):
    """Gives an empty list and stores data in it"""

    list_substrings = []

    for i in range(len(str) - n + 1):
        list_substrings.append(str[i:i + n])

    return list_substrings


def substrings(a, b, n):
    """Return substrings of length n in both a and b"""

    substrings_a = set(get_substrings(a, n))
    substrings_b = set(get_substrings(b, n))

    return substrings_a & substrings_b