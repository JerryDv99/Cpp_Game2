#pragma once


void Initialize(Object* _Object, char* _Texture1, char* _Texture2, char* _Texture3, char* _Texture4, float _PosX = 0, float _PosY = 0, float _PosZ = 0);
char* SetName();
void SetCursorPosition(const float _x, const float _y);

// Text의 색을 변경
void SetTextColor(const int _Color);

void OnDrawObj(const char* _str1, const float _x, const float _y, const int _Color = 15);
void UpdateInput(Object* _Object);

void Initialize(Object* _Object, char* _Texture1, char* _Texture2, char* _Texture3, char* _Texture4, float _PosX, float _PosY, float _PosZ)
{
	// ** 3항 연산자
	// _Texture의 값이 nullptr이면 SetName()함수 실행
	// 아니라면 _Texture 값 대입
	_Object->Info.Texture[0] = _Texture1;

	_Object->Info.Texture[1] = _Texture2;

	_Object->Info.Texture[2] = _Texture3;

	_Object->Info.Texture[3] = _Texture4;



	_Object->Speed = 0;

	// ** 좌표값
	_Object->TransInfo.Position = Vector3(_PosX, _PosY, _PosZ);

	// ** 회전값 (현재 사용 안함)
	_Object->TransInfo.Rotation = Vector3(0.0f, 0.0f, 0.0f);

	// ** 크기값
	_Object->TransInfo.Scale = Vector3((float)strlen(_Object->Info.Texture[3]), 4.0f, 0.0f);

	_Object->ETime = 0;

}

char* SetName()
{
	// 포인터 변수에는 바로 입력받을 수 없기 때문에 문자열을 입력 받을 임시 변수를 배열로 생성 
	char Buffer[128] = "";

	cout << "입력 : "; cin >> Buffer;

	// 포인터 변수를 선언하여 입력받은 문자열의 길이 + null 만큼의 크기를 할당
	//char* pName = (char*)malloc(strlen(Buffer) + 1);
	char* pName = new char[strlen(Buffer) + 1];

	// 입력받은 문자열의 내용 복사
	strcpy(pName, Buffer);

	// char* 반환
	return pName;
}

void SetCursorPosition(const float _x, const float _y)
{
	COORD Pos = { (SHORT)_x, (SHORT)_y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void SetTextColor(const int _Color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _Color);
}

void OnDrawObj(const char* _str, const float _x, const float _y, const int _Color)
{
	SetCursorPosition(_x, _y);
	SetTextColor(_Color);
	cout << _str;

}

void UpdateInput(Object* _Object)
{
	// ** [상] 키를 입력받음.
	if (GetAsyncKeyState(VK_UP))
		_Object->TransInfo.Position.y -= 1;
											
	// ** [하] 키를 입력받음.				  
	if (GetAsyncKeyState(VK_DOWN))			
		_Object->TransInfo.Position.y += 1;
											
	// ** [좌] 키를 입력받음.				 
	if (GetAsyncKeyState(VK_LEFT))			
		_Object->TransInfo.Position.x -= 2;
											
	// ** [우] 키를 입력받음.				  
	if (GetAsyncKeyState(VK_RIGHT))			
		_Object->TransInfo.Position.x += 2;
}