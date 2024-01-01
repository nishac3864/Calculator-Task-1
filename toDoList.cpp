#include <iostream>
#include <vector>
#include <iomanip>

struct Task {
    std::string description;
    bool completed;

    Task(const std::string& desc) : description(desc), completed(false) {}
};

class TodoList {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& description) {
        tasks.emplace_back(description);
        std::cout << "Task added successfully.\n";
    }

    void viewTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks found.\n";
            return;
        }

        std::cout << std::setw(4) << "ID" << std::setw(15) << "Status" << "Description\n";
        std::cout << "--------------------------------\n";

        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << std::setw(4) << i + 1 << std::setw(15) << (tasks[i].completed ? "Completed  " : "Pending  ") << tasks[i].description << '\n';
        }
    }

    void markCompleted(size_t taskId) {
        if (taskId > 0 && taskId <= tasks.size()) {
            tasks[taskId - 1].completed = true;
            std::cout << "Task marked as completed.\n";
        } else {
            std::cout << "Invalid task ID.\n";
        }
    }

    void deleteTask(size_t taskId) {
        if (taskId > 0 && taskId <= tasks.size()) {
            tasks.erase(tasks.begin() + taskId - 1);
            std::cout << "Task deleted successfully.\n";
        } else {
            std::cout << "Invalid task ID.\n";
        }
    }
};

int main() {
    TodoList todoList;

    while (true) {
        std::cout << "\n===== ToDo List Manager =====\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Mark Task as Completed\n";
        std::cout << "4. Delete Task\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice (1-4): ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string description;
                std::cout << "Enter task description: ";
                std::cin.ignore();  // Consume the newline character left in the buffer
                std::getline(std::cin, description);
                todoList.addTask(description);
                break;
            }
            case 2:
                todoList.viewTasks();
                break;
            case 3: {
                size_t taskId;
                std::cout << "Enter task ID to mark as completed: ";
                std::cin >> taskId;
                todoList.markCompleted(taskId);
                break;
            }
            case 4: {
                size_t taskId;
                std::cout << "Enter task ID to delete: ";
                std::cin >> taskId;
                todoList.deleteTask(taskId);
                break;
            }
            case 5:
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
