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

// Function: entry_0032618c
// Address: 0x32618c - 0x3261b8
void entry_0032618c_0x32618c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032618c_0x32618c");
#endif

    ctx->pc = 0x32618cu;

    // 0x32618c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x32618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326190: 0x90620210  lbu         $v0, 0x210($v1)
    ctx->pc = 0x326190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x326194: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326198: 0xa0620210  sb          $v0, 0x210($v1)
    ctx->pc = 0x326198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 528), (uint8_t)GPR_U32(ctx, 2));
    // 0x32619c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x32619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3261a0: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x3261a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x3261a4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x3261a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3261a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3261a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3261ac: 0xac82020c  sw          $v0, 0x20C($a0)
    ctx->pc = 0x3261acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 2));
    // 0x3261b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3261B0u;
    {
        const bool branch_taken_0x3261b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3261b0) {
            ctx->pc = 0x3261D8u;
            return;
        }
    }
    ctx->pc = 0x3261B8u;
}
