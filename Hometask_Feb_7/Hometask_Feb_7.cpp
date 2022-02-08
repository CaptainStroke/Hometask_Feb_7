//1. Ввести массив из 5 чисел, а затем вывести его в обратном порядке.

//#include <iostream>
//using namespace std;
//int main()
//{
//	const int size = 5;
//	int numb[size] = { 1, 22, 333, 444, 555 };
//	for (int i = 1; i <= size; i++)
//	{
//		cout << numb[size - i] << endl;
//	}
//}

//2. Создать массив из 20 случайных чисел. Вывести все элементы массива с чётными индексами. 

//#include <iostream>
//#include <Windows.h>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	int num = rand();
//	const int size = 20;
//	int number[size] = {num};
//	for (int i = 0; i < 20; i++)
//	{
//		number[i] = rand();
//		cout << number[i] << endl;
//	}
//}

//3. Создать массив из 10 случайных чисел в диапазоне от - 20 до 20. Определить количество, 
//сумму  и среднее арифметическое положительных элементов массива.

//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	const int size = 10;
//	int numb[size];
//	int j = 0;
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//		{
//			numb[i] = rand() % 41 - 20;
//			cout << i + 1 << " - " << numb[i] << endl;
//			if (numb[i] > 0)	sum += numb[i], j++;
//			if (i < size - 1) continue;			
//		}
//		cout << "Total sum = " << sum << " from " << j << " numbers\n";
//		cout << "Medium ariphmetic = " << float(sum) / float( j);
//}

//4. Создать символьный массив из 100 случайных элементов.Определить, сколько в нём цифр, букв и знаков пунктуации.

//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	const char size = 100;
//	char num[size];
//	int l = 0;
//	int n = 0;
//	int p = 0;
//	for (int i = 0; i < size; i++)
//	{
//		num[i] = rand() % 96 + 32;
//		if (num[i] >= 65 && num[i] <= 90 || num[i] >= 97 && num[i] <= 122) l++, cout << num[i] << ", ";
//		else if (num[i] >= 48 && num[i] <= 57) n++, cout << num[i] << ", ";
//		else p++, cout << num[i] << ", ";
//	}
//	cout <<"\nLetters - " << l << "\n";
//	cout << "Number - " << n << "\n";
//	cout <<"Punctuation - " << p << "\n";
//}

//5. Написать программу, которая предлагает пользователю ввести число, и затем подсчитывает,
//сколько раз это число встречается в массиве на 100 случайных элементов.

//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	const int size = 100;
//	int num[size];
//	
//	int j = 0;
//	int l = 7;
//	cout << "Enter the number between 1 and 20 - ";
//	cin >> l;
//	for (int i = 0; i < size; i++)
//	{
//		num[i] = rand() % 20 + 1;
//		//cout << num[i] << ", ";
//		if (l == num[i]) j++, cout << j << " - " << i+1 << " - " << num[i] << endl;
//	}
//}

//6. Создать массив из 20 случайных чисел в диапазоне от - 10 до 30. Написать программу, 
//определяющую сумму элементов массива, находящихся в массиве после первого отрицательного элемента.

//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	const int size = 20;
//	int num[size];
//	int sum = 0;
//	int j = 0;
//	int count = 0; // count after first minus number
//	for (int i = 0; i < size; i++)
//	{
//		num[i] = rand() % 41 - 10;
//		if (num[i] < 0 && j == 0) j++;
//		else if (j > 0) count++;
//	}
//	cout << count << endl;
//}

//7. Создать массив из 20 случайных чисел в диапазоне от - 30 до 10. Написать программу, 
//определяющую сумму элементов массива, находящихся в массиве до первого положительного элемента.

//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	const int size = 20;
//	int num[size];
//	int j = 0;
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		num[i] = rand() % 41 - 30;
//		if (num[i] < 0 && j == 0) count++;
//		else if (num[i] >= 0) j++;
//	}
//	cout << count;
//}


//8. Создать массив из 20 случайных чисел. Определить минимальный и максимальный элемент массива(вывести значение и порядковый номер).

//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	const int size = 20;
//	int num[size];
//	int max = 0;
//	int min = 0;
//	int j = 0;
//	for (int i = 0; i < size; i++)
//	{
//		num[i] = rand();
//		cout << num[i] << endl;
//		j++;
//		if (num[i] > max && j == 1) min = num[i], max = num[i];
//		if (num[i] > max && num[i] > min) max = num[i];
//		if (num[i] < max && num[i] < min) min = num[i];
//	}
//	cout << "Last min - " << min << endl;
//	cout << "Last max - " << max << endl;
//}

//9. Создать массив на 100 вещественных чисел. Определить, сколько элементов массива не имеют вещественной части.


//10. Создать массив из 200 случайных чисел в диапазоне от 0 до 200. Определить количество одноразрядных, двухразрядных и трёхразрядных чисел в процентном отношении.

#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;
int main()
{
	srand(time(NULL));
	const int size = 200;
	int num[size];
	int one = 0;
	int two = 0;
	int three = 0;
	for (int i = 0; i < size; i++)
	{
		num[i] = rand() % 201;
		if (num[i] <= 9) one++;
		else if (num[i] > 9 && num[i] <= 99) two++;
		else three++;
		//cout << num[i] << endl;
	}
	cout << "One digit number - " << one << endl;
	cout << "Two digit number - " << two << endl;
	cout << "Three digit numbet - " << three << endl;
}

//11. Создать массив из 10 целых случайных чисел.Изменить порядок следования элементов массива на противоположный(1 - й элемент меняется с 10 - м, 2 - й элемент с 9 - м и тд).


//12. Создать два массива A и B по 5 элементов.Создать третий массив C на 10 элементов, в который копируются элементы из первого и второго массива поочередно(например, С[0] = A[0], c[1] = B[0], C[2] = A[1], C[3] = B[1] и тд).