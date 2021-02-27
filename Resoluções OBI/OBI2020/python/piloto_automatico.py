# ler a entrada
a = int(input())
b = int(input())
c = int(input())

# variáveis que representam as diferenças entre as posições dos carros
diff1 = b-a
diff2 = c-b

if diff1 < diff2: # se o carro B está mais perto do A do que do C
    print(1)
elif diff1 > diff2: # se o carro B está mais perto do C do que do A
    print(-1)
else: # se o carro B está no exato meio entre os outros dois carros
    print(0)
