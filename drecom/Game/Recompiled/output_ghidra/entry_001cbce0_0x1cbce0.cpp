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

// Function: entry_001cbce0
// Address: 0x1cbce0 - 0x1cbd38
void entry_001cbce0_0x1cbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbce0_0x1cbce0");
#endif

    ctx->pc = 0x1cbce0u;

label_1cbce0:
    // 0x1cbce0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbce4:
    // 0x1cbce4: 0x8c431b60  lw          $v1, 0x1B60($v0)
    ctx->pc = 0x1cbce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1cbce8:
    // 0x1cbce8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbcec:
    // 0x1cbcec: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_1cbcf0:
    // 0x1cbcf0: 0x106200b1  beq         $v1, $v0, . + 4 + (0xB1 << 2)
label_1cbcf4:
    if (ctx->pc == 0x1CBCF4u) {
        ctx->pc = 0x1CBCF8u;
        goto label_1cbcf8;
    }
    ctx->pc = 0x1CBCF0u;
    {
        const bool branch_taken_0x1cbcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbcf0) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBCF8u;
label_1cbcf8:
    // 0x1cbcf8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbcfc:
    // 0x1cbcfc: 0x8c431b60  lw          $v1, 0x1B60($v0)
    ctx->pc = 0x1cbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1cbd00:
    // 0x1cbd00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbd04:
    // 0x1cbd04: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x1cbd04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
label_1cbd08:
    // 0x1cbd08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbd0c:
    // 0x1cbd0c: 0x8c441b60  lw          $a0, 0x1B60($v0)
    ctx->pc = 0x1cbd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1cbd10:
    // 0x1cbd10: 0x2c81000b  sltiu       $at, $a0, 0xB
    ctx->pc = 0x1cbd10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1cbd14:
    // 0x1cbd14: 0x102000a8  beqz        $at, . + 4 + (0xA8 << 2)
label_1cbd18:
    if (ctx->pc == 0x1CBD18u) {
        ctx->pc = 0x1CBD1Cu;
        goto label_1cbd1c;
    }
    ctx->pc = 0x1CBD14u;
    {
        const bool branch_taken_0x1cbd14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd14) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBD1Cu;
label_1cbd1c:
    // 0x1cbd1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1cbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1cbd20:
    // 0x1cbd20: 0x2443f4e0  addiu       $v1, $v0, -0xB20
    ctx->pc = 0x1cbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964448));
label_1cbd24:
    // 0x1cbd24: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cbd28:
    // 0x1cbd28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbd2c:
    // 0x1cbd2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbd30:
    // 0x1cbd30: 0x400008  jr          $v0
label_1cbd34:
    if (ctx->pc == 0x1CBD34u) {
        ctx->pc = 0x1CBD38u;
        goto label_fallthrough_0x1cbd30;
    }
    ctx->pc = 0x1CBD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBD30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1cbd30:
    ctx->pc = 0x1CBD38u;
}
