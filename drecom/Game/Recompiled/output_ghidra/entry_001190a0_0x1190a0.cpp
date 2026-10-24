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

// Function: entry_001190a0
// Address: 0x1190a0 - 0x1190b8
void entry_001190a0_0x1190a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001190a0_0x1190a0");
#endif

    ctx->pc = 0x1190a0u;

    // 0x1190a0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1190a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1190a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1190a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1190a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1190A8u;
    {
        const bool branch_taken_0x1190a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1190a8) {
            ctx->pc = 0x1190B8u;
            return;
        }
    }
    ctx->pc = 0x1190B0u;
    // 0x1190b0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1190b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1190b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1190b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x1190b8u;
}
