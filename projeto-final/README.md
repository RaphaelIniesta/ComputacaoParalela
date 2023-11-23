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


# Speedup:

O teste foi feito utilizando o máximo fatorial de 1000

Tempo serial: 1.082
Tempo paralelo: 0.404

$$
S = \frac{Tempo \ serial}{Tempo \ paralelo}
$$

$$
S = \frac{1.082}{0.040}
$$

$$
S = 2,678
$$

O speedup da versão serial para a versão paralela foi de 2,678
