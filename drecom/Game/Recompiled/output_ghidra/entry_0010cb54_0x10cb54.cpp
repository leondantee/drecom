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

// Function: entry_0010cb54
// Address: 0x10cb54 - 0x10cb78
void entry_0010cb54_0x10cb54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cb54_0x10cb54");
#endif

    switch (ctx->pc) {
        case 0x10cb70u: goto label_10cb70;
        default: break;
    }

    ctx->pc = 0x10cb54u;

    // 0x10cb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cb58: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10CB58u;
    {
        const bool branch_taken_0x10cb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB58u;
        // 0x10cb5c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb58) {
            ctx->pc = 0x10CB78u;
            return;
        }
    }
    ctx->pc = 0x10CB60u;
    // 0x10cb60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10cb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb68: 0xc04314e  jal         func_10C538
    ctx->pc = 0x10CB68u;
    SET_GPR_U32(ctx, 31, 0x10CB70u);
    ctx->pc = 0x10CB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB68u;
    // 0x10cb6c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C538u, 0x10CB68u, 0x10CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB70u;
label_10cb70:
    // 0x10cb70: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x10cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x10cb74: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10cb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10cb78u;
}
