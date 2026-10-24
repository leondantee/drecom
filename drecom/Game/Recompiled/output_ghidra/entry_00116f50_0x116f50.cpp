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

// Function: entry_00116f50
// Address: 0x116f50 - 0x116f6c
void entry_00116f50_0x116f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116f50_0x116f50");
#endif

    switch (ctx->pc) {
        case 0x116f50u: goto label_116f50;
        case 0x116f54u: goto label_116f54;
        case 0x116f58u: goto label_116f58;
        case 0x116f5cu: goto label_116f5c;
        case 0x116f60u: goto label_116f60;
        case 0x116f64u: goto label_116f64;
        case 0x116f68u: goto label_116f68;
        default: break;
    }

    ctx->pc = 0x116f50u;

label_116f50:
    // 0x116f50: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x116f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_116f54:
    // 0x116f54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_116f58:
    // 0x116f58: 0x40f809  jalr        $v0
label_116f5c:
    if (ctx->pc == 0x116F5Cu) {
        ctx->pc = 0x116F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F58u;
        // 0x116f5c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116F60u;
        goto label_116f60;
    }
    ctx->pc = 0x116F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116F60u);
        ctx->pc = 0x116F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F58u;
        // 0x116f5c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116F58u, 0x116F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116F60u;
label_116f60:
    // 0x116f60: 0x601fffb  bgez        $s0, . + 4 + (-0x5 << 2)
label_116f64:
    if (ctx->pc == 0x116F64u) {
        ctx->pc = 0x116F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F60u;
        // 0x116f64: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116F68u;
        goto label_116f68;
    }
    ctx->pc = 0x116F60u;
    {
        const bool branch_taken_0x116f60 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x116F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F60u;
        // 0x116f64: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f60) {
            ctx->pc = 0x116F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116f50;
        }
    }
    ctx->pc = 0x116F68u;
label_116f68:
    // 0x116f68: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x116f68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x116f6cu;
}
