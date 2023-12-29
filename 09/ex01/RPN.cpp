/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:03:14 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/29 17:24:56 by rlarabi          ###   ########.fr       */
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

int getOperator(int t1, int t2, char opr){
    if(opr == '+')
        return t1 + t2;
    else if(opr == '-')
        return t1 - t2;
    else if(opr == '*')
        return t1 * t2;
    else if(opr == '/'){
        if (t2 == 0)
            throw std::runtime_error("Divise by 0 !!");
        return t1 / t2; 
    }
    return 0;
}

void calculeRpn(std::string str){
    std::stack<int> rpn;
    
    for (int i = 0; str[i]; i++)
    {
        if (std::isspace(str[i]))
            continue ;
        if (isdigit(str[i]))
        {
            std::string tmp = &str[i];
            const char *a = tmp.c_str();
            rpn.push(atoi(a));
        }
        if ((str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') && rpn.size() < 2)
            throw std::runtime_error("Error Form of RPN !!");
        if ((str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') && rpn.size() >= 2){
            int t2 = rpn.top();
            rpn.pop();
            int t1 = rpn.top();
            rpn.pop();
            rpn.push(getOperator(t1, t2, str[i]));
        }
    }
    
    if (rpn.size() != 1)
        throw std::runtime_error("Error Form of RPN !!");
    std::cout << "result : " << rpn.top() << std::endl;
}
