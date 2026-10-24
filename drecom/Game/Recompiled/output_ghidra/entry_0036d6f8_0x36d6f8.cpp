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

// Function: entry_0036d6f8
// Address: 0x36d6f8 - 0x36d730
void entry_0036d6f8_0x36d6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d6f8_0x36d6f8");
#endif

    ctx->pc = 0x36d6f8u;

    // 0x36d6f8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x36d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x36d6fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36d700: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x36D700u;
    {
        const bool branch_taken_0x36d700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d700) {
            ctx->pc = 0x36D810u;
            return;
        }
    }
    ctx->pc = 0x36D708u;
    // 0x36d708: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36d708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d70c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x36D70Cu;
    {
        const bool branch_taken_0x36d70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d70c) {
            ctx->pc = 0x36D790u;
            return;
        }
    }
    ctx->pc = 0x36D714u;
    // 0x36d714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d718: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36D718u;
    {
        const bool branch_taken_0x36d718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d718) {
            ctx->pc = 0x36D730u;
            return;
        }
    }
    ctx->pc = 0x36D720u;
    // 0x36d720: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x36D720u;
    {
        const bool branch_taken_0x36d720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d720) {
            ctx->pc = 0x36D848u;
            return;
        }
    }
    ctx->pc = 0x36D728u;
    // 0x36d728: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x36D728u;
    {
        const bool branch_taken_0x36d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d728) {
            ctx->pc = 0x36D848u;
            return;
        }
    }
    ctx->pc = 0x36D730u;
}
