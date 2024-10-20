#include "k11e1.h"

void keyboard_post_init_kb(void) {
    keyboard_post_init_user();
}

void suspend_power_down_kb(void) {
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    suspend_wakeup_init_user();
}
