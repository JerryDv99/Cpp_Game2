#pragma once


void Initialize(Object* _Object, char* _Texture1, char* _Texture2, char* _Texture3, char* _Texture4, float _PosX = 0, float _PosY = 0, float _PosZ = 0);
char* SetName();
void SetCursorPosition(const float _x, const float _y);

// Text�� ���� ����
void SetTextColor(const int _Color);

void OnDrawObj(const char* _str1, const float _x, const float _y, const int _Color = 15);
void UpdateInput(Object* _Object);

void Initialize(Object* _Object, char* _Texture1, char* _Texture2, char* _Texture3, char* _Texture4, float _PosX, float _PosY, float _PosZ)
{
	// ** 3�� ������
	// _Texture�� ���� nullptr�̸� SetName()�Լ� ����
	// �ƴ϶�� _Texture �� ����
	_Object->Info.Texture[0] = _Texture1;

	_Object->Info.Texture[1] = _Texture2;

	_Object->Info.Texture[2] = _Texture3;

	_Object->Info.Texture[3] = _Texture4;



	_Object->Speed = 0;

	// ** ��ǥ��
	_Object->TransInfo.Position = Vector3(_PosX, _PosY, _PosZ);

	// ** ȸ���� (���� ��� ����)
	_Object->TransInfo.Rotation = Vector3(0.0f, 0.0f, 0.0f);

	// ** ũ�Ⱚ
	_Object->TransInfo.Scale = Vector3((float)strlen(_Object->Info.Texture[3]), 4.0f, 0.0f);

	_Object->ETime = 0;

}

char* SetName()
{
	// ������ �������� �ٷ� �Է¹��� �� ���� ������ ���ڿ��� �Է� ���� �ӽ� ������ �迭�� ���� 
	char Buffer[128] = "";

	cout << "�Է� : "; cin >> Buffer;

	// ������ ������ �����Ͽ� �Է¹��� ���ڿ��� ���� + null ��ŭ�� ũ�⸦ �Ҵ�
	//char* pName = (char*)malloc(strlen(Buffer) + 1);
	char* pName = new char[strlen(Buffer) + 1];

	// �Է¹��� ���ڿ��� ���� ����
	strcpy(pName, Buffer);

	// char* ��ȯ
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
	// ** [��] Ű�� �Է¹���.
	if (GetAsyncKeyState(VK_UP))
		_Object->TransInfo.Position.y -= 1;
											
	// ** [��] Ű�� �Է¹���.				  
	if (GetAsyncKeyState(VK_DOWN))			
		_Object->TransInfo.Position.y += 1;
											
	// ** [��] Ű�� �Է¹���.				 
	if (GetAsyncKeyState(VK_LEFT))			
		_Object->TransInfo.Position.x -= 2;
											
	// ** [��] Ű�� �Է¹���.				  
	if (GetAsyncKeyState(VK_RIGHT))			
		_Object->TransInfo.Position.x += 2;
}