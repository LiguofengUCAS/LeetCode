int *twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i, j;
    int* ret;

    for(i = 0 ; i < numsSize - 1 ; i++)
    {
        for(j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                ret = malloc(2 * sizeof(int));
                *ret = i;
                *(ret + 1) = j;
                *returnSize = 2;
            }
        }
    }

    return ret;
}