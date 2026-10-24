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

// Function: entry_0010ccbc
// Address: 0x10ccbc - 0x10cce0
void entry_0010ccbc_0x10ccbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ccbc_0x10ccbc");
#endif

    switch (ctx->pc) {
        case 0x10ccd8u: goto label_10ccd8;
        default: break;
    }

    ctx->pc = 0x10ccbcu;

    // 0x10ccbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ccc0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10CCC0u;
    {
        const bool branch_taken_0x10ccc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCC0u;
        // 0x10ccc4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ccc0) {
            ctx->pc = 0x10CCE0u;
            return;
        }
    }
    ctx->pc = 0x10CCC8u;
    // 0x10ccc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ccc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cccc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10ccccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccd0: 0xc04314e  jal         func_10C538
    ctx->pc = 0x10CCD0u;
    SET_GPR_U32(ctx, 31, 0x10CCD8u);
    ctx->pc = 0x10CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCD0u;
    // 0x10ccd4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C538u, 0x10CCD0u, 0x10CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCD8u;
label_10ccd8:
    // 0x10ccd8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10ccdc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10ccdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10cce0u;
}
