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

// Function: entry_001aa660
// Address: 0x1aa660 - 0x1aa678
void entry_001aa660_0x1aa660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa660_0x1aa660");
#endif

    ctx->pc = 0x1aa660u;

    // 0x1aa660: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1aa660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa664: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA664u;
    {
        const bool branch_taken_0x1aa664 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aa664) {
            ctx->pc = 0x1AA678u;
            return;
        }
    }
    ctx->pc = 0x1AA66Cu;
    // 0x1aa66c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aa66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa670: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa674: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x1aa674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    ctx->pc = 0x1aa678u;
}
