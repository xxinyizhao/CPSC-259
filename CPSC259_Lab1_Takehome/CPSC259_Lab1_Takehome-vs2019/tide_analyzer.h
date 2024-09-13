/*
File:         tide_analyzer.h
Purpose:      Contains prototypes
Author:		  Xinyi Zhao and Bailey Doering
Student #s:		90762543 and 12345678
CS Accounts:  xxinyiz@students.cs.ubc.ca and b2b2
Date:		  September 11, 2024
*/

/********************************************************************
YOU MAY EDIT THIS FILE (BUT YOU DON'T NEED TO)
******************************************************************/

#pragma once

/* Insert function prototypes here */
FILE* open_file(FILE* file_pointer, char* fileName, char* mode);
void process_file(double array_to_populate[], FILE* pointer_to_data_file);
void run_analysis();