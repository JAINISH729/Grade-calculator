#include <iostream>
using namespace std;

int main() {

    int score;
    char grade;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90){
        grade = 'A';
    }
    else if (score >= 80){
        grade = 'B';
    }
    else if (score >= 70){
        grade = 'C';
    }
    else if (score >= 60){
        grade = 'D';
    }
    else{
        grade = 'F';
    }

    cout << "Your Grade is: " << grade << endl;
    switch (grade) {
        case 'A':
            cout << "Excellent Work!" << endl;
            break;
        case 'B':
            cout << "Well done" << endl;
            break;
        case 'C':
            cout << "Good job" << endl;
            break;
        case 'D':
            cout << "You passed, but you could do better" << endl;
            break;
        case 'F':
            cout << "Sorry,you failed " << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }
    if(grade == 'F'){
        cout << "Please try again next time" << endl;
    }
    else{
        cout <<"Congratulations! You are eliglble for the next level." << endl;
    }
    return 0;
}
