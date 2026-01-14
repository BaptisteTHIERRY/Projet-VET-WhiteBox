#!/usr/bin/env python3
import os
import subprocess
import random
import struct

PIN = "./TracerPIN/pin-3.30-98830-g1d7b601b3-gcc-linux/pin"
TRACER_SO = "./TracerPIN/obj-intel64/Tracer.so"

TARGET = "./wb_challenge"

BLOCKSIZE = 16

TRACE_KEYWORD = "stack_w1"     # doit correspondre à findbin("stack_w1")

OUTPUT_DIR = "./traces_bin"
os.makedirs(OUTPUT_DIR, exist_ok=True)

# --------------------------------------------------------------------
# Generate a random AES plaintext
# --------------------------------------------------------------------
def random_plaintext():
    return [random.randint(0, 255) for _ in range(BLOCKSIZE)]

# --------------------------------------------------------------------
# Run PIN and capture binary trace produced by Tracer.so
# --------------------------------------------------------------------
def run_pin(plaintext, idx):
    args_hex = ["%02x" % b for b in plaintext]

    cmd = [
        PIN,
        "-t", TRACER_SO,
        "--",
        TARGET
    ] + args_hex

    print("Running:", " ".join(cmd))

    # Run process and capture raw trace as bytes
    proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE)

    stdout, stderr = proc.communicate()

    print("STDOUT:", stdout.decode(errors="ignore"))
    print("STDERR:", stderr.decode(errors="ignore"))

    # Extract block input/output from stdout
    # wb_challenge prints:
    # INPUT:  <hex>
    # OUTPUT: <hex>
    ib = None
    ob = None

    for line in stdout.decode().splitlines():
        if line.startswith("INPUT:"):
            ib = "".join(line.split()[1:])
        if line.startswith("OUTPUT:"):
            ob = "".join(line.split()[1:])

    if ib is None: ib = "na"
    if ob is None: ob = "na"

    # Filename expected by findbin():
    outname = f"{OUTPUT_DIR}/trace_{TRACE_KEYWORD}_{idx}_{ib}_{ob}.bin"

    # Save raw trace data
    with open(outname, "wb") as f:
        f.write(stderr)   # TracerPIN sends instruction trace to stderr

    print("Wrote:", outname)


if __name__ == "__main__":
    N = 1000  # number of traces to generate

    for i in range(N):
        pt = random_plaintext()
        run_pin(pt, i)

