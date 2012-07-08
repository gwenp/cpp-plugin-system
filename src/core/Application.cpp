#include "Application.hpp"

Application::Application(int argc, char *argv[]) : IApplication()
{
	Application* app = this;
	_pluginManager = new ConcretePluginManager(app,argc,argv);
}

Application::~Application()
{
	delete _pluginManager;
}

void Application::loadPlugins(int argc, char *argv[])
{
	// _pluginManager->loadPlugin("./Plugins/settingsPlugin/settingsPlugin.plg","makePlugin");
	// ISettingsPlugin* settingsPlugin = (ISettingsPlugin*) _pluginManager->getPluginByName("SettingsPlugin");
}

