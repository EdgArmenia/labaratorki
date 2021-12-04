#include <stdio.h>
#include <math.h>

int getArrayLen()
{
    int n;
    while (1)
    {
        printf("Введите длинну массива: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Введите число больше 1");
            continue;
        }
        break;
    }

    return n;
}

void fillArray(int *a, int n, char *arrayName)
{
    for (int i = 0; i < n; i++)
    {
        printf("Введите %d-й элемент массива %s: ", i, arrayName);
        scanf("%d", &a[i]);
    }
}

void arrayChange(int *a, int *b, int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void printArrayElements(int *array, int n, char *arrayName)
{
    printf("Преобразованный массив %s:\n", arrayName);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void average(int *a, int *b, int n)
{
    for (int i = 0; i < n; i++)
    {
        int k = i;
        int sum = 0;
        while (k >= 0)
        {
            sum += a[k];
            k--;
        }
        b[i] = sum / (i + 1);
    }
}

int isExistOdd(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            return 1;
        }
    }

    return 0;
}

int getLastOdd(int *a, int n)
{
    int lastOdd;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            lastOdd = a[i];
        }
    }

    return lastOdd;
}

int addOddElemetns(int *a, int n, int lastOdd)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            a[i] += lastOdd;
        }
    }
}

int findMinIndex(int *a, int n)
{
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<a[min]){
            min=i;
        }
    }
    return min;
}

int findMaxIndex(int *a, int n)
{
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>a[max]){
            max=i;
        }
    }
    return max;
}

void changeToZero(int *a, int min, int max)
{
    for(int i=min+1;i<max;i++){
        a[i]=0;
    }
}

void sortArray(int *a, int n)
{
    int j,x;
    for(int i=1; i<n; i++){
        for(j=i, x=a[i]; (j>0) && (a[j-1]>x);j--){
            a[j]=a[j-1];
        }
        a[j]=x;
    }
}

void task1()
{
    printf("Задача 1. Даны массивы A и B одинакового размера N. Поменять местами их содержимое и вывести вначале элементы преобразованного массива A, а затем — элементы преобразованного массива B\n");

    int n = getArrayLen();

    int a[n];
    int b[n];

    fillArray(a, n, "A");
    fillArray(b, n, "B");

    arrayChange(a, b, n);

    printArrayElements(a, n, "A");
    printArrayElements(b, n, "B");
}

void task2()
{
    printf("Задача 2. Дан массив A размера N. Сформировать новый массив B того же размера по следующему правилу: элемент BK равен среднему арифметическому элементов массива A с номерами от 1 до K.\n");

    int n = getArrayLen();
    int a[n];
    int b[n];

    fillArray(a, n, "A");
    average(a, b, n);
    printArrayElements(b, n, "B");
}

void task3()
{
    printf("Задача 3. Дан целочисленный массив размера N. Увеличить все нечетные числа, содержащиеся в массиве, на исходное значение последнего нечетного числа. Если нечетные числа в массиве отсутствуют, то оставить массив без изменений.\n");

    int n = getArrayLen();
    int a[n];

    fillArray(a, n, "A");
    if (isExistOdd(a, n))
    {
        int lastOdd = getLastOdd(a, n);
        addOddElemetns(a, n, lastOdd);
    }

    printArrayElements(a, n, "A");
}
void task4()
{
    printf("Задача 4. Дан массив размера N. Обнулить элементы массива, расположенные между его минимальным и максимальным элементами (не включая минимальный и максимальный элементы).\n");
    int n=getArrayLen();
    
    int a[n]; 
    fillArray(a,n,"A");
    
    int min=findMinIndex(a,n);
    int max=findMaxIndex(a,n);
    
    changeToZero(a,min,max);
    
    printArrayElements(a,n,"A");
}

void task5()
{
    printf("Задача 5. Дан массив размера N, все элементы которого, кроме первого, упорядочены по возрастанию. Сделать массив упорядоченным, переместив первый элемент на новую позицию.\n");
    int n=getArrayLen();
    
    int a[n];
    fillArray(a,n, "A");
    
    sortArray(a,n);
    
    printArrayElements(a,n,"A");
}

int main()
{
    printf("Добро пожаловать в мою программу, которая предлагает вам решить 5 интересных задач. Для выбора задачи напишите ниже число от 1 до 5.\n");

    while (1)
    {
        int q;
        printf("\nВыберите задачу от 1 до 5: ");
        scanf("%d", &q);

        switch (q)
        {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 3:
            task3();
            break;
            
        case 4:
            task4();
            break;
        
        case 5:
            task5();
            break;
            
        default:
            printf("\nВыберите задачу от 1 до 5: ");
            break;
        }
    }
}
