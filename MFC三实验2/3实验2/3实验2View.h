
// 3实验2View.h : CMy3实验2View 类的接口
//

#pragma once


class CMy3实验2View : public CView
{
protected: // 仅从序列化创建
	CMy3实验2View();
	DECLARE_DYNCREATE(CMy3实验2View)

// 特性
public:
	CMy3实验2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy3实验2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 3实验2View.cpp 中的调试版本
inline CMy3实验2Doc* CMy3实验2View::GetDocument() const
   { return reinterpret_cast<CMy3实验2Doc*>(m_pDocument); }
#endif

