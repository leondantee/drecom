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

// Function: entry_001110f0
// Address: 0x1110f0 - 0x111114
void entry_001110f0_0x1110f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001110f0_0x1110f0");
#endif

    switch (ctx->pc) {
        case 0x111108u: goto label_111108;
        default: break;
    }

    ctx->pc = 0x1110f0u;

    // 0x1110f0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1110f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1110f4: 0xdc25d250  ld          $a1, -0x2DB0($at)
    ctx->pc = 0x1110f4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD250u));
    // 0x1110f8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1110f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1110fc: 0xdc30d258  ld          $s0, -0x2DA8($at)
    ctx->pc = 0x1110fcu;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AD258u));
    // 0x111100: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111100u;
    SET_GPR_U32(ctx, 31, 0x111108u);
    ctx->pc = 0x111104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111100u;
    // 0x111104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111100u, 0x111108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111108u;
label_111108:
    // 0x111108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11110c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11110cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111114u;
}
