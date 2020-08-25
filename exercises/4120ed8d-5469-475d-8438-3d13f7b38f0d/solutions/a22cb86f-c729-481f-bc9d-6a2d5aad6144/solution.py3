def american(meters):
    miles = meters / 1609.344
    feet = meters * 3.280840
    inches = meters * 39.37008
    yards = meters * 1.093613
    output = (f"{miles}\n{yards}\n{feet}\n{inches}")
    return output
