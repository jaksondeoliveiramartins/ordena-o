//Quero criar uma lista de 5 alunos que começa de A até Z
//[Paulo,Pedro,Ana,joão,Carlos] isso se chama uma array
#include <stdio.h>
#include <string.h>
int main(){
  char alunos [5][10]= {"Paulo","Pedro","Ana","João","Carlos"};
  //variaveis auxiliares para o processo de ordenaçao.
  
  char temp[10];
  int i, j;
  //Decrescente (Z-A)
  //comparar os nomes
  for(i=0; i<5; i++){
    //trocar de lugar se o nome for maior
    // repedir o processo ate o ultimo nome
    for (j = i + 1; j < 5; j++){


      if (strcmp(alunos[i], alunos[j]) < 0){
        strcpy(temp, alunos[i]);
        strcpy(alunos[i], alunos[j]);
        strcpy(alunos[j], temp);
      }

    }

  }
  printf("Lista de alunos em ordem decrescente (Z-A):\n");
  for(i=0; i<5; i++){
    printf("%s\n", alunos[i]);

  }



  return  0;
}
