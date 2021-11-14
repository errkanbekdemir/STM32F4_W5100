/*
 * wizInterface.h
 *
 *  Created on: Nov 14, 2021
 *      Author: Erkan
 */

#ifndef INC_WIZINTERFACE_H_
#define INC_WIZINTERFACE_H_

#include "main.h"
#include "wizchip_conf.h"
#include "socket.h"
 #include "DHCP/dhcp.h"

#include <string.h>
#include <stdbool.h>
#include <stdio.h>

//#define USE_DHCP

#define DHCP_SOCKET		0	//dhcp socket 0
#define CLIENT_SOCKET	2	//tcp client socket 1

void wiz_spi_select(void);
void wiz_spi_deselect(void);
void wiz_spi_tx_byte(uint8_t byte);
uint8_t wiz_spi_rx_Byte(void);
void wiz_spi_tx_buffer(uint8_t *buffer, uint16_t len);
void wiz_spi_rx_buffer(uint8_t *buffer, uint16_t len);

bool wiz_init(void);
bool wiz_network_init(void);


#endif /* INC_WIZINTERFACE_H_ */
