'''
snake 1
water -1.    
gun 0
'''

import random 


computer= random.choice([-1, 0, 1])
youstr=input("Enter your choice: " )
youdict={"s":1, "w":-1, "g":0}
reversedict={1:"snake", -1:"water", 0:"gun"}
you=youdict[youstr]

print(f"you chose {reversedict[you]} \ncomputer chose {reversedict[computer]}\n")

if(computer==you):
    print("Draw")
else:
    if(computer-you==-2 or computer-you==1):
        print("You win")
    else:
        print("You Lose")


'''
win == -2 or 1      when computer-you=-2 or 1 you wins
Lose == -1 or 2     when computer-you=2 or -1 you lose
'''