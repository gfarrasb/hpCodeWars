#!/usr/bin/python2.7
# Solució al problema: www.hpcodewars.org/past/cw17/problems/Prob05--Pangram.pdf
phrase = raw_input("")
phrase=phrase.upper()

alphabet = {"A": 0, "B": 0, "C": 0, "D": 0, "E": 0, "F": 0, "G": 0, "H": 0, "I": 0, "J": 0, "K": 0, "L": 0, "M": 0, "O": 0, "P": 0, "Q": 0, "R":0 , "S": 0, "T": 0, "U":0 , "V":0 , "W" :0, "X": 0 , "Y": 0, "Z":0 }

for i in range(0, len(phrase)):
	if phrase[i] in alphabet:
		alphabet[phrase[i]]+=1

perfect=True
pangram=True
for key in alphabet:
    if (alphabet[key]!=1):
		perfect=False
    if (alphabet[key]==0):
	    	pangram=False

if ((perfect==True) and (pangram==True)):
	print ("PERFECT: " + phrase)

if ((perfect==False) and (pangram==True)):
	print ("PANGRAM: " + phrase)
	
if ((perfect==False) and (pangram==False)):
	print ("NEITHER: " + phrase)




