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

// Function: entry_003370b0
// Address: 0x3370b0 - 0x3370c0
void entry_003370b0_0x3370b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003370b0_0x3370b0");
#endif

    ctx->pc = 0x3370b0u;

    // 0x3370b0: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3370B0u;
    {
        const bool branch_taken_0x3370b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x3370b0) {
            ctx->pc = 0x3370C0u;
            return;
        }
    }
    ctx->pc = 0x3370B8u;
    // 0x3370b8: 0x26e20002  addiu       $v0, $s7, 0x2
    ctx->pc = 0x3370b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x3370bc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x3370bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    ctx->pc = 0x3370c0u;
}
