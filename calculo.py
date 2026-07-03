#variaveis para descobrir o numero
numero = int(input('Digite um número para saber qual é o dobro, triplo, quíntuplo e a raíz quadrada: '))

#variaveis de multiplicação
dobro = numero * 2
triplo = numero * 3
quintuplo = numero * 5
raiz = numero ** (1/2)

#imprimir resultado
print('dobro: {} \n triplo: {} \n quíntuplo: {} \n raíz quadrada: {:.4}'.format(dobro, triplo, quintuplo, raiz))
