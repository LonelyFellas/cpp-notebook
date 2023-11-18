#include <iostream>
using namespace std;
enum Grade {
    A,
    B,
    C,
    D,
    F
};

// 函数将分数转换为成绩登记
Grade scoreToGrade(int score) {
    if (score >= 90) return A;
    else if (score >= 80) return B;
    else if (score >= 70) return C;
    else if (score >= 60) return D;
    else return F;
}
int main() {
    int score;
    cout << "请输入学生的分数：";
    cin >> score;

    // 检查分数是否有效
    if (score < 0 || score > 100) {
        cout << "无效的分数" << endl;
        return 1;
    }

    Grade grade = scoreToGrade(score);

    // 根据枚举值打印等级
    switch (grade) {
        case A: cout << "学生的等级是：A" << endl; break;
        case B: cout << "学生的等级是：B" << endl; break;
        case C: cout << "学生的等级是：C" << endl; break;
        case D: cout << "学生的等级是：D" << endl; break;
        case F: cout << "学生的等级是：F" << endl; break;
    }
    return 0;
}
