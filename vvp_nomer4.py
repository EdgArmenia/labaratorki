print('Zadanie 1, поиск площади и периметр прямоугольника ')
print()
a=int(input('Введите значение стороны a='))
b=int(input('Введите значение стороны b='))
S=a*b
P=2*(a+b)
print('Площадь S=',S)
print('Периметр P=',P)
print()

print('Zadanie 2, поиск длины окружности')
print()
d=int(input('Введите значение диаметра d='))
pi=3.14
L=pi*d 
print('Длина окружности L=',L)
print()

print('Zadanie 3, нахождение среднего арифметического')
print()
a=int(input('Введите значение a='))
b=int(input('Введите значение b='))
Average=(a+b)/2
print('Среднее арифметическое=', Average)
print()

print('Zadanie 4, поиск суммы, разности, произведения и частного квадратов')
print()
a=int(input('Введите значение a='))
b=int(input('Введите значение b='))
if a!=0:
    if b!=0:
        sum=(a**2)+(b**2)
        razn=(a**2)-(b**2)
        proizv=(a**2)*(b**2)
        chast=(a**2)/(b**2)
else:
    print('Даны нулевые числа! Ошибка!')
print('Сумма квадратов=',sum, 'Разность квадратов=', razn, 'Произведение квадратов=', proizv,'Частное квадратов=',chast)
print()

print('Zadanie 5, поиск суммы, разности, произведения и частного модулей')
print()
a=int(input('Введите значение a='))
b=int(input('Введите значение b='))
if a!=0:
    if b!=0:
        sum=abs(a)+abs(b)
        razn=abs(a)-abs(b)
        proizv=abs(a)*abs(b)
        chast=abs(a)/abs(b)
else:
    print('Даны нулевые числа! Ошибка!')
print('Сумма модулей=',sum, 'Разность модулей=', razn, 'Произведение модулей=', proizv,'Частное модулей=',chast)
