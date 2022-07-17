#pragma once

#include <Dolphin/types.h>
#include <Dolphin/OS.h>
#include <JSystem/JUtility/JUTDirectPrint.hxx>
#include <JSystem/JKernel/JKRThread.hxx>

class JUTException : public JKRThread
{
public:
    JUTException(JUTDirectPrint *printer);
	virtual ~JUTException();

	virtual void run();

	static void appendMapFile(char *mapPath);
    void create(JUTDirectPrint *);
	void createFB();
    void errorHandler(u16, OSContext *, u32, u32);
	void printContext(u16, OSContext *, u32, u32);
	static bool queryMapAddress(char *, u32, s32, u32 *, u32 *, char *, u32, bool, bool);

    void showFloat(OSContext *);
    void showGPR(OSContext *);
    void showGPRMap(OSContext *);
    void showMapInfo_subroutine(u32, bool);
    void showStack(OSContext *);

    u32 _60;
    JUTDirectPrint *mPrinter; // _64

    static char **sCpuExpName;
};