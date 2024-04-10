#include "pch.h"  // ����Ԥ����ͷ�ļ�
#include "CppUnitTest.h"
#include "../max subarray/max subarray.h"  // ��������ͷ�ļ�

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MaxSubarrayTests
{
    TEST_CLASS(MaxSubarrayTests)
    {
    public:
        TEST_METHOD(TestMaxSubarraySum_PositiveNumbers)
        {
            std::vector<int> nums = { 1, 2, 3, 4, 5 };
            int expected = 15;  // Ԥ�ڵĽ��
            int actual = maxSubarraySum(nums);
            Assert::AreEqual(expected, actual);  // ��֤����Ƿ�Ϊ15
        }

        TEST_METHOD(TestMaxSubarraySum_NegativeNumbers)
        {
            std::vector<int> nums = { -2, -4, -6, -8 };
            int expected = 0;  // Ԥ�ڵĽ������Ϊ���Ǹ�����
            int actual = maxSubarraySum(nums);
            Assert::AreEqual(expected, actual);  // ��֤����Ƿ�Ϊ0
        }

        TEST_METHOD(TestMaxSubarraySum_MixedNumbers)
        {
            std::vector<int> nums = { -2, 11, -4, 13, -5, -2 };
            int expected = 20;  // Ԥ�ڵĽ��
            int actual = maxSubarraySum(nums);
            Assert::AreEqual(expected, actual);  // ��֤����Ƿ�Ϊ20
        }

        // �����������...
    };
}
