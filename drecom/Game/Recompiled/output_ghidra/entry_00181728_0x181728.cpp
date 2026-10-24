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

// Function: entry_00181728
// Address: 0x181728 - 0x181764
void entry_00181728_0x181728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181728_0x181728");
#endif

    ctx->pc = 0x181728u;

    // 0x181728: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18172c: 0x8c26f220  lw          $a2, -0xDE0($at)
    ctx->pc = 0x18172cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F220u));
    // 0x181730: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x181730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181734: 0x10c3016a  beq         $a2, $v1, . + 4 + (0x16A << 2)
    ctx->pc = 0x181734u;
    {
        const bool branch_taken_0x181734 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x181734) {
            ctx->pc = 0x181CE0u;
            return;
        }
    }
    ctx->pc = 0x18173Cu;
    // 0x18173c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18173cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181740: 0x10c300b5  beq         $a2, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x181740u;
    {
        const bool branch_taken_0x181740 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x181740) {
            ctx->pc = 0x181A18u;
            return;
        }
    }
    ctx->pc = 0x181748u;
    // 0x181748: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x181748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18174c: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x18174Cu;
    {
        const bool branch_taken_0x18174c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x18174c) {
            ctx->pc = 0x181764u;
            return;
        }
    }
    ctx->pc = 0x181754u;
    // 0x181754: 0x10c00212  beqz        $a2, . + 4 + (0x212 << 2)
    ctx->pc = 0x181754u;
    {
        const bool branch_taken_0x181754 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x181754) {
            ctx->pc = 0x181FA0u;
            return;
        }
    }
    ctx->pc = 0x18175Cu;
    // 0x18175c: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x18175Cu;
    {
        const bool branch_taken_0x18175c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18175c) {
            ctx->pc = 0x181FA0u;
            return;
        }
    }
    ctx->pc = 0x181764u;
}
