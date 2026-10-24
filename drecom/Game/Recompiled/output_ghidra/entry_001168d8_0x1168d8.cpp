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

// Function: entry_001168d8
// Address: 0x1168d8 - 0x116904
void entry_001168d8_0x1168d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001168d8_0x1168d8");
#endif

    switch (ctx->pc) {
        case 0x1168e4u: goto label_1168e4;
        case 0x116900u: goto label_116900;
        default: break;
    }

    ctx->pc = 0x1168d8u;

    // 0x1168d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1168d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168dc: 0xc046468  jal         func_1191A0
    ctx->pc = 0x1168DCu;
    SET_GPR_U32(ctx, 31, 0x1168E4u);
    ctx->pc = 0x1168E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168DCu;
    // 0x1168e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191A0u, 0x1168DCu, 0x1168E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168E4u;
label_1168e4:
    // 0x1168e4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1168e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1168e8: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1168E8u;
    {
        const bool branch_taken_0x1168e8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1168ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168E8u;
        // 0x1168ec: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168e8) {
            ctx->pc = 0x116904u;
            return;
        }
    }
    ctx->pc = 0x1168F0u;
    // 0x1168f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1168f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168f4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1168f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168f8: 0xc046502  jal         func_119408
    ctx->pc = 0x1168F8u;
    SET_GPR_U32(ctx, 31, 0x116900u);
    ctx->pc = 0x1168FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168F8u;
    // 0x1168fc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119408u, 0x1168F8u, 0x116900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116900u;
label_116900:
    // 0x116900: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x116900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x116904u;
}
