//http://itmining.tistory.com/51 <- swallow copy(얕은복사), deep copy(깊은복사) 참조

//	인자 전달 방식

//	값에 의한 호출, call by value
//		함수가 호출되면 매개 변수가 스택에 생성됨
//		호출하는 코드에서 값을 넘겨줌
//		호출하는 코드에서 넘어온 값이 매개 변수에 복사됨
//
//	주소에 의한 호출, call by address
//		함수의 매개 변수는 포인터 타입
//			함수가 호출되면 포인터 타입의 매개 변수가 스택에 생성됨
//		호출하는 코드에서는 명시적으로 주소를 넘겨줌
//			기본 타입 변수나 객체의 경우,주소 전달
//			배열의 경우, 배열의 이름
//		호출하는 코드에서 넘어온 주소 값이 매개 변수에 저장됨

//	반환형일 경우에는 copy본을 따로 만드는것이 가장 좋음

//	객체 치환
//		동일한 클래스 타입의 객체끼리 치환 가능
//		객체의 모든 데이터가 비트 단위로 복사
//			Circle c1(5);
//			Circle c2(30);
//			c1 = c2; // c2 객체를 c1 객체에 비트 단위 복사.  c1의 반지름 30됨
//		치환된 두 객체는 현재 내용물만 같을 뿐 독립적인 공간 유지

//	객체 리턴
//		Circle getCircle() {
//			Circle tmp(30);
//			return tmp; // 객체 tmp 리턴
//		}
//		Circle c; // c의 반지름 1
//		c = getCircle();

//	체이닝 외에 레퍼런스 변수는 반환하지 않음

//	참조 변수 선언 (레퍼런스 변수 선언)
//		참조자 &의 도입
//		이미 존재하는 변수에 대한 다른 이름(별명)을 선언
//			참조 변수는 이름만 생기며
//			참조 변수에 새로운 공간을 할당하지 않는다.
//			초기화로 지정된 기존 변수를 공유한다.
//  int n = 2;
//	int &refn = n; // 참조변수 refn선언. refn은 n에 대한 별명
//	Circle circle;
//	Circle &refc = circle; // 참조 변수 refc 선언. refc는 Circle에 대한 별명