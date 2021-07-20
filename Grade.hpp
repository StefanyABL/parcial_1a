/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Grade.hpp
 * Author: Sala 6
 *
 * Created on 29 de agosto de 2018, 02:27 PM
 */

#ifndef GRADE_HPP
#define GRADE_HPP

#include <string>


class Grade {
public:
    Grade();
    Grade(float, float);
    float getGrade();
    float getPercentage ();
    virtual ~Grade();
private:
    float grade;
    float percentage;
};

#endif /* GRADE_HPP */

