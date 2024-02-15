#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4, 6};
    for (int i = 0; sizeof(nums) / sizeof(nums[0]); i++) {
        int length = sizeof(nums) / sizeof(nums[0]);
        printf("%d", length);
    }
}