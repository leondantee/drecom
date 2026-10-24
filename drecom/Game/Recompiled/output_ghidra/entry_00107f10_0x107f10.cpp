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

// Function: entry_00107f10
// Address: 0x107f10 - 0x107f20
void entry_00107f10_0x107f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f10_0x107f10");
#endif

    switch (ctx->pc) {
        case 0x107f18u: goto label_107f18;
        default: break;
    }

    ctx->pc = 0x107f10u;

    // 0x107f10: 0xc0421ee  jal         func_1087B8
    ctx->pc = 0x107F10u;
    SET_GPR_U32(ctx, 31, 0x107F18u);
    ctx->pc = 0x107F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F10u;
    // 0x107f14: 0x24c5ffff  addiu       $a1, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1087B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087B8u, 0x107F10u, 0x107F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F18u;
label_107f18:
    // 0x107f18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x107F18u;
    {
        const bool branch_taken_0x107f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F18u;
        // 0x107f1c: 0x8e0300f8  lw          $v1, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f18) {
            ctx->pc = 0x107F58u;
            return;
        }
    }
    ctx->pc = 0x107F20u;
}
