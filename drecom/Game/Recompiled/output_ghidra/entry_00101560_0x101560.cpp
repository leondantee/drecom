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

// Function: entry_00101560
// Address: 0x101560 - 0x101568
void entry_00101560_0x101560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101560_0x101560");
#endif

    ctx->pc = 0x101560u;

    // 0x101560: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x101560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x101564: 0x2484c3d8  addiu       $a0, $a0, -0x3C28
    ctx->pc = 0x101564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951896));
    ctx->pc = 0x101568u;
}
