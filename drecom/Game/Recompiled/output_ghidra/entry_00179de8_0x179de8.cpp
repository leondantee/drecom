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

// Function: entry_00179de8
// Address: 0x179de8 - 0x179e08
void entry_00179de8_0x179de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179de8_0x179de8");
#endif

    ctx->pc = 0x179de8u;

    // 0x179de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179dec: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x179decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x179df0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x179df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179df4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x179df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x179df8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179DF8u;
    {
        const bool branch_taken_0x179df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179df8) {
            ctx->pc = 0x179E10u;
            return;
        }
    }
    ctx->pc = 0x179E00u;
    // 0x179e00: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x179e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x179e04: 0x0  nop
    ctx->pc = 0x179e04u;
    // NOP
    ctx->pc = 0x179e08u;
}
