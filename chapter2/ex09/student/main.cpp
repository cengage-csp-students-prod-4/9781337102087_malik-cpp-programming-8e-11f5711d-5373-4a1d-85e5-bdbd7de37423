#include <iostream>
using namespace std;
int main() {
    double score1, score2, score3, score4, score5;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    double average = (score1 + score2 + score3 + score4 + score5) / 5.0;
    cout << "Your average test score is: " << average << endl;
    return 0;
}