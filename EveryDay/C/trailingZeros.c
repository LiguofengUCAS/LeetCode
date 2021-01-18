/*
** 先算阶乘极易溢出，无法继续执行下去
** 考虑到每个0都是2 * 5产生的，对阶乘中的每个数进行分解
** 发现5的数量小于2的数量，亦即只要出现因子5就有产生一个0
** 设法统计因子5的数量即可
*/

int trailingZeroes(int n){
    int count = 0;
    int tmp;

    while(n > 4)
    {
        tmp = n;
        while(tmp % 5 == 0)
        {
            count++;
            tmp /= 5;
        }
        n--;
    }

    return count;
}