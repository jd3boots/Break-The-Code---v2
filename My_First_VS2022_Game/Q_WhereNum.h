#pragma once


class Q_WhereNum : public QuestionGeneric<vector<int>>
{
private:
    int num;
public:
    Q_WhereNum(int num);

    virtual void AnswerQuestion(Hand hand, vector<int>& answer) override;
    virtual void AskQuestion(Hand hand) override;
};
