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

// Function: entry_00113308
// Address: 0x113308 - 0x113328
void entry_00113308_0x113308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113308_0x113308");
#endif

    switch (ctx->pc) {
        case 0x113320u: goto label_113320;
        default: break;
    }

    ctx->pc = 0x113308u;

label_113308:
    // 0x113308: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x113308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11330c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11330cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113310: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x113310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x113314: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x113314u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x113318: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113318u;
    SET_GPR_U32(ctx, 31, 0x113320u);
    ctx->pc = 0x11331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113318u;
    // 0x11331c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113318u, 0x113320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113320u;
label_113320:
    // 0x113320: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113320u;
    {
        const bool branch_taken_0x113320 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x113324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113320u;
        // 0x113324: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113320) {
            ctx->pc = 0x113308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113308;
        }
    }
    ctx->pc = 0x113328u;
}
