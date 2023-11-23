# Projeto final

## O que era inicialmente:

A primeira versão continha somente algumas melhorias de performânce ao paralelizar a série de Taylor.
Porém, era possível imprimir somente 50 casas decimais, não sendo possível calcular mais.

## O que foi melhorado:

Agora, após melhorias no código, é possível imprimir 10000 casas decimais.
Entretanto, há um problema que é a demora para receber o resultado dependendo da máquina em que o código for utilizado.
A máquina que foi utilizada para fazer os testes, é a máquina ```t2.medium``` da AWS.

## Como utilizar o código:

Basta baixar o arquivo fonte e compilar. É importante notar que é necessário utilizar um computador com sistema operacional Linux, pois utiliza bibliotecas e APIs que outros Sistemas Operacionais não possuem suporte.

Após baixar o código fonte, é preciso compilar utilizando a seguinte linha de comando no terminal:
```gcc -lgmp -fopenmp <nome_do_arquivo.c> -o <nome_do_executavel.out>```

Com o código compilado, basta executá-lo da seguinte forma:
```./<nome_do_executavel.out> <máximo fatorial>```

# ATENÇÃO:

O tempo de execução do código varia dependendo da máquina em que estiver rodando.

