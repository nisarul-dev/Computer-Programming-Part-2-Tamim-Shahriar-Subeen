// 1 + 2 + 3 + ....... + n = ?
// Without loop; Using only recusrsion
#include <stdio.h>

int count = 0;

int sum_till_n(int n) {
    int count_bkp = ++count;
    if ( count >= n ) {
        return n;
    }
    return sum_till_n(n) + count_bkp;
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
