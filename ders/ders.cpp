#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
	/*int a,b,c,d,e,x;
,
	cout << "bir sayi giriniz : ";
	cin >> x;
	if (x % 2 == 0)
		cout << "girdiginiz sayi cift" << endl;
	else
		cout << "girdiginiz sayi tek" << endl;

	cout << "ortalaması alınıcak 5 sayıyı giriniz : ";
	cin >> a >> b >> c >> d >> e;
	cout << "5 sayinin ortalaması = " << (float)(a + b + c + d + e) / 5;


	string str1;
	string str2;

	cout << "lütfen bir sifre seciniz : ";
	cin >> str1;
	cout << "giris yapmak icin sifrenizi giriniz : ";
	cin >> str2;

	if (str1 == str2)
		cout << "sifre dogru!";
	else
		cout << "sifre yanlis!";
*/
	//
	int *ptr = nullptr;

	ptr = new int;
	*ptr = 10;

	delete(ptr);

	cout << *ptr;
	//

	//PUBLIC PRIVATE
	class student
	{
		private:
			string name;
		public:
		void setname(string isim){
			name = isim;
		}
		void tellname(){
			cout << "benim adim " << name << endl;
		}
	};

	student student1;


	student1.setname(strdup("Yusuf Ugurlu"));
	student1.tellname();



	//FOREACH
	int a[] = {1,2,3,4,5};

	for (int item:a)
		cout << item << endl;
 	//


	string sys_username = "yugurlu";
	string sys_password = "123123123";

	string input;
	string input2;

	do
	{
		cout << "lutfen kullanici adi giriniz : ";
		cin >> input;
		cout << "kullanici adi kontrol ediliyor...\n";
		sleep(3);
		if (input != sys_username)
			cout << "kullanici adi yanlis! lutfen tekrar deneyin\n";
		else
			do
			{
				cout << "lutfen sifrenizi giriniz :";
				cin >> input2;
				cout << "sifre kontrol ediliyor...\n";
				sleep(3);
				if (input2 != sys_password)
					cout << "yanlis sifre! lutfen tekrar deneyin\n";
				else
					break;
			}
			while (input != sys_password);

	} while (input != sys_username);

	cout << "basariyla giris yapildi\n";


	return 0;
}
