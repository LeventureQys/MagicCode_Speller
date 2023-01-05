#pragma once
#pragma execution_character_set( "utf-8" )
#include "magicspeller_global.h"
#include "qobject.h"
#include "qdebug.h"

//调用方法：直接调用即可
//magic_spells::MakeWish(magic_spells::Wish_Type::Shenshou1);

class MAGICSPELLER_EXPORT magic_spells :public QObject
{
	Q_OBJECT
private:

#pragma region Magic_Wishes

	static QString ImgBuda() {
		return  QString(""\

			"                    _ooOoo_\n"
			"                   o8888888o\n"
			"                   88\" . \"88\n"
			"                   (| -_- |)\n"
			"                    O\\ = /O\n"
			"                ____/`---'\\____\n"
			"              .   ' \\\\| |// `.\n"
			"               / \\\\||| : |||// \\\n"
			"             / _||||| -:- |||||- \\\n"
			"               | | \\\\\\ - /// | |\n"
			"             | \\_| ''\\---/'' | |\n"
			"              \\ .-\\__ `-` ___/-. /\n"
			"           ___`. .' /--.--\\ `. . __\n"
			"        .\"\" '< `.___\\_<|>_/___.' >'\"\".\n"
			"       | | : `- \\`.;`\\ _ /`;.`/ - ` : | |\n"
			"         \\ \\ `-. \\_ __\\ /__ _/ .-` / /\n"
			" ======`-.____`-.___\\_____/___.-`____.-'======\n"
			"                    `=---='"
			"\n"
			" .............................................\n"
			"          佛祖保佑             永无BUG\n"
			"\n");
	};
	static QString ImgKunkun() {
		return QString(
			"\n"
			" ⠀⠀⠀⠀⠰⢷⢿⠄\n"
			"⠀⠀⠀⠀⠀⣼⣷⣄\n"
			"⠀⠀⣤⣿⣇⣿⣿⣧⣿⡄\n"
			"⢴⠾⠋⠀⠀⠻⣿⣷⣿⣿⡀\n"
			"○ ⠀⢀⣿⣿⡿⢿⠈⣿\n"
			"⠀⠀⠀⢠⣿⡿⠁⠀⡊⠀⠙\n"
			"⠀⠀⠀⢿⣿⠀⠀⠹⣿\n"
			"⠀⠀⠀⠀⠹⣷⡀⠀⣿⡄\n"
			"⠀⠀⠀⠀⣀⣼⣿⠀⢈⣧.\n"
			" 你干嘛~~哎呀~~\n"
		);
	}
	static QString ImgShenshou1() {
		return QString(
			""
			""
			"                  ___====-_  _-====___\n"
			"             _--^^^#####//      \\\\#####^^^--_\n"
			"          _-^##########// (    ) \\\\##########^-_\n"
			"        -############//  |\\^^/|  \\\\############-\n"
			"      _/############//   (@::@)   \\\\############\\_\n"
			"     /#############((     \\\\//     ))#############\\\n"
			"    -###############\\\\    (oo)    //###############-\n"
			"   -#################\\\\  / VV \\  //#################-\n"
			"  -###################\\\\/      \\//###################-\n"
			"  _#/|##########/\\######(   /\\   )######/\\##########|\\#_\n"
			" |/ |#/\\#/\\#/\\/  \\#/\\##\\  |  |  /##/\\#/  \\/\\#/\\#/\\#| \\|\n"
			" `  |/  V  V  `   V  \\#\\| |  | |/#/  V   '  V  V  \\|  '\n"
			"     `   `  `      `   / | |  | | \\   '      '  '   '\n"
			"                     (  | |  | |  )\n"
			"                    __\\ | |  | | /__\n"
			"                   (vvv(VVV)(VVV)vvv)\n"
			"                        神兽保佑\n"
			"                       代码无BUG!\n"
		);
	}
	static QString ImgShenshou2() {
		return QString(


			"\n"
			"┏┓　　　┏┓ + +\n"
			"┏┛┻━━━┛┻┓ + +\n"
			"┃　　　　　　　┃\n"
			" ┃　　　━　　　┃++ + ++\n"
			" ████━████ ┃ +\n"
			"┃　　　　　　　┃ +\n"
			"┃　　　┻　　　┃\n"
			" ┃　　　　　　　┃ + +\n"
			"┗━┓　　　┏━┛\n"
			" ┃　　　┃　　\n"
			" ┃　　　┃ + +++\n"
			"┃　　　┃\n"
			" ┃　　　┃ + 神兽保佑\n"
			" ┃　　　┃    代码无bug　　\n"
			" ┃　　　┃　　 +\n"
			"┃　 　　┗━━━┓ + +\n"
			"┃ 　　　　　　　┣┓\n"
			" ┃ 　　　　　　　┏┛\n"
			" ┗┓┓┏━┳┓┏┛ + +++\n"
			"┃┫┫　┃┫┫\n"
			" ┗┻┛　┗┻┛ + +++\n"
			""
			""
		);
	}
	static QString ImgMeiNv() {
		return QString(

			""
			"                       .::::.\n"
			"                     .::::::::.\n"
			"                    :::::::::::\n"
			"                 ..:::::::::::'\n"
			"              '::::::::::::'\n"
			"                .::::::::::\n"
			"           '::::::::::::::..\n"
			"                ..::::::::::::.\n"
			"              ``::::::::::::::::\n"
			"               ::::``:::::::::'        .:::.\n"
			"              ::::'   ':::::'       .::::::::.\n"
			"            .::::'      ::::     .:::::::'::::.\n"
			"           .:::'       :::::  .:::::::::' ':::::.\n"
			"          .::'        :::::.:::::::::'      ':::::.\n"
			"         .::'         ::::::::::::::'         ``::::.\n"
			"     ...:::           ::::::::::::'              ``::.\n"
			"    ```` ':.          ':::::::::'                  ::::..\n"
			"                       '.:::::'                    ':'````..\n"
		);
	}
#pragma endregion
public:
	enum class Wish_Type {
		Buda = 1, Kunkun = 2,Shenshou1 = 3,Shenshou2 = 4,MeiNv=5
	};
	static void MakeWish(Wish_Type type) {
		switch (type) {
		case Wish_Type::Buda:
			qDebug().noquote() << ImgBuda();
			break;
		case Wish_Type::Kunkun:
			qDebug().noquote() << ImgKunkun();
			break;
		case Wish_Type::Shenshou1:
			qDebug().noquote() << ImgShenshou1();
			break;
		case Wish_Type::Shenshou2:
			qDebug().noquote() << ImgShenshou2();
			break;
		case Wish_Type::MeiNv:
			qDebug().noquote() << ImgMeiNv();
		default:
			break;
		}
	}
};