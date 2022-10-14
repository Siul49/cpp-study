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

Rect BigRect(Rect X, Rect Y) {
	// area가 더 큰 객체를 반환한다
	if (X.area > Y.area) {
		return X;
	}
	else if (X.area < Y.area) {
		return Y;
	}
	else return Y;
}

void increaseRect(Rect& X) { // &X = A; 참조가 됨
	X.h *= 2;
	X.w *= 2;
	X.area = X.h * X.w;
}


void decreaseRect(Rect* X) {
	X->h /= 2;
	X->w /= 2;
	X->area = X->h * X->w;
}
int main()
{

	Rect A(15, 10);
	Rect B(20, 30);

	cout << "A 사각형의 넓이는 " << A.area << " 이다." << endl;
	cout << "B 사각형의 넓이는 " << B.area << " 이다." << endl;

	Rect C;
	C = BigRect(A, B);
	cout << "C  " << C.area << endl;

	increaseRect(A);
	cout << A.w << endl;
	cout << A.h << endl;
	cout << A.area << endl;

	decreaseRect(&B);
	cout << "B.w" << B.w << endl;
	cout << "B.h" << B.h << endl;
}