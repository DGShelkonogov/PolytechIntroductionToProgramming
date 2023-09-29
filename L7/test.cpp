# include <iostream>
#include <cstring>
using namespace std;

int main()
{
  
char animal[20] = "bear"; // animal содержит bear 

const char * bird = "wren"; // bird содержит адрес строки

char * ps; // не инициализированно

cout << animal << " and";// отображение bear 

cout << bird << "\n";// отображение wren cout 

cout << "Enter a kind of animal: ";

cin >> animal;// нормально, если вводится меньше 20 символов 

ps = animal; // установка ps в указатель на строку 

cout << ps << "!\n";// нормально; то же, что и приме‐ нение animal

cout << "before using strcpy():\n"; 
cout << animal << " at" << (int*) animal << endl; 

cout << ps << "at" << (int*)ps << endl; 
ps = new char [strlen(animal)+1]; // получение нового хранилища 

strcpy(ps, animal);// копирование  строки в новое хранилище

cout << "After using strcpy():\n";

cout << animal << " at" << (int*)animal << endl; 

cout << ps << " at" << (int*)ps << endl;

delete [] ps;
}

