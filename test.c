#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <string.h>
#include <assert.h>



//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	strcpy(arr2, arr1);  //error
//	return 0;
//}








//1.memcpy    ���ܿ����Լ�



//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"����",20},{"����",30} };
//	struct S arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}



//ģ��ʵ��memcpy
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}











//2.memmove -- �����ڴ��ص��������




//C���Ա�׼��
//memcpy ֻҪ�����ص����ڴ濽���Ϳ���
//memmove ���Դ����ص��ڴ�Ŀ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	memmove(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//ģ��ʵ��memmove
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//ǰ-->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��-->ǰ
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//memmove(arr + 2, arr, 20);//��ǰ��������ʵmemcpy����Ҳ����ʵ��
//	my_memmove(arr, arr + 2, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}









//3.memcmp


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 8);//0
//	//int ret = memcmp(arr1, arr2, 8);//-1
//	printf("ret=%d\n",ret);
//	return 0;
//}









//4.memset -- �ڴ�����


//int main()
//{
//	char arr1[10] = "";
//	memset(arr1, '#', 10);//10���ֽ���
//	int arr2[10] = { 0 };
//	memset(arr2, 1, 10);
//	return 0;
//}
