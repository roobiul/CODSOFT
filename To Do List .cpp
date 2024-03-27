//بسم الله الرحمن الرحيم
//محمد روبيول الإسلام
//roobiul~Githab


#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long int
#define ctt cout<<
#define Robiul ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

struct Task {
    string description;
    bool completed;
};


void addTask(vector<Task>& todoList, const string& description) {
    Task newTask = {description, false};
    todoList.push_back(newTask);
    cout << "Task added successfully!\n";
}


void viewTasks(const vector<Task>& todoList) {
    cout << "Tasks:\n";
    for (size_t i = 0; i < todoList.size(); ++i) {
        cout << i + 1 << ". " << todoList[i].description;
        if (todoList[i].completed) {
            cout << " (Completed)";
        } else {
            cout << " (Pending)";
        }
        cout << "\n";
    }
}


void markTaskCompleted(vector<Task>& todoList, size_t index) {
    if (index >= 1 && index <= todoList.size()) {
        todoList[index - 1].completed = true;
        cout << "Task marked as completed.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}


void removeTask(vector<Task>& todoList, size_t index) {
    if (index >= 1 && index <= todoList.size()) {
        todoList.erase(todoList.begin() + index - 1);
        cout << "Task removed successfully.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

int main() {

    vector<Task> todoList;
    int choice;

    do {
        cout << "\n===== To-Do List Manager =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "==============================\n";


        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cin.ignore(); 
                cout << "Enter task name: ";
                string description;
                getline(cin, description);
                addTask(todoList, description);
                break;
            }
            case 2:
                viewTasks(todoList);
                break;
            case 3: {
                size_t index;
                cout << "Enter the task number to mark as completed: ";
                cin >> index;
                markTaskCompleted(todoList, index);
                break;
            }
            case 4: {
                size_t index;
                cout << "Enter the task number to remove: ";
                cin >> index;
                removeTask(todoList, index);
                break;
            }
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
