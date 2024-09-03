#include <iostream>
#include <queue>

using namespace std;


void printQueue(queue<string> queue)
{
    char answer;

    while(!queue.empty())
    {
        cout << queue.front() << endl;
        cout << "Task done? Y/N" << endl;
        cin >> answer;
        if(answer == 'Y' || answer == 'y')
        {
            queue.pop();
            cout << endl;
        }
        else 
            if(answer == 'N' || answer == 'n')
            {
                cout << "Do you want to move this for tomorrow?"<< endl;
                cin >> answer;
                if(answer == 'Y' || answer == 'y')
                    queue.pop();
            }
        cout << endl;
    }
    cout << "All tasks are done! Great job staying productive today!" << endl;
}


int main()
{
    queue<string> schedule;

    schedule.push("1. Brush teeth");
    schedule.push("2. Take shower");
    schedule.push("3. Work 8-17");
    schedule.push("4. Gym 18-20");
    schedule.push("5. Dinner");
    schedule.push("7. Watch TV Show");



    cout << "My daily schedule is: " << endl;;
    printQueue(schedule);

    return 0;
    
}