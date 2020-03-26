#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char ** argv)
{
     if ((argc > 4) || (argc == 0))
    {
        cout<< "That is not the right amount of parameters." << endl;
    }
     if (strcmp("add", argv[1]) == 0)
    {
        cout<< "Added ./path/to/fake-git.cpp" << endl;
    }
    else if (strcmp("status", argv[1]) == 0)
    {
        cout << "I have checked your changes." << endl;
    }
      else if ((strcmp("push", argv[1]) == 0) && (strcmp("origin", argv[2]) == 0) && (strcmp("master", argv[3]) == 0))
    {
        cout << "pushing changes to origin master." << endl;
    }

    else if ((strcmp("commit", argv[1]) == 0) && (strcmp("-m", argv[2]) == 0) && (strcmp("Your message.", argv[3]) != 0))
    {
        cout<< "Commiting your files and adding the message: " << argv[3] << endl;
    }
    return 0;   
}