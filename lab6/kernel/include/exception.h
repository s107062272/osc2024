#ifndef __EXCEPTION_H
#define __EXCEPTION_H
#include "syscall.h"

extern void return_from_fork();

void enable_interrupt();
void disable_interrupt();
void exception_entry();
void sync_handler_entry();
void el0_svc_handler_entry(struct ucontext* trapframe);
void irq_handler_entry();

void rx_task();
void tx_task();
void timer_task();

void sys_getpid(struct ucontext* trapframe);
void sys_uartread(struct ucontext* trapframe);
void sys_uartwrite(struct ucontext* trapframe);
void sys_exec(struct ucontext* trapframe);
void sys_fork(struct ucontext* trapframe);
void sys_exit(struct ucontext* trapframe);
void sys_mbox_call(struct ucontext *trapframe);
void sys_kill(struct ucontext *trapframe);
void sys_signal(struct ucontext *trapframe);
void sys_signal_kill(struct ucontext *trapframe);
void sys_sigreturn(struct ucontext *trapframe);


#endif