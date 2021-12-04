// 1 + 2 + 3 + ....... + n = ?
// Without loop; Using only recusrsion
#include <stdio.h>

int sum_till_n(int n) {
    if ( n <= 1 ) {
        return n;
    }
    return n + sum_till_n(n-1);
}


int main()
{
    int num;
    scanf("%d", &num);

    printf("%d\n", sum_till_n(num));

    return 0;
}

//   Output:
//   5
//   15
