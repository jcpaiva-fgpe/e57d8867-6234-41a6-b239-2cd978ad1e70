def ascii_value(c):
    if(len(c) == 1):
        ascii = ord(c)
        output = f"{ascii}"
    else:
        output = f"Wrong Input!"

    return(output)
