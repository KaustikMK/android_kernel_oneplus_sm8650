/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_POGO_COMMON_H
#define _OPLUS_POGO_COMMON_H

struct uart_port;

struct pogo_keyboard_operations {
    const char *name;
    int (*init)(struct uart_port *port, int enable);
    int (*write)(void *data, int value);
    int (*recv)(unsigned char *buf, int len);
    int (*resume)(struct uart_port *port);
    int (*suspend)(struct uart_port *port);
    int (*remove)(struct uart_port *port);
    int (*check)(struct uart_port *port);
};

struct pogo_keyboard_operations *get_pogo_keyboard_operations(void);

#endif /* _OPLUS_POGO_COMMON_H */
