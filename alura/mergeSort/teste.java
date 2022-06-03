public static Nota[] junta(Nota[] notas1, Nota[] notas2) {
  int tamanho = notas1.length + notas2.length;
  Nota resultado[] = new Nota[tamanho];
  int atual = 0;
  int atual1 = 0;
  int atual2 = 0;
  while(atual1 < notas1.length && atual2 < notas2.length) {
    Nota nota1 = notas1[atual1];
    Nota nota2 = notas2[atual2];
    if(nota1.getValor() < nota2.getValor()) {
      resultado[atual] = nota1;
      atual1++;
    } else {
      resultado[atual] = nota2;
      atual2++;
    }
    atual++;
  }
  return resultado;
}

while(atual1 < notas1.length) {
  resultado[atual] = notas1[atual1];
  atual1++;
  atual++;
}





//string

while(atual1 < meio && atual2 < termino) {
    String nome1 = nomes[atual1];
    String nome2 = nomes[atual2];
    if(nome1.compareTo(nome2) < 0) {
        resultado[atual] = nome1;
        atual1++;
    } else {
        resultado[atual] = nome2;
        atual2++;
    }
    atual++;
}

private static void intercala(String[] nomes, int inicio, int meio, int termino) {

    int total = termino - inicio;
    String[] resultado = new String[total];
    int atual = 0;
    int atual1 = inicio;
    int atual2 = meio;

    while(atual1 < meio && atual2 < termino) {
        String nome1 = nomes[atual1];
        String nome2 = nomes[atual2];
        if(nome1.compareTo(nome2) < 0) {
            resultado[atual] = nome1;
            atual1++;
        } else {
            resultado[atual] = nome2;
            atual2++;
        }
        atual++;
    }

    while(atual1 < meio) {
        resultado[atual] = nomes[atual1];
    atual1++;
    atual++;
    }

    while(atual2 < termino) {
        resultado[atual] = nomes[atual2];
    atual2++;
    atual++;
    }

    for (int contador = 0; contador < atual; contador++) {
        nomes[inicio + contador] = resultado[contador];
    }
}

private static void ordena(Nota[] notas, int inicio, int termino) {

  int quantidade = termino - inicio;
  if(quantidade > 1) {
    int meio = (inicio + termino) / 2;
    ordena(notas, inicio, meio);
    ordena(notas, meio, termino);
    intercala(notas, inicio, meio, termino);
  }
}

private static void ordena(String[] nomes, int inicio, int termino) {

  int quantidade = termino - inicio;
  if(quantidade > 1) {
    int meio = (termino + inicio) / 2;
    ordena(nomes, inicio, meio);
    ordena(nomes, meio, termino);
    intercala(nomes, inicio, meio, termino);
  }
}


private static void buscaMenores(Nota busca, Nota[] notas) {

  int menores = 0;
  for(int atual = 0; atual < notas.length; atual++) {
    Nota nota = notas[atual];
    if(nota.getValor() < busca.getValor()) {
      menores++;
    }
  }
  return menores;
}