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

// Function: entry_0028dc38
// Address: 0x28dc38 - 0x28dc68
void entry_0028dc38_0x28dc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028dc38_0x28dc38");
#endif

    ctx->pc = 0x28dc38u;

    // 0x28dc38: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x28dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28dc3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28dc40: 0x106203b7  beq         $v1, $v0, . + 4 + (0x3B7 << 2)
    ctx->pc = 0x28DC40u;
    {
        const bool branch_taken_0x28dc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28dc40) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28DC48u;
    // 0x28dc48: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28dc4c: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x28dc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x28dc50: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28dc54: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28dc58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28dc5c: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x28dc60: 0x100003af  b           . + 4 + (0x3AF << 2)
    ctx->pc = 0x28DC60u;
    {
        const bool branch_taken_0x28dc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc60) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28DC68u;
}
