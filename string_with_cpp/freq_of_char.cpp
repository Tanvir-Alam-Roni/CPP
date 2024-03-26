// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int find_frequency(char name[], char target);

int main() {
    char name[] = "tanvir alam roni";
    char target = 'a';
    int freq=0;
    
    fgets(name, sizeof(name), stdin);
    scanf("%c", &target);
    
    freq = find_frequency(name, target);
    cout << "The frequency of character '" << target <<"' in string "<< name << "is:   "<< freq << endl;
}

int find_frequency(char name[], char target) {
    int count = 0;
    int idx = 0;
    
    while(name[idx] != '\0') {
        if(name[idx] == target) {
            count++;
        }
        idx++;
    }
    
    return count;
}
