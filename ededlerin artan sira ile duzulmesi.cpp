#include<iostream>
using namespace std;
int main()
{
	int arr[100], num, i, d, veziyyet, deyis;
	cout << "enter the number: ";
	cin >> num;// ededin sayi
	for (i = 0;i < num;i++) {
		cin >> arr[i];// ededlerin daxil olunmasi array ici
	}
	for (i = 0;i < (num - 1);i++) {
		veziyyet = i;
		for (d = i + 1;d < num;d++) {
			if (arr[veziyyet] > arr[d])
				veziyyet = d;// ardicilgin berpasi ucun
		}
		if (veziyyet != i) {
			deyis = arr[i];
			arr[i] = arr[veziyyet];
			arr[veziyyet] = deyis;
		}
	}
	cout << "artan sira ile duz:" << endl;
	for (i = 0;i < num;i++) 
		cout << arr[i] << endl;
	
	return 0;
	
}