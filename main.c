/*�ڶ�������⣺
    ����һ������m��ȡֵ��1����ʾǰ���������������m=0,��ʾ���������
    �������У���������ǰһ��������m=-1��������1������m��Ϊ1��
             ��������ǰһ����С����m=1��������1������m��Ϊ-1��

*/
int wiggleMaxLength(int* nums, int numsSize){
    if (numsSize < 2){
            return numsSize;
    }
    int result = 1,m = 0;
//���ж�ǰ������  
    if (nums[1]>nums[0]){
        result = 2;
        m = 1;
    }else if (nums[1]<nums[0]){
        result = 2;
        m = -1;
    }
    for (int i=2;i<numsSize;i++){
        if(nums[i]>nums[i-1] && m != 1){
            result ++;
            m = 1;
        }else if(nums[i]<nums[i-1] && m != -1){
            result++;
            m = -1;
        }
    }
    return result;
}
