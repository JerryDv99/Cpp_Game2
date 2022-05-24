#include  "Headers.h"



int main(void)
{
	system("mode con:cols=120 lines=60");
	ULONGLONG Time = GetTickCount64();	
	Object* Player = new Object;
	Initialize(Player, (char*)"¥Ä", (char*)"¥Ð", (char*)"¡ì¥Ç¡í", (char*)"¡ý¡ý¡ý", 60, 54);
	while(true)
	{
		if (Time + 80 < GetTickCount64())
		{
			UpdateInput(Player);
			OnDrawObj(Player->Info.Texture[0], Player->TransInfo.Position[0].x, Player->TransInfo.Position[0].y);
			OnDrawObj(Player->Info.Texture[1], Player->TransInfo.Position[1].x, Player->TransInfo.Position[1].y);
			OnDrawObj(Player->Info.Texture[2], Player->TransInfo.Position[2].x, Player->TransInfo.Position[2].y);
			OnDrawObj(Player->Info.Texture[3], Player->TransInfo.Position[3].x, Player->TransInfo.Position[3].y, 12);
		}
		
	}
	
	
}