#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//此处是用qsort来比较一群整数的大小，并升序输出

/*int cmp_int(const void* e1,const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}

void test1()
{
	int i = 0;
	int arr[] = { 2,5,4,9,8,7,2,3,1,5,4,6,5,6,54,56,564,98,23,565,97 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main()
{
	test1();
	return 0;
}
*/




//此处是用qsort对一群float型的进行比较

/*int cmp_float(const void* e1, const void* e2)
{
	if (*((float*)e1) == *((float*)e2))
	{
		return 0;
	}
	else if (*((float*)e1) > *((float*)e2))
	{
		return 1;
	}
	else
	{
		return -1;
	}
}


void test2()
{
	float farr[] = { 2.1,3.2,6.1,5.1,6.1,6.2,9.2,95.5,65.2,54.2,1.3 };
	int sz = sizeof(farr) / sizeof(farr[0]);
	int i = 0;
	qsort(farr, sz, sizeof(farr[0]), cmp_float);
	for (i = 0; i < sz; i++)
	{
		printf("%f ", farr[i]);
	}
}


int main()
{
	test2();
	return 0;
}
*/



//结构体中的成员变量age的比较,用监视窗口来看age的排放，这里还不知道怎么打印结构体中的东西
/*struct stu
{
	char name[20];
	int age;

};


int cmp_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

void test3()
{
	struct stu s[] = { {"张三",148},{"李四",19},{"王五",5}};
	int sz = sizeof(s) / sizeof(s[0]);
	int i = 0;
	qsort( s, sz, sizeof(s[0]), cmp_by_age);
	
}


int main()
{
	test3();
	return 0;
}
*/





//结构体中的成员变量name的比较,用监视窗口来看name的排放，这里还不知道怎么打印结构体中的东西

/*struct stu
{
	char name[20];
	int age;

};


int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
}

void test4()
{
	struct stu s[] = { {"张三",148},{"李四",19},{"王五",5} };
	int sz = sizeof(s) / sizeof(s[0]);
	int i = 0;
	qsort(s, sz, sizeof(s[0]), cmp_by_name);

}


int main()
{
	test4();
	return 0;
}
*/




//自己实现qsort函数的功能

/*int cmp_int(const void*e1,const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
void my_swap(char* p1, char* p2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2++;
	}
}
void my_qsort(void* p, int sz, int width, int(*parr)( void*,  void*))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (parr(((char*)p + j * width) , ((char*)p + (j + 1) * width))>0)
			{
				my_swap(((char*)p + j * width), ((char*)p + (j + 1) * width),width);
			}
		}
	}

}


void test5()
{
	int i = 0;
	int arr[] = { 2,3,5,9,6,4,2,1,3,32,65,96,541,214,321,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	test5();
	return 0;
}
*/




//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//void my_swap(char* p1, char* p2, int width)
//{
//	int i = 0;
//	
//	for (i = 0; i < width; i++)
//	{
//		char temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//		p1++;
//		p2++;
//	}
//
//}
//
//
//int cmp_by_age(const void* e1, const void* e2)
//{
//	
//	return  ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//
//void my_qsort(void* p, int sz, int width, int(*parr)(const void*e1, const void*e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j = sz - i - 1; j++)
//		{
//			if (parr((char*)p + j * width, (char*)p + (j + 1) * width)>0)
//			{
//				my_swap((char*)p + j * width, (char*)p + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//
//void test6()
//{
//	int i = 0;
//	struct stu s[3] = { {"zhangsan",18},{"lisi",24},{"wangwu",65} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	my_qsort(s, sz, sizeof(s[0]), cmp_by_age);
//}
//
//int main()
//{
//	test6();
//	return 0;
//}
//




/*
struct stu
	{
		char name[20];
		int age;
	};

int my_cmp_name(const void* e1,const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

void test()
{
	int i = 0;
	struct stu s[3] = { {"zhangsan",18},{"lisi",24},{"wangwu",65} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), my_cmp_name);
}

int main()
{
	test();
	return 0;
}*/




struct stu
{
	char name[10];
	int age;
};


int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

void swap(char*s1,char*s2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *s1;
		*s1 = *s2;
		*s2 = tmp;
		s1++;
		s2++;
	}
}


void my_qsort(void*s,int sz,int width,int (*p)(const void*e1,const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (p((char*)s + j * width, (char*)s + (j + 1) * width)>0)
			{
				swap((char*)s + j * width, (char*)s + (j + 1) * width, width);
			}
		}
	}

}



void test()
{
	int i = 0;
	struct stu s[3] = { {"zhangsan",18},{"lisi",24},{"wangwu",65} };
	int sz = sizeof(s) / sizeof(s[0]);
	my_qsort(s, sz, sizeof(s[0]), cmp_by_name);
}

int main()
{
	test();
	return 0;
}






































