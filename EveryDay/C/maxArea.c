/*
** 利用双指针法
** 总是移动较短一侧的指针
*/

#define min(a, b) ((a) <= (b) ? (a) : (b))
#define max(a, b) ((a) >= (b) ? (a) : (b))

int maxArea(int* height, int heightSize){
    int i = 0;
    int j = heightSize - 1;
    int max_volume = 0;
    int volume = 0;

    while(i != j)
    {
        volume = (j - i) * min(height[i], height[j]);
        max_volume = max(volume, max_volume);
        
        if(height[i] <= height[j])
            i++;
        else
            j--;
    }
    return max_volume;
}