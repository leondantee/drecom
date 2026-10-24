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

// Function: entry_00119334
// Address: 0x119334 - 0x11933c
void entry_00119334_0x119334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119334_0x119334");
#endif

    ctx->pc = 0x119334u;

    // 0x119334: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x119334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x119338: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x119338u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    ctx->pc = 0x11933cu;
}
