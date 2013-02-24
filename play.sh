#!/bin/sh

clang -o noise noise.c && ./noise | sox -traw -r44100 -b16 -e unsigned-integer - -tcoreaudio
