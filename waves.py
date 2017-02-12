# Problema 5. Any 2011. CodeWars.
#!/usr/bin/python3.4
ent=input("")

i=0
j=0
jmax=jmin=j
Matrix =  {}
ant = ent[0]
Matrix[0,0]=ent[0]

for c in ent[1:]:
	if ord(ant)==ord(c):
		i=i+1

	if ord(ant)<ord(c):
		i=i+1
		j=j+1
		if j>jmax:
			jmax=j

	if ord(ant)>ord(c):
		i=i+1
		j=j-1
		if j<jmin:
			jmin=j

	Matrix[i,j]=c
	ant = c

for j in range(jmax,jmin-1,-1):
	for i in range(len(ent)):
		if (i,j) in Matrix:
			print (Matrix[i,j], end='')
		else:
			print(" ", end='')
	print("")






