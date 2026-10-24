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

// Function: entry_0028db5c
// Address: 0x28db5c - 0x28db8c
void entry_0028db5c_0x28db5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028db5c_0x28db5c");
#endif

    ctx->pc = 0x28db5cu;

    // 0x28db5c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x28db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28db60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28db64: 0x106203ee  beq         $v1, $v0, . + 4 + (0x3EE << 2)
    ctx->pc = 0x28DB64u;
    {
        const bool branch_taken_0x28db64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28db64) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28DB6Cu;
    // 0x28db6c: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28db70: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x28db70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x28db74: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28db74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28db78: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28db7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28db80: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28db80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28db84: 0x100003e6  b           . + 4 + (0x3E6 << 2)
    ctx->pc = 0x28DB84u;
    {
        const bool branch_taken_0x28db84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28db84) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28DB8Cu;
}
