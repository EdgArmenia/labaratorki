for i in range(1,8):
    print('Напишите любое число от 1 до 7')
    u=int(input('Ваше число: '))
    if u==1:
        print('Примо задание! Поменяй местами значение переменных!')
        A=int(input("Введите значения А"))
        B=int(input("Введите значение B"))
        C=A
        A=B
        B=C
        print('Хопа значения поменялись! Теперь значение А=',A,"а значение B=",B)
    if u==2:
        print('Secondo задание! Поменяй местами значение переменных!')
        A=int(input("Введите значения А"))
        B=int(input("Введите значение B"))
        C=int(input("Введите значение С="))
        D=A
        V=B
        F=C
        C=D
        B=F
        A=V
        print('Хопа значения поменялись! Теперь значение А=',A,", значение B=",B,'a значение C=',C)
    else:
        print('over')