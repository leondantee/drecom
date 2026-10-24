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

// Function: entry_002edf74
// Address: 0x2edf74 - 0x2edf84
void entry_002edf74_0x2edf74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002edf74_0x2edf74");
#endif

    ctx->pc = 0x2edf74u;

    // 0x2edf74: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2edf74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edf78: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2edf78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edf7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EDF7Cu;
    {
        const bool branch_taken_0x2edf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edf7c) {
            ctx->pc = 0x2EDFA8u;
            return;
        }
    }
    ctx->pc = 0x2EDF84u;
}
