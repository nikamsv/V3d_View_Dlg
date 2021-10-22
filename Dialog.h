
// Dialog.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include <Graphic3d_GraphicDriver.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include "resource.h"

class CDialogApp : public CWinApp
{
private:
	Handle(Graphic3d_GraphicDriver) myGraphicDriver;

public:
	CDialogApp();
	virtual BOOL InitInstance();
	const Handle(Graphic3d_GraphicDriver)& GetGraphicDriver() const;
};

extern CDialogApp theApp;
