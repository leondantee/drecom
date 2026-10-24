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

// Function: entry_001062f4
// Address: 0x1062f4 - 0x106314
void entry_001062f4_0x1062f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001062f4_0x1062f4");
#endif

    switch (ctx->pc) {
        case 0x106308u: goto label_106308;
        default: break;
    }

    ctx->pc = 0x1062f4u;

    // 0x1062f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1062f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062f8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1062f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1062fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1062fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106300: 0xc0418ea  jal         func_1063A8
    ctx->pc = 0x106300u;
    SET_GPR_U32(ctx, 31, 0x106308u);
    ctx->pc = 0x106304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106300u;
    // 0x106304: 0x27a70048  addiu       $a3, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1063A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063A8u, 0x106300u, 0x106308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106308u;
label_106308:
    // 0x106308: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x106308u;
    {
        const bool branch_taken_0x106308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106308u;
        // 0x10630c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106308) {
            ctx->pc = 0x106338u;
            return;
        }
    }
    ctx->pc = 0x106310u;
    // 0x106310: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x106310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x106314u;
}
