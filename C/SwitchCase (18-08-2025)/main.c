#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Escolha um personagem de Wuthering Waves (1-38): ");
    scanf("%i", &num);

    printf("\n");

    switch (num) {
        case 1: printf("O personagem �: Aalto (1) !"); break;
        case 2: printf("O personagem �: Augusta (2) !"); break;
        case 3: printf("O personagem �: Baizhi (3) !"); break;
        case 4: printf("O personagem �: Brant (4) !"); break;
        case 5: printf("O personagem �: Calcharo (5) !"); break;
        case 6: printf("O personagem �: Camellya (6) !"); break;
        case 7: printf("O personagem �: Cantarella (7) !"); break;
        case 8: printf("O personagem �: Carlotta"); break;
        case 9: printf("O personagem �: Cartethyia"); break;
        case 10: printf("O personagem �: Changli"); break;
        case 12: printf("O personagem �: Chixia"); break;
        case 13: printf("O personagem �: Ciaccona"); break;
        case 14: printf("O personagem �: Danjin (14) !"); break;
        case 15: printf("O personagem �: Encore (15) !"); break;
        case 16: printf("O personagem �: Iuno (16) !"); break;
        case 17: printf("O personagem �: Jianxin (17) !"); break;
        case 18: printf("O personagem �: Jinshi (18) !"); break;
        case 19: printf("O personagem �: Jiyan (19) !"); break;
        case 20: printf("O personagem �: Lingyang (20) !"); break;
        case 21: printf("O personagem �: Lumi (21) !"); break;
        case 22: printf("O personagem �: Lupa (22) !"); break;
        case 23: printf("O personagem �: Mortefi (23) !"); break;
        case 24: printf("O personagem �: Phoebe (24) !"); break;
        case 25: printf("O personagem �: Phrolova (25) !"); break;
        case 26: printf("O personagem �: Roccia (26) !"); break;
        case 27: printf("O personagem �: Rover (27) !"); break;
        case 28: printf("O personagem �: Sanhua (28) !"); break;
        case 29: printf("O personagem �: Taoqi (29) !"); break;
        case 30: printf("O personagem �: Shorekeeper (30) !"); break;
        case 31: printf("O personagem �: Verina (31) !"); break;
        case 32: printf("O personagem �: Xiangli Yao (32) !"); break;
        case 33: printf("O personagem �: Yangyang (33) !"); break;
        case 34: printf("O personagem �: Yunlin (34) !"); break;
        case 35: printf("O personagem �: Youhu (35) !"); break;
        case 36: printf("O personagem �: Yuanwu (36) !"); break;
        case 37: printf("O personagem �: Zani (37) !"); break;
        case 38: printf("O personagem �: Zhezhi (38) !"); break;
        default: printf("Nenhum arum"); break;
    }
    return 0;
}
