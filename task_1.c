#include <stdio.h>

int main() {
    int n, a, res1, res2, res3, res4, count = 0, end = 0;
    int list[7];
    scanf("%d", &n);
    while (scanf("%d %d", &n, &a) && end != 3)
    {
        list[count] = n;
        ++count;
        list[count] = a;
        count++;
        end++;
    }
    list[count] = n;
    ++count;
    list[count] = a;
    res1 = list[0]*list[4]+list[1]*list[6];
    printf("%d\n", list[6]);
    res2 = list[0]*list[5]+list[1]*list[7];
    res3 = list[2]*list[4]+list[3]*list[6];
    res4 = list[2]*list[5]+list[3]*list[7];
    printf("%d %d\n", res1, res2);
    printf("%d %d\n", res3, res4);

    return 0;
}