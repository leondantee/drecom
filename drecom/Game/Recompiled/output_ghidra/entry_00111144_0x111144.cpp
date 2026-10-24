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

// Function: entry_00111144
// Address: 0x111144 - 0x111178
void entry_00111144_0x111144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111144_0x111144");
#endif

    switch (ctx->pc) {
        case 0x111154u: goto label_111154;
        default: break;
    }

    ctx->pc = 0x111144u;

    // 0x111144: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111148: 0xdc25d260  ld          $a1, -0x2DA0($at)
    ctx->pc = 0x111148u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD260u));
    // 0x11114c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x11114Cu;
    SET_GPR_U32(ctx, 31, 0x111154u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x11114Cu, 0x111154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111154u;
label_111154:
    // 0x111154: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x111154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
    // 0x111158: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x111158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x11115c: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11115Cu;
    {
        const bool branch_taken_0x11115c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x111160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11115Cu;
        // 0x111160: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11115c) {
            ctx->pc = 0x111178u;
            return;
        }
    }
    ctx->pc = 0x111164u;
    // 0x111164: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111168: 0xdc30d268  ld          $s0, -0x2D98($at)
    ctx->pc = 0x111168u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AD268u));
    // 0x11116c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111170: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x111170u;
    {
        const bool branch_taken_0x111170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111170u;
        // 0x111174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111170) {
            ctx->pc = 0x11119Cu;
            return;
        }
    }
    ctx->pc = 0x111178u;
}
