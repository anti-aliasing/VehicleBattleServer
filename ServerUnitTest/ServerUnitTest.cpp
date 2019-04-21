#include "pch.h"
#include "CppUnitTest.h"
#include "../Server/DbUtil.h"	//������������"../Server/x64/Debug/*.obj"
#include "../Server/LoginHandle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace GameServer::Util;
using namespace GameServer::Handle;

namespace ServerUnitTest
{
	TEST_CLASS(ServerUnitTest)
	{
	public:
		TEST_METHOD(GetSeessionTestMethod)
		{
			auto session = DBUtil::GetInstance()->GetSession();
			auto name = session.getDefaultSchema().getName();
			Assert::AreEqual(name.c_str(), L"vehicleBattle");
		}
		TEST_METHOD(RegisterTestMethod)
		{
			LoginHandle loginHandle;
			loginHandle.Register("test", "123123", [](std::string s) {});
		}
	};
}
