//
// BundleRepositoryTest.h
//
// $Id: //poco/1.7/OSP/testsuite/src/BundleRepositoryTest.h#1 $
//
// Definition of the BundleRepositoryTest class.
//
// Copyright (c) 2007-2014, Applied Informatics Software Engineering GmbH.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//


#ifndef BundleRepositoryTest_INCLUDED
#define BundleRepositoryTest_INCLUDED


#include "Poco/OSP/OSP.h"
#include "CppUnit/TestCase.h"


class BundleRepositoryTest: public CppUnit::TestCase
{
public:
	BundleRepositoryTest(const std::string& name);
	~BundleRepositoryTest();

	void testLoad();
	void testInstall();
	
	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

protected:
	std::string findBundleRepository();
};


#endif // BundleRepositoryTest_INCLUDED
