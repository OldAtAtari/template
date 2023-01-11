import sys
import json

fname=str(sys.argv[len(sys.argv)-1])
with open(fname+'.lnx', 'rb') as f:
   raw = f.read()
data = raw
lyx = data[64:] + bytearray([255] * (1024*256 - len(data) + 64))
with open(fname+'.lyx', 'wb') as f:
    f.write(lyx)
