#pragma once
#include <string>

// ���ڼ�ͨ��Э��

#define WM_ShowQrCode 1		// ȡ��΢�ŵ�½��ά��
#define WM_CheckIsLogin 501	// ����Ƿ��¼
#define WM_HookReciveMsg 502	// hook��Ϣ����
#define WM_ReciveMsg 503	// ��Ϣ����

void AntiRevoke();
// ��ʾ��½��ά��
void WX_CallShowQrCode();
// ж��WX_SaveQrCode
void WX_SaveQrCode_Unhook(DWORD dwHookOffset);
void invokeSaveImg();
void SaveImg(DWORD qrcode);
// ����Ƿ��¼
void CheckIsLogin();


// �����½��ά��
void HOOK_SaveQrCode();

void HOOK_ReciveMsg();
void RecieveWxMesage();
void SendWxMessage();



std::wstring GetMsgByAddress(DWORD memAddress);