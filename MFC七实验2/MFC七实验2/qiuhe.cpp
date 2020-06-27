// qiuhe.cpp: 实现文件
//

#include "pch.h"
#include "MFC七实验2.h"
#include "qiuhe.h"
#include "afxdialogex.h"


// qiuhe 对话框

IMPLEMENT_DYNAMIC(qiuhe, CDialogEx)

qiuhe::qiuhe(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
{

}

qiuhe::~qiuhe()
{
}

void qiuhe::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
	DDX_Control(pDX, IDC_BUTTON1, xiangjia);
}


BEGIN_MESSAGE_MAP(qiuhe, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &qiuhe::OnClickedButton1)
END_MESSAGE_MAP()


// qiuhe 消息处理程序


void qiuhe::OnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	c = a + b;
	UpdateData(false);
	
}
