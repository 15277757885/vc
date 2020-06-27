﻿
// MFC七实验3View.cpp: CMFC七实验3View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC七实验3.h"
#endif

#include "MFC七实验3Doc.h"
#include "MFC七实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC七实验3View

IMPLEMENT_DYNCREATE(CMFC七实验3View, CView)

BEGIN_MESSAGE_MAP(CMFC七实验3View, CView)
END_MESSAGE_MAP()

// CMFC七实验3View 构造/析构

CMFC七实验3View::CMFC七实验3View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMFC七实验3View::~CMFC七实验3View()
{
}

BOOL CMFC七实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC七实验3View 绘图

void CMFC七实验3View::OnDraw(CDC* /*pDC*/)
{
	CMFC七实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC七实验3View 诊断

#ifdef _DEBUG
void CMFC七实验3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC七实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC七实验3Doc* CMFC七实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC七实验3Doc)));
	return (CMFC七实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC七实验3View 消息处理程序
