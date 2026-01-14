import os

trace_dir = "."
keyword = "stack_w1"

files = [f for f in os.listdir(trace_dir) if keyword in f]
print("Fichiers trouvés :", files)
print("Nombre :", len(files))

