# build target program as dynamically library
# call all the symbol starting with test_
import os
import sys
cfile=sys.argv[1]
cfilename_without_extension=cfile.split(".")[0]
command="gcc {} -c -fPIC && gcc {}.o -shared -o lib{}.so".format(cfile, cfilename_without_extension, cfilename_without_extension)

print(command)
os.system(command)

from ctypes import *
libc = CDLL("./lib{}.so".format(cfilename_without_extension))

# OSError: ./libeuler_problem_17.so: undefined symbol: _ZNSt8ios_base4InitD1Ev

