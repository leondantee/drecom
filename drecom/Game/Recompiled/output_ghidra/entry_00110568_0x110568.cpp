#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00110568
// Address: 0x110568 - 0x11056c
void entry_00110568_0x110568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110568_0x110568");
#endif

    ctx->pc = 0x110568u;

    // 0x110568: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x110568u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x11056cu;
}
