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

// Function: entry_00123d20
// Address: 0x123d20 - 0x123d68
void entry_00123d20_0x123d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123d20_0x123d20");
#endif

    switch (ctx->pc) {
        case 0x123d38u: goto label_123d38;
        default: break;
    }

    ctx->pc = 0x123d20u;

label_123d20:
    // 0x123d20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123d24:
    // 0x123d24: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123d24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_123d28:
    // 0x123d28: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x123d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_123d2c:
    // 0x123d2c: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_123d30:
    // 0x123d30: 0xc067694  jal         func_19DA50
label_123d34:
    if (ctx->pc == 0x123D34u) {
        ctx->pc = 0x123D38u;
        goto label_123d38;
    }
    ctx->pc = 0x123D30u;
    SET_GPR_U32(ctx, 31, 0x123D38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x123D30u, 0x123D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D38u;
label_123d38:
    // 0x123d38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123d3c:
    // 0x123d3c: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x123d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_123d40:
    // 0x123d40: 0x2c810010  sltiu       $at, $a0, 0x10
    ctx->pc = 0x123d40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_123d44:
    // 0x123d44: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
label_123d48:
    if (ctx->pc == 0x123D48u) {
        ctx->pc = 0x123D4Cu;
        goto label_123d4c;
    }
    ctx->pc = 0x123D44u;
    {
        const bool branch_taken_0x123d44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d44) {
            ctx->pc = 0x123E68u;
            return;
        }
    }
    ctx->pc = 0x123D4Cu;
label_123d4c:
    // 0x123d4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x123d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_123d50:
    // 0x123d50: 0x2443e1b0  addiu       $v1, $v0, -0x1E50
    ctx->pc = 0x123d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959536));
label_123d54:
    // 0x123d54: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x123d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_123d58:
    // 0x123d58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123d5c:
    // 0x123d5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x123d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_123d60:
    // 0x123d60: 0x400008  jr          $v0
label_123d64:
    if (ctx->pc == 0x123D64u) {
        ctx->pc = 0x123D68u;
        goto label_fallthrough_0x123d60;
    }
    ctx->pc = 0x123D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123D60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x123d60:
    ctx->pc = 0x123D68u;
}
