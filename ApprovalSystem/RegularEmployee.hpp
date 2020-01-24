#ifndef REGULAR_EMPLOYEE_HPP
#define REGULAR_EMPLOYEE_HPP
#include "TeamLeader.hpp"
#include <string>
class RegularEmployee : public TeamLeader{
	private:
		const int limit_ = 1000;
		const Position pos = Position::Regular_employee;
	public:
		virtual int getLimit() const noexcept override {
			return limit_;
		}

		virtual void set_manager(Employee* employee) noexcept override {
			TeamLeader* teamLead;
			if(employee){
			employee = teamLead;
			}

		}

		virtual void approve_item(const std::string& itemName, const int price) override {
			if(price <= limit_){
				std::cout << "Approved";
			}
			else {
				std::cout << "To be approved by TeamLeader";
			}

		}
};
#endif