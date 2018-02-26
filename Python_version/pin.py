import random

length = input("Please enter desired pin length:\n")


rBase = "1"
rMax = "9"

for i in range(0, int(length)-1):
    rBase += "0"
    rMax += "9"

pin = random.randint(int(rBase),int(rMax))
print("Your new pin is: ",pin)

