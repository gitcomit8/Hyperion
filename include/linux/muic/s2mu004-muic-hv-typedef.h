/*
 * s2mu004-muic-hv-typedef.h - MUIC for the Sansung s2mu004
 *
 * Copyright (C) 2015 Samsung Electrnoics
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 * This driver is based on max77843-muic.h
 *
 */

#ifndef __S2MU004_MUIC_HV_TYPEDEF_H__
#define __S2MU004_MUIC_HV_TYPEDEF_H__

/* MUIC afc irq type */
typedef enum {
	MUIC_AFC_IRQ_VDNMON = 0,
	MUIC_AFC_IRQ_MRXRDY,
	MUIC_AFC_IRQ_VBADC,
	MUIC_AFC_IRQ_MPNACK,
	MUIC_AFC_IRQ_DONTCARE = 0xff,
} muic_afc_irq_t;

/* muic chip specific internal data structure */
typedef struct s2mu004_muic_afc_data {
	muic_attached_dev_t		new_dev;
	const char			*afc_name;
	muic_afc_irq_t			afc_irq;
//	u8				hvcontrol1_dpdnvden;
	u8				status_vbadc;
	u8				status_vdnmon;
	int				function_num;
	struct s2mu004_muic_afc_data	*next;
} muic_afc_data_t;

#endif /* __S2MU004_MUIC_HV_TYPEDEF_H__ */
