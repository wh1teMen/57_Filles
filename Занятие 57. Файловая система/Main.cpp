#include<iostream>
#include<fstream>//���������� ����������� ������ � ������� ��������
#include<string>
using namespace std;
int statistic(string &str) {
	ofstream out;
	out.open("satatistics.txt",ios::app);
	if (out.is_open()) {
		out << str <<" " << str.length() << "\n";
		out.close();
		return 0;
	}
	out.close();
	return -1;
	
}
int main() {
	setlocale(LC_ALL, "ru");
	system("color F0 ");
	/*string path = "file.txt"; //��������� ���������� path, ���������� ���� � �����
	ofstream out;//������ ������ ofstream, ���������� �� ������ ������ � ����
	out.open(path, ios::app);//������������� ����� ������� out, ��� �� �������� ����� path � ������ ios::app(�������� ��� ������ � ������)
	if (out.is_open()) { //�������� �� ���������� �������� �����, ���� ��������� �� ������������ true,����� false
		cout << "���� ������ ��� ������\n";
		//out << "Hello world!\n";//���� ������ � ����
		for (int i = 0; i < 3; i++){
			string str; //��������� ����������
			cout << "������� ������: \n";
			getline(cin, str);//��� ������� ����������� ������ ���������� getline
			out << str << "\n";//���������� ������ � ���� �  \n ��� �������� �� ����� ������� ����� ������
			//out.open(path, ios::app);
		}
	}
	else
		cerr << "������ �������� �����";
	out.close();//�������� �����.  ����������� ��������� ������!
	//���� ��������

	//--------------------------------------
	ifstream in; //��������� ����������� in.
	in.open(path);//��� "file.txt"
	if (in.is_open()) {
		cout << "���� ������ ��� ������\n";
		string str;*///������ � ������� ����� ������������ ����� �����
		//char sym;
		//1//while (in.get(sym))//bool get(); true-���� ������ ������� �������, false - ���������� ���� �� �������� �������
		/*while (!in.eof()) { //���� �� �� ������ ���� true-� ����� �����
			//1//str += sym;
			str = "";
			in >> str; //>>��������� ������
			//1/cin >> str; //in>>str;
			cout << str << endl;//������� ��������� ���� �� ����� �������
		} */
	/*	while (!in.eof()) {
			getline(in, str);
			cout << str << endl;
		}
		
	}
	else
		cerr << "������ �������� �����";
	in.close();
	if (remove("file.txt") == 0)
		cout << "���� ������\n";
	else
		cout << "������ �������� �����\n";
	remove("file.txt");*/


	cout << "������ 1\n������� �����: \n";
	string word;
	cin >> word;
	cout<<statistic(word)<<endl;

	cout << "������� �����: \n";
	cin >> word;
	cout << statistic(word) << endl;
	//cin.ignore(); ��� ������������ ������������� gitline

	system("pause>nul");
	return 0;
}