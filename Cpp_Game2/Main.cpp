#include  "Headers.h"



int main(void)
{
	system("mode con:cols=120 lines=60");
	ULONGLONG Time = GetTickCount64();	
	Object* Player = new Object;
	Initialize(Player, (char*)"��", (char*)"��", (char*)"��ǡ�", (char*)"������", 60, 54);



	
	float Power = 0.0f;
	bool Check = false;

	while(true)
	{
		OnDrawObj((char*)"������", 18.0f, 20.0f, 4);
		OnDrawObj((char*)"�գա�", 18.0f, 21.0f, 12);
		OnDrawObj((char*)"�ءԢ�", 18.0f, 22.0f, 12);
		OnDrawObj((char*)"��", 20.0f, 23.0f, 12);
		//OnDrawObj((char*)"��", 20.0f, 23.0f, 12);

		//if (Time + 80 < GetTickCount64())
		//{
		//	system("cls");

		//	UpdateInput(Player);

		//	if (!Check && GetAsyncKeyState(VK_SPACE) & 0x0001)
		//	{
		//		// �� �ʱ�ȭ
		//		Power = 0;

		//		Check = true;
		//	}
		//	// ��ư�� ������ ������
		//	if (GetAsyncKeyState(VK_SPACE) & 0x8000)
		//	{
		//		if (Power < 10)
		//			Power += 0.1f;
		//	}

		//	/*OnDrawObj(Player->Info.Texture[0], Player->TransInfo.Position.x, Player->TransInfo.Position.y);
		//	OnDrawObj(Player->Info.Texture[1], Player->TransInfo.Position.x, Player->TransInfo.Position.y + 1);
		//	OnDrawObj(Player->Info.Texture[2], Player->TransInfo.Position.x - 2, Player->TransInfo.Position.y + 2);
		//	OnDrawObj(Player->Info.Texture[3], Player->TransInfo.Position.x - 2, Player->TransInfo.Position.y + 3, 12);*/

		//	OnDrawObj((char*)"[                    ]", 1.0f, 28.0f);
		//	for (int i = 0; i < Power; ++i)
		//	{
		//		OnDrawObj((char*)"��", 2.0f + i * 2, 28.0f);
		//		if (Power >= 10)
		//		{
		//			OnDrawObj((char*)"[ ! O V E R H I T ! ]", 1.0f, 28.0f, 12);
		//		}
		//	}

		//}
		
	}
	
	
}