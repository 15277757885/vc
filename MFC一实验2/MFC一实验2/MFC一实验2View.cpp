
// MFC一实验2View.cpp: CMFC一实验2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC一实验2.h"
#endif

#include "MFC一实验2Doc.h"
#include "MFC一实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC一实验2View

IMPLEMENT_DYNCREATE(CMFC一实验2View, CView)

BEGIN_MESSAGE_MAP(CMFC一实验2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC一实验2View 构造/析构

CMFC一实验2View::CMFC一实验2View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMFC一实验2View::~CMFC一实验2View()
{
}

BOOL CMFC一实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC一实验2View 绘图

void CMFC一实验2View::OnDraw(CDC* pDC)
{
	CMFC一实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC一实验2View 诊断

#ifdef _DEBUG
void CMFC一实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC一实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC一实验2Doc* CMFC一实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC一实验2Doc)));
	return (CMFC一实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC一实验2View 消息处理程序


void CMFC一实验2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC一实验2Doc* pDoc = GetDocument();
	pDoc->count = pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC一实验2View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC一实验2Doc* pDoc = GetDocument();
	CString s;
	s.Format("%d",pDoc->count);
	CClientDC dc(this);
	dc.TextOut(200, 200, s);
	CView::OnRButtonDown(nFlags, point);
}
