#!/usr/bin/python3.5
#
# Solucio al problema 17 . HpCodeWars 2017.
import math

dia=int(input())
b=input().split(":")
w=int(b[0])
h=int(b[1])
wedg=float(input())

f=math.sqrt((dia*2.54)**2 / (w**2 + h**2))
wf = w*f + wedg * 2
hf = h*f + wedg * 2
print("%.1f" % wf, end="")
print("x",end="")
print("%.1f" % hf, end="")
print("cm")













