#include <stdio.h>

    int main()
    {
        float nota1,nota2,nota3,nota4,rs;
        printf("qual foi a nota do aluno no primeiro bimestre?\n");
            scanf("%f" ,&nota1);

        printf("qual foi a nota do aluno no segundo bimestre?\n");
            scanf("%f" ,&nota2);

        printf("qual foi a nota do aluno no terceiro bimestre?\n");
            scanf("%f" ,&nota3);

        printf("qual foi a nota do aluno no quarto bimestre?\n");
            scanf("%f" ,&nota4);

        rs = (nota1 + nota2 + nota3 + nota4) / 4;
/*
para alunos com media maior ou igual a 6 aprovado
para alunos com media menor ou igual a 4, reprovado
para os demais entre 4 e 5 , recuperação
*/
        if (rs >= 6)
        {
            printf("parabens você foi aprovado e passou de ano! Sua nota é %.2f\n",rs);
        }
        else if (rs <= 4)
        {
            printf("infelizmente você foi reprovado! Sua nota é %.2f\n",rs);
        }
        else
        {
            printf("você está de recuperação! sua nota é %.2f\n",rs);
        }
        

        return 0;
    }