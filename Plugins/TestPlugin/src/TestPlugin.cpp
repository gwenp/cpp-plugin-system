#include "TestPlugin.hpp"

TestPlugin::TestPlugin(IApplication* app) : ITestPlugin(app, "TestPlugin")
{

}

TestPlugin::~TestPlugin()
{

}

void TestPlugin::displayTestInformation()
{
	
	std::cout << "-------------------" << std::endl;
	std::cout << "Test plugin manager" << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << "These 'couts' are encapsulated on the plugin, which is lazy loaded and can be swaped with other plugins." << std::endl;
	std::cout << "However, this system suffers of limitations :" << std::endl;
	std::cout << "- Plugins highly depends on operating systems due to different dynamic linking APIs throughout different existing OS" << std::endl;
	std::cout << "- Plugins might also not work if compiled with different compilers (or even different versions of them) because the layout of the vtable is sadly not a standard..." << std::endl << std::endl;
	std::cout << "If you have a good proposal to make it (even a little) more cross platform or less limited in any way,  don't hesitate to contact me!" << std::endl;
	std::cout << "<https://github.com/gwenp>" << std::endl << std::endl;
	std::cout << "... and fork me !!!" << std::endl;
	std::cout << "-------------------" << std::endl;

}

extern "C"
{
    Plugin* makePlugin(IApplication* app)
    {
  		return new TestPlugin(app);
    }
}
