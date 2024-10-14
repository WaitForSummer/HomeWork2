#include <iostream>
#include <vector>
#include <string>
#include <fstream> // Для работы с файлами

using namespace std;

void Encryption(string file_name) {
	uint16_t gamma;
	string input_string;
	string key;

	cout << "Enter psswd: "; cin >> key;
	srand(stoi(key));
	cout << stoi(key);
}

void Decryption(string file_name) {

}

void LShift() {}

void RShift() {}

bool check(string key) {

	if (key.empty()) {
		return false;
	}
}

int main(int argc, const char* argv[]) {

	if (argc != 3) {
		cerr << "Error: Use three parameters\n";
		cerr << "Program is of the form: " << argv[0] << " <inp1> <inp2>\n";
		return 5;
	}

	const string mode(argv[1]); // Режим работы
	const string file_name(argv[2]); // Имя файла

	//unsigned int key; Ключ-пароль для шифровки или расшифровки

	if (mode != "encryption" && mode != "decryption") { // Проверка на некорректный ввод
		cout << "Error: Неправильное название аргумента.";
		return 1;
	}

	if (mode == "encryption") { // Шифрование
		cout << "enc";
		Encryption(file_name);
	}
	else if (mode == "decryption") {
		cout << "dec";
	}
	return 0;
}
