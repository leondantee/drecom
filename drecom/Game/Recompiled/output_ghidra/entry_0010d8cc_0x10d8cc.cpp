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

// Function: entry_0010d8cc
// Address: 0x10d8cc - 0x10d8d8
void entry_0010d8cc_0x10d8cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d8cc_0x10d8cc");
#endif

    ctx->pc = 0x10d8ccu;

    // 0x10d8cc: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x10d8ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x10d8d0: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x10d8d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x10d8d4: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x10d8d4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x10d8d8u;
}
