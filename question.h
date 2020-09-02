class Question
{
    std::string question;
    std::string ans1, ans2, ans3, ans4;
    std::string correctAnswer, userAnswer;
public:

    int number;
    int pkt;

    void readFromFile();
    void showQuestion();
    void checkResults();
};

//static int licznik; - common value for all parameters