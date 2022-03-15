//  main.cpp
//  Л.Р. 1
//
//  Created by Андрей Воропаев on 28.09.2021.
//

#include <iostream>
#include <stdio.h>

int main()
{

    //Даны числа A, B, C и D. Если большее из A и C больше меньшего из C и D,
    //То наибольшее из чисел B, C и D возвести в квадрат. В противном случае
    //Наименьшее из чисел A, C и D заменить квадратом наибольшего из отрицательных чисел. Вывести все числа.
    setlocale(LC_ALL, "Russian");
    int a, b, c, d;
    printf("Введите 4 числа a, b, c, d:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (c > d)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (b > c) {
                    if (b > d) {
                        b *= b;
                    }
                    else {
                        d *= d;
                    }
                }
                else {
                    if (b >= d) {
                        c *= c;
                    }
                }
            }
        }
        else {
            if(c>d){
                if (b > c) {
                    if (b > d) {
                        b *= b;
                    }
                    else {
                        d *= d;
                    }
                }
                else {
                    if (b >= d) {
                        c *= c;
                    }
                }
            }
        }
    }
    else
    {
        if (a > c)
        {
            if (b > c) {
                if (b > d) {
                    b *= b;
                }
                else {
                    d *= d;
                }
            }
            else {
                if (b >= d) {
                    c *= c;
                }
            }
        }
        else {
            if (a < 0) {
                if (b < 0) {
                    if (c < 0) {
                        if (a > c) {
                            a *= a;
                        }
                        else {
                            if (c > d) {
                                c *= c;
                            }
                            else {
                                d *= d;
                            }
                        }
                    }
                    if (a > b) {
                        a *= a;
                    }
                    else {
                        b *= b;
                    }
                }
                a *= a;
            }
            else {
                if (c < 0) {
                    if (d < 0) {
                        if (c > d) {
                            c *= c;
                        }
                        else {
                            d *= d;
                        }
                    }
                    c *= c;
                }
                else {
                    if (d < 0) {
                        d *= d;
                    }
                }
            }
        }

    }
    printf("A = %d, B = %d, C = %d, D = %d\n", a, b, c, d);
}
