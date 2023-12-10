/*
 *  File_name:  DIO_program.c
 *  Author:     Mohammed Hammad
 *  Date:       06/12/2023
 *  Version:    0.1
 */

#include "DIO_interface.h"

void DIO_init(void) {
    DDRA = DEFAULT;
    DDRB = DEFAULT;
    DDRC = DEFAULT;
    DDRD = DEFAULT;
}

/* DIO Bits Functions */
/* Pins Direction Functions */
void DIO_Write_Pin_Dir(u8 port, u8 pin, u8 dir) {
    if (pin < NO_PINS) {
        switch (port) {
        case DIO_PORTA:
            if (dir == INPUT) {
                CLEAR_BIT(DDRA, pin);
            }
            else if (dir == OUTPUT) {
                SET_BIT(DDRA, pin);
            }
            else {
                // Error Message
            }
            break;
        case DIO_PORTB:
            if (dir == INPUT) {
                CLEAR_BIT(DDRB, pin);
            }
            else if (dir == OUTPUT) {
                SET_BIT(DDRB, pin);
            }
            else {
                // Error Message
            }
            break;
        case DIO_PORTC:
            if (dir == INPUT) {
                CLEAR_BIT(DDRC, pin);
            }
            else if (dir == OUTPUT) {
                SET_BIT(DDRC, pin);
            }
            else {
                // Error Message
            }
            break;
        case DIO_PORTD:
            if (dir == INPUT) {
                CLEAR_BIT(DDRD, pin);
            }
            else if (dir == OUTPUT) {
                SET_BIT(DDRD, pin);
            }
            else {
                // Error Message
            }
            break;
        default:
            // Error Message
            break;
        }
    }
}

u8 DIO_Read_Pin_Dir(u8 port, u8 pin) {
    if (pin < NO_PINS) {
        switch (port) {
        case DIO_PORTA:
            return (CHECK_BIT(DDRA, pin));
            break;
        case DIO_PORTB:
            return (CHECK_BIT(DDRB, pin));
            break;
        case DIO_PORTC:
            return (CHECK_BIT(DDRC, pin));
            break;
        case DIO_PORTD:
            return (CHECK_BIT(DDRD, pin));
            break;
        default:
            return 1;
            break;
        }
    }
    return 1;
}

/* Pins Values Functions */
void DIO_Wirte_Pin_val(u8 port, u8 pin, u8 val) {
    if (pin < NO_PINS) {
        switch (port) {
        case DIO_PORTA:
            if (val == LOW) {
                CLEAR_BIT(PORTA, pin);
            }
            else if (val == HIGH) {
                SET_BIT(PORTA, pin);
            }
            else {
                // Error Message
            }
            break;
        case DIO_PORTB:
            if (val == LOW) {
                CLEAR_BIT(PORTB, pin);
            }
            else if (val == HIGH) {
                SET_BIT(PORTB, pin);
            }
            else {
                // Error Message
            }
            break;
        case DIO_PORTC:
            if (val == LOW) {
                CLEAR_BIT(PORTC, pin);
            }
            else if (val == HIGH) {
                SET_BIT(PORTC, pin);
            }
            else {
                // Error Message
            }
            break;
        case DIO_PORTD:
            if (val == LOW) {
                CLEAR_BIT(PORTD, pin);
            }
            else if (val == HIGH) {
                SET_BIT(PORTD, pin);
            }
            else {
                // Error Message
            }
            break;
        default:
            break;
        }
    }
}

u8 DIO_Read_Pin_val(u8 port, u8 pin) {
    if (pin < NO_PINS) {
        switch (port) {
        case DIO_PORTA:
            return (CHECK_BIT(PINA, pin));
            break;
        case DIO_PORTB:
            return (CHECK_BIT(PINB, pin));
            break;
        case DIO_PORTC:
            return (CHECK_BIT(PINC, pin));
            break;
        case DIO_PORTD:
            return (CHECK_BIT(PIND, pin));
            break;
        default:
            return 1;
            break;
        }
    }
    return 1;
}

/* DIO Ports Functions */
/* Port Direction functions */
void DIO_Write_Port_dir(u8 port, u8 dir) {
    switch (port) {
    case DIO_PORTA:
        if (dir == INPUT) {
            CLEAR_REG(DDRA);
        }
        else if (dir == OUTPUT) {
            SET_REG(DDRA);
        }
        else {
            // Error Message
        }
        break;
    case DIO_PORTB:
        if (dir == INPUT) {
            CLEAR_REG(DDRA);
        }
        else if (dir == OUTPUT) {
            SET_REG(DDRB);
        }
        else {
            // Error Message
        }
        break;
    case DIO_PORTC:
        if (dir == INPUT) {
            CLEAR_REG(DDRC);
        }
        else if (dir == OUTPUT) {
            SET_REG(DDRC);
        }
        else {
            // Error Message
        }
        break;
    case DIO_PORTD:
        if (dir == INPUT) {
            CLEAR_REG(DDRD);
        }
        else if (dir == OUTPUT) {
            SET_REG(DDRD);
        }
        else {
            // Error Message
        }
        break;
    default:
        // Error Message
        break;
    }
}

u8 DIO_READ_Port_dir(u8 port) {
    switch (port) {
    case DIO_PORTA:
        return (DDRA);
        break;
    case DIO_PORTB:
        return (DDRB);
        break;
    case DIO_PORTC:
        return (DDRC);
        break;
    case DIO_PORTD:
        return (DDRD);
        break;
    default:
        return 1;
        break;
    }
    return 1;
}
/* Port Values Functions */
void DIO_Write_Port_val(u8 port, u8 val) {
    switch (port) {
    case DIO_PORTA:
        ASSIGN_REG(PORTA, val);
        break;
    case DIO_PORTB:
        ASSIGN_REG(PORTB, val);
        break;
    case DIO_PORTC:
        ASSIGN_REG(PORTC, val);
        break;
    case DIO_PORTD:
        ASSIGN_REG(PORTD, val);
        break;
    default:
        // Error Message
        break;
    }
}

u8 DIO_Read_Port_Val(u8 port) {
    switch (port)
    {
    case DIO_PORTA:
        return (PINA);
        break;
    case DIO_PORTB:
        return (PINB);
        break;
    case DIO_PORTC:
        return (PINC);
        break;
    case DIO_PORTD:
        return (PIND);
        break;
    default:
        return 1;
        break;
    }
    return 1;
}
