/*
Символы

strlen(str) - длина строки
strcpy(s1,s2) - побайтноек копирование из 2 в 1
strncpy(s1,s2,n) - побайтное копирование из 2 в 1 н символов
strcat(s1,s2) - объеденить
strncat(s1,s2,n) - объеденить н символов
strcmp(s1,s2) - сравнить
strncmp(s1,s2,n) - сравнить н символов
stricmp(s1,s2) - сравнить
strnicmp(s1,s2,n) - сравнить н символов
isalnum(c) - это буква/цифра
isalpha(c) - это буква
isdigit(c) - это цифра
islower(c) - это нижний регистр
isupper(c) - это верхний регитрс
isspace(c) - это пробел
toupper(c) - преобразует в верний регистр
strchr(s,c) - поиск первого вхождения символа в строке
strcspn(s1,s2) - длина строки что не входит в 2
strspn(s1,s2) - длина строки что входят в 2
strprbk(s1,s2) - указатель первого вхождения любого символа строки 2 в строке 1
atof(s1) - преобраз в дообл
atoi(s1) - преобраз в инт
atol(s1) - преобраз в лонг инт
getchar(c) - считать символ и вывести его номер(инт)
gets(s) - получить символ с клавиатуры, до нажатия пробела

*/

#include <iostream>

using namespace std;

int main(){
	//char symbol = 'a';
	//char string[10] = "abcdefghf";
	//char string1[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'f', '\0'};
	//char string3[] = "abcdefghf";

	//char in_string[500];
	//gets(in_string); // функция gets() считывает все введённые символы с пробелами до тех пор, пока не будет нажата клавиша Enter

/*    char s2[27] = "Counter-Strike 1.6 forever";          // инициализация строки s2
    char s1[27];                                         // резервируем строку для функции strcpy()
    cout << "strcpy(s1,s2) = " << strcpy(s1,s2) << endl; // содержимое строки s2 скопировалось в строку s1, возвращается указатель на s1
    cout << "s1=             " << s1            << endl; // вывод содержимого строки s1
    char s3[7];                                          // резервируем строку для следующей функции
    cout << strncpy(s3, s2, 7) << endl;      // копируем 7 символов из строки s2 в строку s3
    system("pause");
    return 0;*/

/*
    char s1[30] = "I am ";
    char s2[] = "programmer on the C++!!!!";
    cout << strcat(s1,s2) << endl;               // объединяем строки s1 и s2, результат сохраняется в строке s1
    char s3[23] = "I am a good ";
    cout << strncat(s3,s2,10) <<  "!!!" << endl; // объединяем 10 символов строки s2 со строкой s3
    system("pause");
    return 0;
*/

/*
    char s1[] = "www.cppstudio.com";
    char s2[] = "http://www.cppstudio.com";
    cout << " s1 == s1 -> " << setw(2) << strcmp(s1,s1) << endl; // строка s1 = s1
    cout << " s1 <  s2 -> " << setw(2) << strcmp(s1,s2) << endl; // строка s1 < s2
    cout << " s2 >  s1 -> " << setw(2) << strcmp(s2,s1) << endl; // строка s2 > s1
    system("pause");
    return 0;
*/

    char symbol    = 'd'; // буква
    char digit     = '9'; // цифра
    char space     = ' '; // пробел
    char character = '#'; // знак
    // функция isalnum() проверяет является ли её аргумент буквой или цифрой
    cout << symbol    << " - it is digit or alpha?: "; isalnum(symbol)    ? cout << "true\n": cout << "false\n";
    // функция isalpha() проверяет является ли её аргумент буквой
    cout << symbol    << " - it is alpha?:          "; isalpha(symbol)    ? cout << "true\n": cout << "false\n";
    // функция isdigit() проверяет является ли её аргумент цифрой
    cout << digit     << " - it is digit?:          "; isdigit(digit)     ? cout << "true\n": cout << "false\n";
    // функция isspace() проверяет является ли её аргумент пробелом
    cout << space     << " - it is space?:          "; isspace(space)     ? cout << "true\n": cout << "false\n";
    // функция islower() проверяет является ли её аргумент буквой нижнего регистра
    cout << symbol    << " - it is lower alpha?:    "; islower(symbol)    ? cout << "true\n": cout << "false\n";
    // функция isupper() проверяет является ли её аргумент буквой верхнего регистра
    cout << symbol    << " - it is upper alpha?:    "; isupper(symbol) ? cout << "true\n": cout << "false\n";
    system("pause");
    return 0;

}
