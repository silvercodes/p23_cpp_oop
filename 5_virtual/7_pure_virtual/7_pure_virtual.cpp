#include <iostream>

// --- Чистые виртуальные ф-ции (абстрактные классы)

//class Parent
//{
//public:
//    virtual void f1()
//    {
//        std::cout << "Parent::f1()";
//    }
//
//    virtual void f2() = 0;                      // Чистая виртуальная ф-ция (абстрактная ф-ция)
//
//    // void f3() = 0;                           // ERROR
//
//    virtual void f4() = 0;
//};
//
//
//class Child: public Parent
//{
//public:
//    virtual void f1() override
//    {
//        std::cout << "Child::f1()";
//    }
//
//    virtual void f2() override
//    {
//        std::cout << "Child::f2()";
//    }
//};
//
//
//
//
//
//int main()
//{
//    // Parent* p1 = new Parent{};                  // ERROR (т.к. Parent - это АБСТРАКТНЫЙ класс)
//
//    //Parent* p2 = new Child{};                       // ERROR (т.к. Child - это тоже АБСТРАКТНЫЙ класс)
//    // p2->f2();
//
//}





//#include <vector>
//
//class Mesh
//{
//public:
//	//
//	//
//	virtual void render() = 0;
//};
//
//class Tree : public Mesh
//{
//public:
//	virtual void render() override
//	{
//		std::cout << "tree";
//	}
//};
//
//class Stone : public Mesh
//{
//public:
//	virtual void render() override
//	{
//		std::cout << "stone";
//	}
//};
//
//class Unit : public Mesh
//{
//public:
//	virtual void render() override
//	{
//		std::cout << "unit";
//	}
//};
//
//
//
//int main()
//{
//	std::vector<Mesh*> arr;
//	arr.push_back(new Tree{});
//	arr.push_back(new Stone{});
//	arr.push_back(new Unit{});
//
//	for (int i{}; i < arr.size(); ++i)
//		arr[i]->render();
//
//}





// --- Дефолтная реализация ЧВФ ---

//enum AMode
//{
//	ZIP,
//	RAR,
//	DEFLATE,
//};
//
//class Archiver
//{
//private:
//	AMode mode;
//
//public:
//	Archiver(AMode mode):
//		mode{mode}
//	{}
//	virtual void setMode(AMode mode)
//	{
//		this->mode = mode;
//	}
//
//	virtual void compress() = 0;
//
//	virtual void decompress() = 0;
//};
//
//// Дефолтная реализация (определение) ЧВФ
//void Archiver::compress()
//{
//	std::cout << "Archiver default compress()\n";
//}
//
//class ZipArchiver : public Archiver
//{
//public:
//	ZipArchiver(AMode mode = AMode::ZIP):
//		Archiver{mode}
//	{}
//	virtual void compress() override
//	{
//		Archiver::compress();
//		std::cout << "ZipArchiver::compress()\n";
//	}
//	virtual void decompress() override
//	{
//		std::cout << "ZipArchiver::decompress()\n";
//	}
//};
//
//class RarArchiver : public Archiver
//{
//public:
//	RarArchiver(AMode mode = AMode::RAR) :
//		Archiver{ mode }
//	{}
//	virtual void compress() override
//	{
//		Archiver::compress();
//		std::cout << "RarArchiver::compress()\n";
//	}
//	virtual void decompress() override
//	{
//		std::cout << "RarArchiver::decompress()\n";
//	}
//};
//
//class DeflateArchiver : public Archiver
//{
//public:
//	DeflateArchiver(AMode mode = AMode::DEFLATE) :
//		Archiver{ mode }
//	{}
//	virtual void compress() override
//	{
//		Archiver::compress();
//		std::cout << "DeflateArchiver::compress()\n";
//	}
//	virtual void decompress() override
//	{
//		std::cout << "DeflateArchiver::decompress()\n";
//	}
//};
//
//class Application
//{
//private:
//	//
//	//
//	Archiver* archiver;
//public:
//	Application(Archiver* archiver):
//		archiver{archiver}
//	{}
//
//	void run(std::string filePath)
//	{
//		this->archiver->compress();
//	}
//};
//
//int main()
//{
//	/*ZipArchiver* arch1 = new ZipArchiver{};
//	arch1->compress();
//
//	Archiver* arch2 = new ZipArchiver{};
//	arch2->compress();
//	
//	ZipArchiver a{};
//	Archiver& arch3 = a;
//	arch3.compress();*/
//
//
//	/*AMode mode = AMode::RAR;
//	Archiver* archiver = nullptr;
//
//	switch (mode)
//	{
//	case AMode::ZIP:
//		archiver = new ZipArchiver{};
//		break;
//	case AMode::RAR:
//		archiver = new RarArchiver{};
//		break;
//	}
//
//	archiver->compress();
//	archiver->decompress();*/
//
//
//	/*Archiver* arch = new ZipArchiver{};*/
//	Archiver* arch = new DeflateArchiver{};
//	Application* app = new Application{ arch };
//	app->run("test.txt");
//
//
//	return 0;
//}





// --- Интерфейсные классы (интерфейсы, контракты)
// абстрактный класс без полей (как правило) и содержащий ТОЛЬКО ЧВФ

//class ILogger
//{
//public:
//	virtual void save() = 0;
//	virtual int getState() = 0;
//	virtual void setSource(const std::string& src) = 0;
//
//	virtual ~ILogger(){}
//};
//
//class FileLogger: public ILogger
//{
//	virtual void save() override
//	{
//		std::cout << "FileLogger::save()\n";
//	}
//	virtual int getState() override
//	{
//		std::cout << "FileLogger::getState()\n";
//		return 1;
//	}
//	virtual void setSource(const std::string& src) override
//	{
//		std::cout << "FileLogger::setState()\n";
//	}
//};
//
//class TelegramLogger: public ILogger
//{
//	virtual void save() override
//	{
//		std::cout << "TelegramLogger::save()\n";
//	}
//	virtual int getState() override
//	{
//		std::cout << "TelegramLogger::getState()\n";
//		return 1;
//	}
//	virtual void setSource(const std::string& src) override
//	{
//		std::cout << "TelegramLogger::setState()\n";
//	}
//};
//
//class App
//{
//private:
//	ILogger* logger{nullptr};
//
//public:
//	void setLogger(ILogger* logger)
//	{
//		this->logger = logger;
//	}
//
//	void run()
//	{
//		//
//		//
//		this->logger->save();
//	}
//};
//
//
//
//
//int main()
//{
//	App app{};
//	app.setLogger(new TelegramLogger{});
//	//
//	//
//	app.setLogger(new FileLogger{});
//	app.run();
//
//}





// --- ИТОГ ---
// 
// Класс  <--  Абстрактный класс  <--  Интерфейсный класс (интерфейс)
// Ф-ция  <--  Виртуальная ф-ция  <--  Чистая виртуальная ф-ция (абстрактная)






