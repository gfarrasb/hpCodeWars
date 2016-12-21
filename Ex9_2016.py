#Exercici 9 HP CodeWars Barcelona 2016
#Solució amb llistes

entrada=""
sortida=[]

while entrada!=['.']:
    entrada=input().split()
    if entrada!=['.']:
        v=(int(entrada[1])/int(entrada[2]))
        sortida.append([int(v),entrada[0]])

for i in sorted(sortida):
    print(i[1],i[0])

    
    


