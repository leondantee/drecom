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

// Function: entry_001167f8
// Address: 0x1167f8 - 0x116820
void entry_001167f8_0x1167f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001167f8_0x1167f8");
#endif

    switch (ctx->pc) {
        case 0x116800u: goto label_116800;
        default: break;
    }

    ctx->pc = 0x1167f8u;

    // 0x1167f8: 0xc046468  jal         func_1191A0
    ctx->pc = 0x1167F8u;
    SET_GPR_U32(ctx, 31, 0x116800u);
    ctx->pc = 0x1167FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167F8u;
    // 0x1167fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191A0u, 0x1167F8u, 0x116800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116800u;
label_116800:
    // 0x116800: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x116804: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x116804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x116808: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x116808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11680c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x11680cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x116810: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x116810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x116814: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x116814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x116818: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116818u;
    {
        const bool branch_taken_0x116818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116818u;
        // 0x11681c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116818) {
            ctx->pc = 0x116828u;
            return;
        }
    }
    ctx->pc = 0x116820u;
}
