#include std;

class calc{
    public:
    float a,b,c;

    calc(float _a, float _b, float _c){
        a = _a;
        b = _b;
        c = _c;
    }

    float calculate1(char s) {
       if (s == '+'){
           return a*2 + b*2 + c;
       }
       else {
        return a*2 - b*2 - c;
       }
    }
};



calc sum(1,2,3);
print(sum.calculate1('+'));
