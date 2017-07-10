

// RooBarb
#include "Utils.h"
#include "Logger.h"
#include "XmlConfig.h"
#include "TaskEngine.h"
using namespace jdb;

// STL
#include <iostream>
#include <exception>


#include "PicoDstSkimmer/PicoDstSkimmer.h"

#define LOGURU_IMPLEMENTATION 1
#include "vendor/loguru.h"

int main( int argc, char* argv[] ) {
	loguru::add_file("everything.log", loguru::Truncate, loguru::Verbosity_MAX);

	//  I do not understand why but on PDSF
	// there a re tons of undefined reference errors if these two lines are not included here
	// I think the compiler optimizes away these implementations if they are not present
	cout << "test: "  << quote( "hello" ) << endl;
	Logger::setGlobalLogLevel( "none" );

	TaskFactory::registerTaskRunner<PicoDstSkimmer>( "PicoDstSkimmer" );

	TaskEngine engine( argc, argv );

	return 0;
}
