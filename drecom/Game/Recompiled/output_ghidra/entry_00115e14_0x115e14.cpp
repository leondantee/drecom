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

// Function: entry_00115e14
// Address: 0x115e14 - 0x115e1c
void entry_00115e14_0x115e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e14_0x115e14");
#endif

    ctx->pc = 0x115e14u;

    // 0x115e14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x115e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x115e18: 0x2455d960  addiu       $s5, $v0, -0x26A0
    ctx->pc = 0x115e18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
    ctx->pc = 0x115e1cu;
}
