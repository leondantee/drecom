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

// Function: entry_00112084
// Address: 0x112084 - 0x11209c
void entry_00112084_0x112084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112084_0x112084");
#endif

    switch (ctx->pc) {
        case 0x112094u: goto label_112094;
        default: break;
    }

    ctx->pc = 0x112084u;

    // 0x112084: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112084u;
    {
        const bool branch_taken_0x112084 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x112088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112084u;
        // 0x112088: 0x71783  sra         $v0, $a3, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112084) {
            ctx->pc = 0x11209Cu;
            return;
        }
    }
    ctx->pc = 0x11208Cu;
    // 0x11208c: 0xc045330  jal         func_114CC0
    ctx->pc = 0x11208Cu;
    SET_GPR_U32(ctx, 31, 0x112094u);
    ctx->pc = 0x112090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11208Cu;
    // 0x112090: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x114CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CC0u, 0x11208Cu, 0x112094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112094u;
label_112094:
    // 0x112094: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x112094u;
    {
        const bool branch_taken_0x112094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112094u;
        // 0x112098: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112094) {
            ctx->pc = 0x11230Cu;
            return;
        }
    }
    ctx->pc = 0x11209Cu;
}
