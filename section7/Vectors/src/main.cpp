//Section 7 
//Vectors

#include <iostream>
#include <vector>

using namespace std;

int main(){

    //vector <char> vowels; //empty
    //vector <char> vowels (5); // 5 initialized to zero
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    

    cout << endl;
    cout << vowels.at(0) << endl;
    cout << vowels.at(4) << endl;   

    //vector <int> test_score(3); // 3 elements all initialized to zero
    //vector <int> test_score(3,100); //3 elements all initialized to 100
    vector <int> test_score {100, 98, 89};

    cout << "\nTest scores using array syntax: " << endl;
    cout << test_score[0] << endl;
    cout << test_score[1] << endl;
    cout << test_score[2] << endl;

    cout << "\nTest scores using vector syntax: " << endl;
    cout << test_score.at(0) << endl;
    cout << test_score.at(1) << endl;
    cout << test_score.at(2) << endl;
    cout << "\nThere are " << test_score.size() << " scores in the vector" << endl; 

    cout << "\nEnter 3 test scores: " << endl;
    cin >> test_score.at(0);
    cin >> test_score.at(1);
    cin >> test_score.at(2);

    cout << "\nUpdated test scores:" << endl;

    cout << test_score.at(0) << endl;
    cout << test_score.at(1) << endl;
    cout << test_score.at(2) << endl;

    cout << "\nEnter a test score to add to the vector:" << endl;

    int score_to_add {0};
    cin >> score_to_add;

    test_score.push_back(score_to_add);
    
    cout << "\nEnter one more test socre to add to the vector: ";
    cin >> score_to_add;

    test_score.push_back(score_to_add);

    cout << "\nTest scores are now: " << endl;

    cout << test_score.at(0) << endl;
    cout << test_score.at(1) << endl;
    cout << test_score.at(2) << endl;
    cout << test_score.at(3) << endl;
    cout << test_score.at(4) << endl;
    cout << "\nThere are now " << test_score.size() << " scores in the vector" << endl; 

    //cout << "This should cause an excoption!!" << test_score.at(10);

    //Example of a 2D vector

    vector <vector<int>> movie_ratings{
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nHere are the movie rating for reviwer #1 using vector syntax:" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    
    cout<< endl;
    return 0;
}