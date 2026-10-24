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

// Function: entry_00116f74
// Address: 0x116f74 - 0x116f90
void entry_00116f74_0x116f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116f74_0x116f74");
#endif

    switch (ctx->pc) {
        case 0x116f74u: goto label_116f74;
        case 0x116f78u: goto label_116f78;
        case 0x116f7cu: goto label_116f7c;
        case 0x116f80u: goto label_116f80;
        case 0x116f84u: goto label_116f84;
        case 0x116f88u: goto label_116f88;
        case 0x116f8cu: goto label_116f8c;
        default: break;
    }

    ctx->pc = 0x116f74u;

label_116f74:
    // 0x116f74: 0x8e84490c  lw          $a0, 0x490C($s4)
    ctx->pc = 0x116f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18700)));
label_116f78:
    // 0x116f78: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x116f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_116f7c:
    // 0x116f7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_116f80:
    if (ctx->pc == 0x116F80u) {
        ctx->pc = 0x116F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F7Cu;
        // 0x116f80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116F84u;
        goto label_116f84;
    }
    ctx->pc = 0x116F7Cu;
    {
        const bool branch_taken_0x116f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116f7c) {
            ctx->pc = 0x116F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116F7Cu;
            // 0x116f80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116F90u;
            return;
        }
    }
    ctx->pc = 0x116F84u;
label_116f84:
    // 0x116f84: 0x40f809  jalr        $v0
label_116f88:
    if (ctx->pc == 0x116F88u) {
        ctx->pc = 0x116F8Cu;
        goto label_116f8c;
    }
    ctx->pc = 0x116F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116F8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116F84u, 0x116F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116F8Cu;
label_116f8c:
    // 0x116f8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x116f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116f90u;
}
