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

// Function: entry_00116430
// Address: 0x116430 - 0x116458
void entry_00116430_0x116430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116430_0x116430");
#endif

    switch (ctx->pc) {
        case 0x116440u: goto label_116440;
        case 0x116454u: goto label_116454;
        default: break;
    }

    ctx->pc = 0x116430u;

    // 0x116430: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x116430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x116434: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x116434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x116438: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x116438u;
    SET_GPR_U32(ctx, 31, 0x116440u);
    ctx->pc = 0x11643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116438u;
    // 0x11643c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x116438u, 0x116440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116440u;
label_116440:
    // 0x116440: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x116440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x116444: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x116444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x116448: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11644c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11644Cu;
    SET_GPR_U32(ctx, 31, 0x116454u);
    ctx->pc = 0x116450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11644Cu;
    // 0x116450: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11644Cu, 0x116454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116454u;
label_116454:
    // 0x116454: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x116454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116458u;
}
