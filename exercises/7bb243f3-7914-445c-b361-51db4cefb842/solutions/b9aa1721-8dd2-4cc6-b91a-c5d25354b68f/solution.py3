def is_isogram(string):
    string = string.lower()
    new_string = [x for x in string if x.isalpha()]
    return len(new_string) == len(set(new_string))
