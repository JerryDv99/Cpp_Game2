#pragma once

struct Vector3
{
	float x = 0, y = 0, z = 0;

	Vector3() {};	//	�⺻ ������ ���̴�

	Vector3(float _x, float _y)	// ���� �����ڸ� ���� �� ����
		: x(_x), y(_y), z(0) { };	// ������� �ʴ� ������ �ʱ�ȭ

	Vector3(float _x, float _y, float _z)	// �̸��� ���Ƶ� �Ű������� ���³� ������ ���� �´� �Լ� ȣ��
		: x(_x), y(_y), z(_z) { };
};


struct Transform
{
	// ������Ʈ�� �����ϱ� ���� �ʿ��� �ּ����� ��ҵ�
	Vector3 Position[4];	// ��ǥ
	Vector3 Rotation;	// ȸ����
	Vector3 Scale;		// ũ��
};

struct Information
{
	char* Texture[4];
	int Color;
	int Option;
};

struct Object
{
	char* Name;
	int Speed;
	Information Info;
	Transform TransInfo;
	ULONGLONG ETime = GetTickCount64();
};

struct DrawTextInfo
{
	Information Info;
	Transform TransInfo;
};