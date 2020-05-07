#include "Integer.h"
#include <memory>
/*
void Display(Integer* p) {
	if (!p) {
		return;
	}
	std::cout << p->GetValue() << std::endl;
}

Integer* GetPointer(int value) {
	Integer* p = new Integer(value);
	return p;
}

void Store(std::unique_ptr<Integer> &p) {
	std::cout << "Storing data into a file " << p->GetValue() << std::endl;
}

void Operate(int value) {
	std::unique_ptr<Integer> p(GetPointer(value));
	if (p == nullptr) {
		//p = new Integer{value};
		p.reset(new Integer(value));
	}
	p->SetValue(100);
	Display(p.get());
	//delete p;
	//p = nullptr;
	//p = new Integer{};
	p.reset(new Integer(value));
	*p = __LINE__;
	Display(p.get());
	Store(p);
	*p = 200;
	//delete p;
}
*/
class Project {
public:
	~Project() {
		std::cout << "~Project" << std::endl;
	}
};

class Employee {
	std::shared_ptr<Project> m_pProject;
public:
	void SetProject(std::shared_ptr<Project> p) {
		m_pProject = p;
	}
	std::shared_ptr<Project> GetProject() const {
		return m_pProject;
	}
	~Employee() {
		std::cout << "~Employee" << std::endl;
	}
};
std::shared_ptr<Employee> AssignProject() {
	std::shared_ptr<Project> p{ new Project{} };
	Employee* e = new Employee{};
	e->SetProject(p);
	return std::shared_ptr<Employee>(e);
}
int main() {
	auto sp = AssignProject();
	if (sp == nullptr) {

	}
	sp.get();
	sp.reset(new Employee{});
}