# Análise de complexidade de algoritmos

A análise de complexidade de algoritmos pode partir de dois aspectos:
- Complexidade de espaço (medida por declarações de variáveis)
- Complexidade de tempo   (medida por quantidade de operações elementares)
Em geral, quando não especificamos, falamos da complexidade de tempo, que é a mais relevante

Exemplo:

~~~~python

def inverter_lista(lista):
    tamanho = len(lista)
    limite = tamanho/2
    for i in range(limite):
        aux = lista[i]
        lista[i] = lista[n-i]
        lista[tamanho-i] = aux

~~~~
Dado que N é o tamanho da lista, nesse caso, a complexidade de tempo é 4+N e a complexidade de tempo é 2+3*(N/2)