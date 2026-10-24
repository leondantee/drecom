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

// Function: entry_00111178
// Address: 0x111178 - 0x11119c
void entry_00111178_0x111178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111178_0x111178");
#endif

    switch (ctx->pc) {
        case 0x111190u: goto label_111190;
        default: break;
    }

    ctx->pc = 0x111178u;

    // 0x111178: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x11117c: 0xdc25d270  ld          $a1, -0x2D90($at)
    ctx->pc = 0x11117cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD270u));
    // 0x111180: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111184: 0xdc30d278  ld          $s0, -0x2D88($at)
    ctx->pc = 0x111184u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AD278u));
    // 0x111188: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x111188u;
    SET_GPR_U32(ctx, 31, 0x111190u);
    ctx->pc = 0x11118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111188u;
    // 0x11118c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x111188u, 0x111190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111190u;
label_111190:
    // 0x111190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x111194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11119cu;
}
