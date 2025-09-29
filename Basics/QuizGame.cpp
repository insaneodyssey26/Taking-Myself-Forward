#include <iostream>
int main () {
    std:: cout << "********** QUIZ GAME - CREATED BY MASUM **********" << '\n';
    std:: cout << "Just have fun... Don't cheat :)" << '\n';
    std:: cout << "There will be total 6 questions... GOOD LUCK!" << '\n';
    std:: string questions[] = {"1) Which of the following is a bomber jet?",
                                            "2) Which is the most used programming language in Spotify?",
                                            "3) Which of the following Linux distribution is most unstable and must be used carefully?",
                                            "4) Which of the following country has the strongest Air force?",
                                            "5) Which is the most used programming language worldwide?",
                                            "6) Which programming language Google recommends for Android development?"};

    std:: string options[][4] = {{"A. F-22", "B. B-2", "C. Su-57", "D. Dassault Rafale"}, 
                                           {"A. Java", "B. C++", "C. Go", "D. Python"},
                                           {"A. Arch", "B. Manjaro", "C. Ubuntu", "D. Fedora"},
                                           {"A. USA", "B. India", "C. Russia", "D. China"},
                                           {"A. C++", "B. JavaScript", "C. Python", "D. Java"},
                                           {"A. Java", "B. Kotlin", "C. Flutter", "D. Swift"}};

    char answers[] = {'B', 'D', 'A', 'A', 'B', 'B'};
    char guess;
    int score = 0;
    int sizeQuestions = sizeof(questions)/sizeof(questions[0]);
    // int sizeOptions = sizeof(options[i])/sizeof(options[i][0])); This line is wrong, because 'i' is defined later, so it won't be recognized.
    for (int i = 0; i < sizeQuestions; i++) {
        std:: cout << "***************" << '\n';
        std:: cout << questions[i] << '\n';
        std:: cout << "***************" << '\n';

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
            std:: cout << options[i][j] << '\n';
            // std:: cout << "*************" << '\n';
        }
        std:: cin >> guess;
        guess = toupper(guess);
        if (guess == answers[i]) {
            std:: cout << "You are right!" << '\n';
            score++;
        }
        else {
            std:: cout << "It's wrong!" << '\n';
            std:: cout << "Answer: " << answers[i] << '\n';
        }
    }
        std:: cout << "*********************" << '\n';
        std:: cout << "****   RESULTS   ****" << '\n';
        std:: cout << "*********************" << '\n';
        std:: cout << "Your score is: " << score << " out of " << sizeQuestions << '\n';
        std:: cout << "Rate of success: " << (score/(double)sizeQuestions)*100 << "%";
    return 0;
}