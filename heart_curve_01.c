#include <stdio.h>
#include <math.h>

/*----------------------------------
The heart shape is use formula:
(x^2 + y^2 -1)^3 = (x^2)*(y^3)

x ~ (-1.5, 1.5)
y ~ (-1, 2)
-----------------------------------*/
int main()
{
    float xstep_size = 0.025f;
    float ystep_size = 0.05f;

    for (float y = 2.0f; y >= -1.0f; y -= ystep_size) {
        for (float x = -1.5f; x <= 1.5f; x += xstep_size) {
            if (pow((pow(x, 2) + pow(y, 2) - 1.0), 3) - pow(x, 2) * pow(y, 3) <= 0.0)
                printf("@");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
