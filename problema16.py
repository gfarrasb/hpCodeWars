#!/usr/bin/python3.5
#
# Solucio al problema 16 . HpCodeWars 2017.

a=int(input())

#Array amb els numeros
d=[]

#Construcció de la llista
for x in range(2, a+1):
	d.append(x)

ininumber=0
#primer element
for x in d:
	pr=d[ininumber]
	pos=ininumber
	l=len(d)
	while pos < l:
		pos=pos+pr
		if pos<l:
			d[pos]=-1		

	
	#extrec elements marcats amb -1
	i=0
	while (i<len(d)):
		if d[i]==-1:	
			d.pop(i)
		i=i+1
	
	ininumber=ininumber+1


print("1", end=" ")
for x in d:
	print (x, end=" ")
print()




