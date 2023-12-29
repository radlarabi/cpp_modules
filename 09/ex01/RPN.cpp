/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:03:14 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/29 01:09:30 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void display(std::stack<int> rpn){
    std::stack<int> it = rpn;
    while(!rpn.empty()){
        std::cout << rpn.top() << std::endl;
        rpn.pop();
    }
}

bool isDigit(char *av){
    int i = 0;
    while(av[i])
    {
        if(!isdigit(av[i]))
            return false;
        i++;
    }    
    return true;
}
int getOperator(int t1, int t2, std::string opr){
    if(opr == "+")
        return t1 + t2;
    else if(opr == "-")
        return t1 - t2;
    else if(opr == "*")
        return t1 * t2;
    else if(opr == "/"){
        if (t2 == 0)
            throw std::runtime_error("Divise by 0 !!");
        return t1 / t2; 
    }
    return 0;
}
void calculeRpn(int ac, char **av){
    std::stack<int> rpn;
    
    for (int i = 1; i < ac; i++)
    {
        std::string t = av[i];
        if (isDigit(av[i]))
            rpn.push(std::atoi(av[i]));
        if ((t == "+" || t == "-" || t == "*" || t == "/") && rpn.size() < 2)
            throw std::runtime_error("Error Form of RPN !!");
        if ((t == "+" || t == "-" || t == "*" || t == "/") && rpn.size() >= 2){
            int t2 = rpn.top();
            rpn.pop();
            int t1 = rpn.top();
            rpn.pop();
            rpn.push(getOperator(t1, t2, t));
        }
            
    }
    if (rpn.size() != 1)
        throw std::runtime_error("Error Form of RPN !!");
    std::cout << "result : " << rpn.top() << std::endl;
}
