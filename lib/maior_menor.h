int maior_valor(int array[], int qtd)                   // qtd = quantidade ou quantidade de elementos, maior_valor é a função
{
    int m = array[0];
    // i é igual a 1 pq se fosse 0 ele ia se comparar com ele mesmo e perderiamos desempenho
    int i = 1;  
    // indece vai do 0 ao ultimo elemento e o ultimo elemento sempre vai ser qtd-1                
    while (i <= qtd-1)                     
    {
        if (array[i] > m) //se a posição 1 for maior que 0
        {
            m = array[i]; // posição 0 recebe o valor da posição 1
        }
        i++;   //ira incrementar +1 quando sair do laço do if
    }
    return m;
}

int menor_valor(int array[], int qtd)                   // qtd = quantidade ou quantidade de elementos
{
    int m = array[0];    // int m vai funcionar como posição 0
    // i é igual a 1 pq se fosse 0 ele ia se comparar com ele mesmo e perderiamos desempenho
    int i = 1;  
    // indece vai do 0 ao ultimo elemento e o ultimo elemento sempre vai ser qtd-1                
    while (i <= qtd-1)                     
    {
        if (array[i] < m) //se a posição 1 for menor que 0
        {
            m = array[i]; // posição 0 recebe o valor da posição 1
        }
        i++;   //ira incrementar +1 quando sair do laço do if
    }
    return m;
}