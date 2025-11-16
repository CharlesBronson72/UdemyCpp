#include <iostream>

enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
};

int main()
{
    const auto permission_jan = PermissionLevel::INSTRUCTOR;
    const auto permission_peter = PermissionLevel::STUDENT;

    switch (permission_peter)
    {
    case PermissionLevel::STUDENT:
    {
        std::cout << "Hello STUDENT!\n";
        break;
    }
    case PermissionLevel::TUTOR:
    {
        std::cout << "Hello TUTOR!\n";
        break;
    }
    case PermissionLevel::INSTRUCTOR:
    {
        std::cout << "Hello INSTRUCTOR!\n";
        break;
    }
    case PermissionLevel::ADMIN:
    {
        std::cout << "Hello ADMIN!\n";
        break;
    }
    default:
    {
        std::cout << "UNKOWN STATE!\n";
        break;
    }
    }

    return 0;
}
