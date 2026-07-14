numero = int(input('digite um numero para saber se ele é par ou impar: '))
if numero % 2 == 0:
    resultado = 'par'
else:
    resultado = 'impar'
print('o numero {} é {}'.format(numero,resultado))
