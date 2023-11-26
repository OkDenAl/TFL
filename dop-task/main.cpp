#include <string>
#include <vector>
#include <iostream>
#include <memory>

class string

class RegexGenerator {
    friend class StringGenerator;
private:
    std::vector<char> alphabet;
    size_t seed = 0;


    int lettersNum;
    int starNesting;
    int lookaheadNum;
    int lookbehindNum;

    bool needRestrictionsForLookbehind;


    std::string res;

public:
    RegexGenerator();
    RegexGenerator(int lettersNum, int starNesting,int lookaheadNum, int lookbehindNum,int alphabetSize, bool needRestrictionsForLookbehind=true);
};

RegexGenerator::RegexGenerator():
RegexGenerator::RegexGenerator(int lettersNum, int starNesting,int lookaheadNum,
                               int lookbehindNum,int alphabetSize,bool needRestrictionsForLookbehind)
        :lettersNum(lettersNum),starNesting(starNesting),lookaheadNum(lookaheadNum),
         lookbehindNum(lookbehindNum), needRestrictionsForLookbehind(needRestrictionsForLookbehind) {

    if (lettersNum < 0) return;
    if (starNesting < 0) starNesting = 0;
    if (lookaheadNum < 0) lookaheadNum = 0;
    if (lookbehindNum < 0) lookbehindNum = 0;
    if (alphabetSize< 1) alphabetSize= 1;

    for (char i = 'a'; i < 'a' + alphabetSize && i <= 'z'; i++) {
        alphabet.push_back(i);
    }
}


class Test;

class Testing
{
    std::unique_ptr<Test> pImpl;
public:
    Testing()=default;
};

class IClass{
    virtual void Test()=0;
};

class Class1:IClass { // ошибка на строке 76 фиксится тем, что сюда нужно написать public
    int p;
    void Test() override{
        std::cout<<"From test\n";
    };
public:
    Class1(int a):p(a){p=-a;};
};

std::string GenerateRegex( std::unique_ptr<IClass> b) {
    return "";
}

int  main(){
    Testing w;
    GenerateRegex(std::make_unique<Class1>(Class1 (1)));
}