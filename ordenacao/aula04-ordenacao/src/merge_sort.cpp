void ordenar(int v[], int esquerda, int direita){
  if(esquerda < direita){
    int meio = (esquerda + direita)/2;
    ordenar(v, esquerda, meio);
    ordenar(v, meio+1, direita);
    intercalar(v, esquerda, meio+1, direita);
  }
}