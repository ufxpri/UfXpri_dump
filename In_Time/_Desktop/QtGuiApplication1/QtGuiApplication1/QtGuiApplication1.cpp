#include "QtGuiApplication1.h"
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qpushbutton.h>

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	resize(300, 300);
	auto place = new QWidget;
	auto vLayout = new QVBoxLayout;

	auto lab = new QLabel(QStringLiteral(uR"(<div style="background-color: gray; font-size: 10pt;">PLAY PONY</div>)"));
	vLayout->addWidget(lab);

	auto but = new QPushButton(QStringLiteral(u"get out"));
	connect(but, &QPushButton::clicked, this, &QtGuiApplication1::close);
	vLayout->addWidget(but);

	place->setLayout(vLayout);
	setCentralWidget(place);

	//ui.setupUi(this);
}
