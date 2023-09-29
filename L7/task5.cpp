# include <iostream>
using namespace std;
#define N 3 


struct Person
{
    public:
        char* name;
        float salary;
};

void fillPerson(Person &person)
{
    cout << "Введите имя сотруднику" << endl;
    auto name = new char[100];
    cin >> name;
    person.name = name;
    cout << "Введите оклад сотрудника" << endl;
    cin >> person.salary;
}

void showPerson(const Person *person)
{
    cout << "Имя: " << person->name << " Оклад: " << person->salary << endl;
}

void sort(Person office[N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if((office + j)->salary < (office + 1 + j)->salary)
            {
                Person* b = office;
                office = (office + 1);
                *(office + 1) = *b;
            }
        }
    }
}

int main()
{
    Person* person;
    Person* office = new Person[N];
    person = office;

    for(int i = 0; i < N; i++)
    {
        auto person = Person();
        fillPerson(person);
        office[i] = person;
    }

    for(int i = 0; i < N; i++)
    {
        showPerson((office + i));
    }

    sort(office);

    for(int i = 0; i < N; i++)
    {
        showPerson((office + i));
    }
}