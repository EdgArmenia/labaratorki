#include <stdio.h>

int main(){
    printf("Добро пожаловать в мою программу, которая предлагает вам решить 5 задач. Для продолжения напишите ниже число от 1 до 5.\n");
    for(int p=0;p<10;p++){
        int q; printf("\nВведите число от 1 до 5: "); scanf("%d",&q);
        if (q==1){
            printf("Задача 1. Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). Вывести дату в виде текста (например, «пятое января»).\n");
            for(int i=0;i<10;i++){
                float c; printf("Введите номер дня="); scanf("%f",&c);
                float m; printf("Введите номер месяца="); scanf("%f",&m);
                if(((int) c==c) && ((int) m==m) && (((m==2) && ((c>0) && (c<29))) || (((m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12)) && ((c>0) && (c<32))) || (((m==4) || (m==6) || (m==9) || (m==11)) && ((c>0) && (c<31))))){
                    if ((int) c/10==1){
                        switch ((int) c) {
                            case 10:
                            printf("десятое");
                            break;
                            case 11:
                            printf("одинадцатое");
                            break;
                            case 12:
                            printf("двенадцатое");
                            break;
                            case 13:
                            printf("тринадцатое");
                            break;
                            case 14:
                            printf("четырнадцатое");
                            break;
                            case 15:
                            printf("пятнадцатое");
                            break;
                            case 16:
                            printf("шестнадцатое");
                            break;
                            case 17:
                            printf("семнадцатое");
                            break;
                            case 18:
                            printf("восемнадцатое");
                            break;
                            case 19:
                            printf("девятнадцатое");
                            break;
                        }
                    }
                    else {
                        if((int) c/10!=1){
                            if ((int) c%10==0){
                                switch ((int) c/10) {
                                case 2:
                                printf("двадцатое");
                                break;
                                case 3:
                                printf("тридцатое");
                                break;
                            }
                        }
                        else{
                            switch ((int) c/10) {
                                case 2:
                                printf("двадцать ");
                                break;
                                case 3:
                                printf("тридцать ");
                                break;
                            }
                            switch ((int) c%10) {
                            case 1:
                            printf("первое");
                            break;
                            case 2:
                            printf("второе");
                            break;
                            case 3:
                            printf("третье");
                            break;
                            case 4:
                            printf("четвертое");
                            break;
                            case 5:
                            printf("пятое");
                            break;
                            case 6:
                            printf("шестое");
                            break;
                            case 7:
                            printf("седьмое");
                            break;
                            case 8:
                            printf("восемое");
                            break;
                            case 9:
                            printf("девятое");
                            break;
                            }
                        }
                    }    
                    if((m==1) && ((c>0) && (c<32))){
                        printf(" января\n");
                        break;
                    }
                    if((m==2) && ((c>0) && (c<=28))){
                        printf(" февраля\n");
                        break;
                    }
                    if((m==3) && ((c>0) && (c<32))){
                        printf(" марта\n");
                        break;
                    }
                    if((m==4) && ((c>0) && (c<31))){
                        printf(" апреля\n");
                        break;
                    }
                    if((m==5) && ((c>0) && (c<32))){
                        printf(" мая\n");
                        break;
                    }
                    if((m==6) && ((c>0) && (c<31))){
                        printf(" июня\n");
                        break;
                    }
                    if((m==7) && ((c>0) && (c<32))){
                        printf(" июля\n");
                        break;
                    }
                    if((m==8) && ((c>0) && (c<32))){
                        printf(" августа\n");
                        break;
                    }
                    if((m==9) && ((c>0) && (c<31))){
                        printf(" сентября\n");
                        break;
                    }
                    if((m==10) && ((c>0) && (c<32))){
                        printf(" октября\n");
                        break;
                    }
                    if((m==11) && ((c>0) && (c<31))){
                        printf(" ноября\n");
                        break;
                    }
                    if((m==12) && ((c>0) && (c<32))){
                        printf(" декабря\n");
                        break;
                    }
                }
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
        if(q==2){
            printf("\nЗадача 2. Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. Дан символ C — исходное направление робота и целое число N — посланная ему команда. Вывести направление робота после выполнения полученной команды\n");
            for(int i=0;i<10;i++){
                printf("Руководство по эксплуатации робота\n \nДля выбора операции в нужном поле введите: 0-продолжать движение, 1-поворот налево, −1-поворот направо.\n");
                int c; printf("Введите номер направления(0-север, 1-восток, 2-юг, 3-запад)="); scanf("%d",&c);
                float n; printf("Введите номер команды="); scanf("%f",&n);
                if(((int) n==n) && ((c>=0) && (c<4)) && ((n>=-1) && (n<=1))){
                    if(c==0){
                        if(n==0){
                            printf("Продолжает идти на север\n");
                            break;
                        }
                        if(n==1){
                            printf("Робот повернул налево. Идёт на запад\n");
                            break;
                        }
                        if(n==-1){
                            printf("Робот повернул направо. Идёт на восток\n");
                            break;
                        }
                    }
                    if(c==1){
                        if(n==0){
                            printf("Продолжает идти на восток\n");
                            break;
                        }
                        if(n==1){
                            printf("Робот повернул налево. Идёт на север\n");
                            break;
                        }
                        if(n==-1){
                            printf("Робот повернул направо. Идёт на юг\n");
                            break;
                        }
                    }
                    if(c==2){
                        if(n==0){
                            printf("Продолжает идти на юг\n");
                            break;
                        }
                        if(n==1){
                            printf("Робот повернул налево. Идёт на восток\n");
                            break;
                        }
                        if(n==-1){
                            printf("Робот повернул направо. Идёт на запад\n");
                            break;
                        }
                    }
                    if(c==3){
                        if(n==0){
                            printf("Продолжает идти на запад\n");
                            break;
                        }
                        if(n==1){
                            printf("Робот повернул налево. Идёт на юг\n");
                            break;
                        }
                        if(n==-1){
                            printf("Робот повернул направо. Идёт на север\n");
                            break;
                        }
                    }
                }
                else{
                    printf("\nВведите условие ещё раз\n");
                }
            }
        }
        if(q==3){
            printf("\nЗадача 3. Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий».\n");
            for(int i=0;i<10;i++){
                int n; printf("Введите кол-во заданий="); scanf("%d",&n);
                if(((int) n==n) && ((n>9) && n<41)){
                    if (n/10==1){
                        switch (n) {
                        case 10:
                        printf("десять учебных заданий. \n");
                        break;
                        case 11:
                        printf("одинадцать учебных заданий.\n");
                        break;
                        case 12:
                        printf("двенадцать учебных заданий.\n");
                        break;
                        case 13:
                        printf("тринадцать учебных заданий.\n");
                        break;
                        case 14:
                        printf("четырнадцать учебных заданий.\n");
                        break;
                        case 15:
                        printf("пятнадцать учебных заданий.\n");
                        break;
                        case 16:
                        printf("шестнадцать учебных заданий.\n");
                        break;
                        case 17:
                        printf("семнадцать учебных заданий.\n");
                        break;
                        case 18:
                        printf("восемнадцать учебных заданий.\n");
                        break;
                        case 19:
                        printf("девятнадцать учебных заданий.\n");
                        break;
                        }
                    }    
                    else {
                        switch (n/10) {
                        case 2:
                        printf("двадцать ");
                        break;
                        case 3:
                        printf("тридцать ");
                        break;
                        case 4:
                        printf("сорок ");
                        break;
                    }
                    switch (n%10) {
                        case 1:
                        printf("одно ");
                        break;
                        case 2:
                        printf("два ");
                        break;
                        case 3:
                        printf("три ");
                        break;
                        case 4:
                        printf("четыре ");
                        break;
                        case 5:
                        printf("пять ");
                        break;
                        case 6:
                        printf("шесть ");
                        break;
                        case 7:
                        printf("семь ");
                        break;
                        case 8:
                        printf("восемь ");
                        break;
                        case 9:
                        printf("девять ");
                        break;
                    }
                    switch (n%10) {
                        case 0:
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                        case 9:
                        printf("учебных заданий.\n");
                        break;
                        case 1:
                        printf("учебное задание.\n");
                        break;
                        case 2:
                        case 3:
                        case 4:
                        printf("учебных задания.\n");
                        break;
                    }
                }
                break;
                }
                else{
                    printf("Введите число снова\n");
                }
            }
        }
        if(q==4){
            printf("Задача 4. Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».\n");
            for(int i=0;i<10;i++){
                float n; printf("Введите трёхзначное число="); scanf("%f",&n);
                if(((int) n==n) && ((n>99) && (n<1000))){
                    switch((int) n/100){
                        case 1:
                        printf("сто ");
                        break;
                        case 2:
                        printf("двести ");
                        break;
                        case 3:
                        printf("триста ");
                        break;
                        case 4:
                        printf("четыреста ");
                        break;
                        case 5:
                        printf("пятьсот ");
                        break;
                        case 6:
                        printf("шестьсот ");
                        break;
                        case 7:
                        printf("семьсот ");
                        break;
                        case 8:
                        printf("восемьсот ");
                        break;
                        case 9:
                        printf("девятьсот ");
                        break;
                    }
                    switch(((int) n%100)/10){
                        case 2:
                        printf("двадцать ");
                        break;
                        case 3:
                        printf("тридцать ");
                        break;
                        case 4:
                        printf("сорок ");
                        break;
                        case 5:
                        printf("пятьдесят ");
                        break;
                        case 6:
                        printf("шестьдесят ");
                        break;
                        case 7:
                        printf("семьдесят ");
                        break;
                        case 8:
                        printf("восемьдесят ");
                        break;
                        case 9:
                        printf("девяноста ");
                        break;
                    }
                    if(((int) n%100)%10!=0){
                        if((((int) n%100)/10)==1){
                            switch((int) n%100){
                                case 11:
                                printf("одиннадцать\n");
                                break;
                                case 12:
                                printf("двенадцать\n");
                                break;
                                case 13:
                                printf("тринадцать\n");
                                break;
                                case 14:
                                printf("четырнадцать\n");
                                break;
                                case 15:
                                printf("пятнадцать\n");
                                break;
                                case 16:
                                printf("шестнадцать\n");
                                break;
                                case 17:
                                printf("семнадцать\n");
                                break;
                                case 18:
                                printf("восемнадцать\n");
                                break;
                                case 19:
                                printf("девятнадцать\n");
                                break;
                            }
                            break;
                        }
                        switch(((int) n%100)%10){
                            case 1:
                            printf("один\n");
                            break;
                            case 2:
                            printf("два\n");
                            break;
                            case 3:
                            printf("три\n");
                            break;
                            case 4:
                            printf("четыре\n");
                            break;
                            case 5:
                            printf("пять\n");
                            break;
                            case 6:
                            printf("шесть\n");
                            break;
                            case 7:
                            printf("семь\n");
                            break;
                            case 8:
                            printf("восемь\n");
                            break;
                            case 9:
                            printf("девять\n");
                            break;
                        }
                        break;
                    }
                    if(((int) n%100)%10==0){
                        switch(((int) n%100)/10){
                            case 1:
                            printf("десять\n");
                            break;
                        }
                        break;
                    }
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
        if(q==5){
            printf("Задача 5. В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».\n");
            for(int i=0;i<10;i++){
                float n; printf("Введите год="); scanf("%f",&n);
                printf("Год ");
                switch ((int) n%10){
                    case 0:
                    case 1:
                        printf("бел");
                        break;
                    case 2:
                    case 3:
                    printf("черн");
                        break;
                    case 4:
                    case 5:
                        printf("зелён");
                        break;
                    case 6:
                    case 7:
                        printf("красн");
                        break;
                    case 8:
                    case 9:
                        printf("жёлт");
                        break;
                }
                switch (((int) n+1)%5) {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 9:
                    case 10:
                    case 11:
                        printf("ой ");
                        break;
                    case 6:
                    case 7:
                    case 8:
                        printf("ого ");
                        break;
                }
                switch (((int) n+8)%12) {
                    case 0:
                        printf("крысы\n");
                        break;
                    case 1:
                        printf("коровы\n");
                        break;
                    case 2:
                        printf("тигра\n");
                        break;
                    case 3:
                        printf("зайца\n");
                        break;
                    case 4:
                        printf("дракона\n");
                        break;
                    case 5:
                        printf("змеи\n");
                        break;
                    case 6:
                        printf("лошади\n");
                        break;
                    case 7:
                        printf("овцы\n");
                        break;
                    case 8:
                        printf("обезьяны\n");
                        break;
                    case 9:
                        printf("курицы\n");
                        break;
                    case 10:
                        printf("собаки\n");
                        break;
                    case 11:
                        printf("свиньи\n");
                        break;
                }    
            }
        }
    }
    return 0;
}
