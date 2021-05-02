/*
 * ports.h
 *
 * Created: 25/04/2021 11:49:44
 *  Author: yelsi
 *
 //CTRL + SPACE => ACTIVAR AUTOCOMPLETE
 */ 


#ifndef PORTS_H_
#define PORTS_H_
#include <xc.h>
#define CONCAT(A,B) A##B
#define CONCAT_ACTION(A,B)  CONCAT(A,B)

#define OUTPUT_MODE(M,X)   CONCAT_ACTION(DDR,M) |=  (1 << X)   
#define INPUT_MODE(M,X)  CONCAT_ACTION(DDR,M) &= ~(1 << X)

#define H_PIN(M,X)   CONCAT_ACTION(PORT,M) |=  (1 << X)
#define L_PIN(M,X)   CONCAT_ACTION(PORT,M) &=  ~(1 << X) 

#define SET_VALUE_PORT(M,VALUE) CONCAT_ACTION(PORT,M) = VALUE
#define SET_VALUE_MODE(M,VALUE) CONCAT_ACTION(DDR,M) = VALUE



#endif /* PORTS_H_ */