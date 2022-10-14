#include <iostream>
using namespace std;
// 오늘의 주제 복사!
class Rect {
public:
	float w, h, area;

	Rect();
	Rect(float a, float b);
};

Rect::Rect() {
	w, h = 1;
	area = w * h;
}

Rect::Rect(float a, float b) {
	w = a;
	h = b;
	area = w * h;
}

void BigRect(Rect* X, Rect Y, Rect& Z) {
	if (X->area > Y.area) {
		Z.area = X->area;
	}
	else if (X->area < Y.area) {
		Z.area = Y.area;
	}
}
int main()
{

	Rect A(15, 10);
	Rect B(20, 30);

	Rect C;
	
	BigRect(&A, B, C); // 첫번째와 두번째중 area가 큰 것을 세번째 인자에 복사한다.

	cout << "C  " << C.area << endl;

}