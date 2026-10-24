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

// Function: entry_00216570
// Address: 0x216570 - 0x21658c
void entry_00216570_0x216570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216570_0x216570");
#endif

    switch (ctx->pc) {
        case 0x216578u: goto label_216578;
        default: break;
    }

    ctx->pc = 0x216570u;

    // 0x216570: 0xc08591e  jal         func_216478
    ctx->pc = 0x216570u;
    SET_GPR_U32(ctx, 31, 0x216578u);
    ctx->pc = 0x216478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216478u, 0x216570u, 0x216578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216578u;
label_216578:
    // 0x216578: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216578u;
    {
        const bool branch_taken_0x216578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216578u;
        // 0x21657c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216578) {
            ctx->pc = 0x21658Cu;
            return;
        }
    }
    ctx->pc = 0x216580u;
    // 0x216580: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x216580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x216584: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x216584u;
    {
        const bool branch_taken_0x216584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216584u;
        // 0x216588: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216584) {
            ctx->pc = 0x2166B8u;
            return;
        }
    }
    ctx->pc = 0x21658Cu;
}
