def my_sqrt(x):
    guess1 = 0
    guess2 = 1
    x0 = 10
    guess = 0
    
    while int(guess1*1000)/1000 != int(guess2*1000)/1000:
        guess = x0 - (((x0 ** 2) - x)/(2 * x0))
        guess1 = guess2
        guess2 = guess
        x0 = guess

    return int(guess*1000)/1000

