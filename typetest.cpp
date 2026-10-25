#include <iostream>
#include <chrono>
#include <string>
#include <iomanip>
#include "commands.h"

using namespace std;

void typing()
{
    int correct = 0;
    int wrong = 0;
    double wpm = 0;

    string sentences[] = {
        "The quick brown fox jumps over the lazy dog",
        "Programming requires patience and practice",
        "A good developer understands their own code",
        "Technology is constantly changing the world",
        "Learning to code takes time and dedication",
        "Small improvements lead to great results",
        "Consistency is more important than motivation",
        "Every programmer starts as a beginner",
        "The best way to learn is by building projects",
        "Typing accurately is just as important as speed",
        "The internet connects millions of people every day",
        "Great ideas often begin with simple questions",
        "Computers follow instructions written by programmers",
        "Practice helps turn difficult skills into habits",
        "A strong foundation makes advanced topics easier",
        "Debugging is an important part of programming",
        "Every mistake is an opportunity to learn something",
        "Good software solves problems for real people",
        "Learning new skills requires time and effort",
        "Focus on progress rather than perfection",
        "The smallest details can make a big difference",
        "Writing clean code makes debugging much easier",
        "A keyboard is an essential tool for developers",
        "The future belongs to people who keep learning",
        "Hard work becomes easier when you enjoy the process",
        "Building projects improves your problem solving skills",
        "A simple idea can grow into something incredible",
        "The best programmers never stop asking questions",
        "Every successful project begins with the first line",
        "Understanding code is better than memorizing syntax",
        "Creativity and logic are both useful in programming",
        "The computer only does what you tell it to do",
        "Learning from mistakes is part of becoming better",
        "Patience is essential when solving difficult problems",
        "The world is full of interesting problems to solve",
        "Good habits are built through consistent practice",
        "Sometimes the simplest solution is the most effective",
        "A great developer knows when to ask for help",
        "Writing software requires creativity and attention",
        "The process of learning never truly ends",
        "Success is often the result of many small efforts",
        "Technology can improve the way people live",
        "Developers build tools that make everyday tasks easier",
        "A clear mind helps you solve complicated problems",
        "The ability to adapt is an important skill",
        "Every new challenge teaches you something valuable",
        "Discipline helps you improve even on difficult days",
        "Understanding the basics makes everything else easier",
        "The most useful projects solve everyday problems",
        "A small improvement today can lead to bigger results",
        "Learning programming is a journey of constant discovery",
        "A good typing speed comes from accuracy and practice",
        "The terminal gives developers control over their tools",
        "Writing your own software is a rewarding experience",
        "A programmer should always test their code carefully",
        "The best way to improve is to keep experimenting",
        "Sometimes fixing one bug teaches you more than a tutorial",
        "The hardest problems become easier with experience",
        "Every line of code should serve a clear purpose",
        "Building something yourself creates real understanding"};

    string sentence = sentences[rand() % 60];
    string userInput;

    cout << "Type the following, press enter when you are done typing:\n ";
    cout << sentence << '\n';

    // Timer

    auto start = chrono::steady_clock::now();
    getline(cin, userInput);
    auto end = chrono::steady_clock::now();

    chrono::duration<double> elapsed = end - start;

    // Accuracy calculation

    int j = 0;

    for (int i = 0; i < sentence.length(); i++)
    {
        if (j < userInput.length() && sentence[i] == userInput[j])
        {
            correct++;
            j++;
        }
        else if (i + 1 < sentence.length() &&
                 j < userInput.length() &&
                 sentence[i + 1] == userInput[j])
        {
            wrong++;
        }
        else
        {
            wrong++;
            if (j < userInput.length())
            {
                j++;
            }
        }
    }

    if (j > sentence.length())
    {
        wrong += userInput.length() - j;
    }

    double accuracy = (correct * 100.0) / (correct + wrong);

    // WPM calculation

    double words = userInput.length() / 5.0;
    double minutes = elapsed.count() / 60.0;

    if (minutes > 0)
    {
        wpm = words / minutes;
    }

    // Results

    cout << fixed << setprecision(1);
    cout << "== == == == == RESULTS == == == == ==\n";
    cout << "Correct characters: " << correct << '\n';
    cout << "Wrong characters: " << wrong << '\n';
    cout << "Accuracy: " << accuracy << "%\n";
    cout << "Time taken: " << elapsed.count() << " seconds\n";
    cout << "Words per minute: " << wpm << " WPM\n";
    cout << "=============================\n";
}