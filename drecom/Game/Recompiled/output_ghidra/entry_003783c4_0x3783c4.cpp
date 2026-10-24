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

// Function: entry_003783c4
// Address: 0x3783c4 - 0x3783ec
void entry_003783c4_0x3783c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003783c4_0x3783c4");
#endif

    ctx->pc = 0x3783c4u;

    // 0x3783c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3783c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3783c8: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3783C8u;
    {
        const bool branch_taken_0x3783c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3783c8) {
            ctx->pc = 0x3783ECu;
            return;
        }
    }
    ctx->pc = 0x3783D0u;
    // 0x3783d0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x3783d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3783d4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3783d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3783d8: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3783d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3783dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3783dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3783e0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3783e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3783e4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3783E4u;
    {
        const bool branch_taken_0x3783e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3783e4) {
            ctx->pc = 0x3784B0u;
            return;
        }
    }
    ctx->pc = 0x3783ECu;
}
