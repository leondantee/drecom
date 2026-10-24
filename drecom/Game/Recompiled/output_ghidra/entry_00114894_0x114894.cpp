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

// Function: entry_00114894
// Address: 0x114894 - 0x1148b8
void entry_00114894_0x114894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114894_0x114894");
#endif

    switch (ctx->pc) {
        case 0x1148b0u: goto label_1148b0;
        default: break;
    }

    ctx->pc = 0x114894u;

    // 0x114894: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x114894u;
    {
        const bool branch_taken_0x114894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114894u;
        // 0x114898: 0x2464fbed  addiu       $a0, $v1, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114894) {
            ctx->pc = 0x1148B8u;
            return;
        }
    }
    ctx->pc = 0x11489Cu;
    // 0x11489c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1148a0: 0x16220029  bne         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1148A0u;
    {
        const bool branch_taken_0x1148a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1148A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148A0u;
        // 0x1148a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148a0) {
            ctx->pc = 0x114948u;
            return;
        }
    }
    ctx->pc = 0x1148A8u;
    // 0x1148a8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1148A8u;
    SET_GPR_U32(ctx, 31, 0x1148B0u);
    ctx->pc = 0x1148ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1148A8u;
    // 0x1148ac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1148A8u, 0x1148B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148B0u;
label_1148b0:
    // 0x1148b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1148B0u;
    {
        const bool branch_taken_0x1148b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148B0u;
        // 0x1148b4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148b0) {
            ctx->pc = 0x11494Cu;
            return;
        }
    }
    ctx->pc = 0x1148B8u;
}
