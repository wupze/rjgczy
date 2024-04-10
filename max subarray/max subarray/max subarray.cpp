#include <iostream>
#include <vector>
#include <sstream>  // ���ڴ����ŷָ�������

int maxSubarraySum(const std::vector<int>& nums) {
    int n = nums.size();
    int current_sum = 0;
    int max_sum = 0;

    for (int i = 0; i < n; ++i) {
        current_sum = std::max(current_sum + nums[i], 0);
        max_sum = std::max(max_sum, current_sum);
    }

    return max_sum;
}

int main() {
    std::vector<int> nums;  // �û��������������
    std::cout << "�������������е�Ԫ�أ��Զ��ŷָ�����������ֽ�������";
    std::string input;
    std::getline(std::cin, input);  // ��ȡ��������
    std::istringstream iss(input);
    int num;
    while (iss >> num) {
        nums.push_back(num);
    }

    int result = maxSubarraySum(nums);
    std::cout << "����Ӷκ�Ϊ: " << result << std::endl;

    return 0;
}
