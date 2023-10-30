## Acesso à região crítica

Foram utilizadas duas versões para o acesso à região crítica do programa.
Uma das maneiras foi utilizar o ``` # pragma omp critical ``` e ``` # pragma omp parallel for num_threads(threads) reduction(+:sum) ```

A versão que obteve o melhor desempenho foi a versão com ``` reduction ```, obtendo um tempo menor que a versão com ``` critical ```

Em relação ao que diz respeito à precisão do programa, ambos possuem uma precisão semelehante, variando somente o tempo de execução
_Vide provas_
