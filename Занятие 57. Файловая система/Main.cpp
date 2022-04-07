#include<iostream>
#include<fstream>//библиотека реализующая работу с фаловой системой
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
	/*string path = "file.txt"; //строковая переменная path, содержащая путь к файлу
	ofstream out;//объект класса ofstream, отвечающий за запись данных в файл
	out.open(path, ios::app);//инициализация полей объекта out, или эе открытие файла path в режиме ios::app(открытие для чтения и записи)
	if (out.is_open()) { //проверка на правильное открытие файла, если открылось то возвращается true,иначе false
		cout << "Файл открыт для записи\n";
		//out << "Hello world!\n";//ввод текста в файл
		for (int i = 0; i < 3; i++){
			string str; //строковая переменная
			cout << "Введите строку: \n";
			getline(cin, str);//для лучшего отображения текста используем getline
			out << str << "\n";//добавление записи в файл и  \n для переноса на новую строчку новые записи
			//out.open(path, ios::app);
		}
	}
	else
		cerr << "Ошибка открытия файла";
	out.close();//закрытие файла.  обязательно закрывать объект!
	//файл создался

	//--------------------------------------
	ifstream in; //строковая перерменная in.
	in.open(path);//или "file.txt"
	if (in.is_open()) {
		cout << "Файл открыт для чтения\n";
		string str;*///строка в которую будет записываться текст файла
		//char sym;
		//1//while (in.get(sym))//bool get(); true-если символ удалось считать, false - возвращает если не удалость считать
		/*while (!in.eof()) { //пока мы не вконце фала true-в конце файла
			//1//str += sym;
			str = "";
			in >> str; //>>пословное чтение
			//1/cin >> str; //in>>str;
			cout << str << endl;//выводим считанный файл на экран консоли
		} */
	/*	while (!in.eof()) {
			getline(in, str);
			cout << str << endl;
		}
		
	}
	else
		cerr << "Ошибка открытия файла";
	in.close();
	if (remove("file.txt") == 0)
		cout << "Файл удален\n";
	else
		cout << "Ошибка удаления файла\n";
	remove("file.txt");*/


	cout << "Задача 1\nВведите слово: \n";
	string word;
	cin >> word;
	cout<<statistic(word)<<endl;

	cout << "Введите слово: \n";
	cin >> word;
	cout << statistic(word) << endl;
	//cin.ignore(); для последующего использования gitline

	system("pause>nul");
	return 0;
}