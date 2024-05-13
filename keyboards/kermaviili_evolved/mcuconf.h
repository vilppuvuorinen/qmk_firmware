#pragma once

#include_next <mcuconf.h>

#undef RP_SIO_USE_UART0
#define RP_SIO_USE_UART0 FALSE
#undef RP_SIO_USE_UART1
#define RP_SIO_USE_UART1 TRUE

#define PLATFORM_SIO_USE_SIO1 TRUE
