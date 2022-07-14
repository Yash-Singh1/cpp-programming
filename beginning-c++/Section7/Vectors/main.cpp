#include <iostream>
#include <vector>

using namespace std;

int main()
{
//	vector <char> vowels;      // empty
//    vector <char> vowels (5);  // 5 elements, all 0
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
//    vector <int> test_scores (3); // 3 elements, all 0
//    vector <int> test_scores (3, 100); // 3 elements, all 100
    vector <int> test_scores {100, 98, 89};
    
    cout << "\nTest scores using array syntax:" << endl;
        cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl; 

    cout << "\nTest scores using vector syntax:" << endl;
        cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "There are " << test_scores.size() << " scores in my vector" << endl;

    cout << "\nEnter three test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    
        cout << "\nUpdated test scores:" << endl;
        cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    cout << "\nEnter a test score to add: ";
    int score_to_add {0};
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
        cout << "\nEnter another test score to add: ";
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
    cout << "\nUpdated test scores:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << "There are now " << test_scores.size() << " scores in my vector" << endl;
    
//    cout << "This should cause an exception!" << test_scores.at(10) << endl;

    // Example of a 2D vector
    vector<vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {6, 7, 8, 9}
    };
    
    cout << "\nHere are the ratings for viewer number one using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
    cout << "\nHere are the ratings for viewer number one using vector syntax:" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
 
    cout << endl;
    return 0;
}
