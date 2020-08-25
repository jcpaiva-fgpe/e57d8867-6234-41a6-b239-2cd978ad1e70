for x in word:
    if x in vowels or x in specials:
        robber_word += x
    else:
        robber_word = robber_word + x + "o" + x

