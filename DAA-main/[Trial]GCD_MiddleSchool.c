// Compute GCD(m,n) using Middle school method
// Input: Two non-negative, not both zero integers m and n
// Output: Greates common divisor of m and n

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXs 10

typedef struct ELEMENT
{
    int num;
    struct pair
    {
        int fact;
        int exp;
    } p[MAXs];
} ele;

void init(ele *m)
{
    for (int i = 0; i < MAXs; i++)
    {
        m->p[i].fact = 0;
        m->p[i].exp = 1;
    }
}

void get_factors(ele *m)
{
    init(m);
    int c = 2;
    while (m->num > 1)
    {
        if (m->num % c == 0)
        {
            int k;
            bool found = false;
            for (k = 0; k < MAXs; k++)
            {
                if (m->p[k].fact == 0)
                    break;
                if (c == m->p[k].fact)
                {
                    found = true;
                    m->p[k].exp = m->p[k].exp + 1;
                }
            }
            if (found == false)
            {
                m->p[k].fact = c;
            }
            m->num /= c;
        }
        else
            c++;
    }
    for (int i = 0; i < MAXs; i++)
    {
        if (m->p[i].fact == 0)
            break;
        else
            printf("%d^%d X ", m->p[i].fact, m->p[i].exp);
    }
}


int main()
{
    ele m, n;
    printf("Enter the value of m,n:");
    scanf("%d", &m.num);
    scanf("%d", &n.num);
    get_factors(&m);
    printf("\n");
    get_factors(&n);
    // find_gcd(&m,&n);

    return 0;
}