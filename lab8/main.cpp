#include <pthread.h>
#include <iostream>
#include <windows.h>

using namespace std;

pthread_t philosophers[5];
pthread_mutex_t forks[5];

void *eat(void *_pos)
{
    int pos = *(int*) _pos;
    pthread_mutex_t* left_fork = &forks[pos];
    pthread_mutex_t* right_fork = &forks[(pos + 1) % 5];
    cout << "philosopher " << pos << " is thinking" << endl;

    pthread_mutex_lock(left_fork);
    pthread_mutex_lock(right_fork);

    cout << "philosopher " << pos << " is eatting" << endl;
    Sleep(1000);

    pthread_mutex_unlock(left_fork);
    pthread_mutex_unlock(right_fork);

    cout << "philosopher " << pos << " is finished eatting" << endl;

    return nullptr;
}

int main()
{
    for (auto &fork : forks)
    {
        pthread_mutex_init(&fork, nullptr);
    }
    for (int pos = 0; pos < 5; pos++)
    {
        pthread_create(&philosophers[pos], nullptr, eat, (void *)&pos);
        Sleep(1);
    }
    for (auto &philosopher : philosophers)
    {
        pthread_join(philosopher, nullptr);
    }
    return 0;
}