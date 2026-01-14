from random import randrange, seed
import subprocess


def ranpt():
    plaintext = []
    for _ in range(16):
        plaintext.append("{:02X}".format(randrange(0, 256)))
    return plaintext

seed(42)
plainst = ranpt()
out = subprocess.check_output(["./printrounds", "".join(plainst)])
with open("rounds.trace", "wb") as f:
    f.write(out)

