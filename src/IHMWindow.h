#ifndef IHMWINDOW_H
#define IHMWINDOW_H

#include "Button.h"

using namespace sf;
using namespace std;

class IHMWindow : public RenderWindow
{
	public:
		IHMWindow(VideoMode mode, const String &title, Uint32 style=Style::Default, const ContextSettings &settings=ContextSettings());
		~IHMWindow();
		void add(Button* b);
		void update();
	protected:
	private:
		vector<Button*> shapeList;
};

#endif // IHMWINDOW_H
