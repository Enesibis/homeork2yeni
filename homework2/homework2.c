// homework2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{
    //Write an algorithm and draw a flowchart that will read the two sides of a rectangle and calculate its area and perimeter.

    /*int a, b, alan, çevre;

    alan = 0;
    çevre = 0;

    printf("Kenar Uzunluklarini Giriniz: ");
    scanf_s("%d%d", &a, &b);

    alan = a * b;

    çevre = (2 * a) + (2 * b);

    printf("Dikdortgenin Cevresi: %d\n", çevre);
    printf("Dikdortgenin Alani: %d\n", alan);
    */


    //Draw a flowchart to find all the roots of a quadratic equation ax2+bx+c=0.

    /*int a, b, c, delta, x, y;

    printf("'ax2 + bx + c =' Denklemindeki a, b ve c yi girniz: ");
    scanf_s("%d%d%d", &a, &b, &c);

    delta = b ^ 2 - (4 * a * c);

    if (delta<0)
    {
        printf("Reel Kok Yok");
    }
    else if (delta==0)
    {
        x = -b / 2 * a;
        printf("Denklemin Koku: %d", x);
    }
    else
    {
        x = (-b - (delta ^ (1 / 2))) / (2 * a);
        y = (-b + (delta ^ (1 / 2))) / (2 * a);
        printf("Denklemin Kokleri: %d %d", x, y);
    }*/



    //Print Hello World 10 times

    /*int i;

    for  (i = 0; i < 10; i++)
    {
        printf("Hello World\n");
    }*/



    //Draw a flowchart to find the sum of the first 50 natural numbers.

    /*int i, toplam;

    toplam = 0;

    for ( i = 0; i < 50; i++)
    {
        toplam = toplam + i;
    }
    printf("Ilk elli sayinin toplami: %d", toplam);
    */



    //Write an algorithm and draw a flowchart to calculate 2^4.

    /*int n, sonuc;

    n = 2;

    sonuc = 2 * 2 * 2 * 2;

    printf("Sonuc: %d", sonuc);
    */


    //Draw a flow chart to find LCM of two numbers.

    //Draw a flow chart to print all Prime numbers between 1 to n.

    /*int n, sayac;

    printf("Bir Sayi Giriniz: ");
    scanf_s("%d", &n);

    for ( sayac = 1; sayac <= n; sayac++)
    {
        printf("%d\n", sayac);
    }
    */


    //Draw a flow chart to find sum of all prime numbers between 1 to n.


    /*int n, sayac, toplam;

    toplam = 0;

    printf("Bir Sayi Giriniz: ");
    scanf_s("%d", &n);

    for ( sayac = 1; sayac <= n; sayac++)
    {
        toplam = toplam + sayac;
    }
    printf("1 ile n arasindaki sayilarin toplami: %d", toplam);
    */


    //Draw a flow chart to check whether a number is Armstrong number or not.

    /*int n, sonuc, x, y, basamak, z, mod, a;

    printf("Bir Sayi Giriniz: ");
    scanf_s("%d", &n);

    for ( x = n; x <= n; x++)
    {
        sonuc = 0;
        basamak = 0;
        y = n;

        while (y!=0)
        {
            y = y / 10;
            basamak++;
        }
        mod = 0;
        a = x;
        for ( z = 0; z < basamak; z++)
        {
            mod = a % 10;
            a = a / 10;
            sonuc = sonuc + pow(mod, basamak);
        }

        if (sonuc == x)
        {
            printf("%d Armstrong Sayidir.\n", x);
        }
        else
        {
            printf("%d Armstrong Sayi Degildir.\n", x);
        }

    }*/




    //Draw a flow chart to print all Armstrong numbers between 1 to n.


    /*t n, sonuc, x, y, basamak, z, mod, a;

    printf("Kaca Kadar Bakilacak ? ");
    scanf_s("%d", &n);

    for (x =1; x<= n; x++)
    {
        sonuc = 0;
        basamak = 0;
        y = n;

        while (y != 0)
        {
            y = y / 10;
            basamak++;
        }
        mod = 0;
        a = x;
        for (z = 0; z < basamak; z++)
    {
            mod = a % 10;
            a = a / 10;
            sonuc = sonuc + pow(mod, basamak);
    }

        if (sonuc == x)
    {
        printf("%d Armstrong Sayidir.\n", x);
    }
        

}*/

    //Draw a flow chart to check whether a number is Perfect number or not.
    
    /*float n, tambolen, bolum;
    int i;
    tambolen = 0;

    printf("Bir Sayi Giriniz: ");
    scanf_s("%d", &n);

    for ( i = 0; i < n; i++)
    {
        bolum = n / i;
        if (bolum==0)
        {
            tambolen = tambolen + i;
        }
    }
    if (tambolen == n)
    {
        printf("Sayi Mukemmel Sayidir.");
    }
    else
    {
        printf("Sayi Mukemmel Sayi Degildir.");
    }*/


    //Draw a flow chart to print all Perfect numbers between 1 to n.


    /*int i, n, j, sonuc;
    printf("N degerini giriniz:");
    scanf_s("%d", &n);
     
    for (i = 1; i < n; i++) 
    {
        sonuc = 0;
        for ( j = 1; j < i; j++) 
        {
            if (i % j == 0) 
            {
                sonuc = sonuc + j;
            }
        }
        if (sonuc == i) 
        {
            printf("%d\n", i);
        }
    }*/
    
   
    //Draw a flow chart to check whether a number is Strong number or not.

    //Draw a flow chart to print all Strong numbers between 1 to n.

    //Draw a flow chart to check Whether a Number is Palindrome or Not.

    //Draw a flow chart to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].

    //Draw a flow chart to display the n terms of harmonic seriesand their sum. (1 + 1 / 2 + 1 / 3 + 1 / 4 + 1 / 5 ... 1 / n terms)

    //Draw a flow chart to print the Floyd's Triangle.

    //Draw a flow chart to display the sum of the series[1 + x + x ^ 2 / 2!+ x ^ 3 / 3!+ ....].
    
    //Draw a flow chart to find the sum of the series[x - x ^ 3 + x ^ 5 + ......].
    
    //Draw a flow chart to find the sum of the series 1 + 11 + 111 + 1111 + ..n terms
    
    //Draw a flow chart to find the number and sum of all integer between 100 and 200 which are divisible by 9.
    
    //Draw a flow chart to convert a decimal number into binary without using an array.
   
    //Draw a flow chart to convert a binary number into a decimal number without using array, functionand while loop.
    
    //Draw a flow chart to print Pascal triangle upto n rows.

    return 0;
}


