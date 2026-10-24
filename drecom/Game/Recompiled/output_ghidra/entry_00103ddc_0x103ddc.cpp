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

// Function: entry_00103ddc
// Address: 0x103ddc - 0x103df8
void entry_00103ddc_0x103ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103ddc_0x103ddc");
#endif

    switch (ctx->pc) {
        case 0x103de4u: goto label_103de4;
        default: break;
    }

    ctx->pc = 0x103ddcu;

    // 0x103ddc: 0xc041012  jal         func_104048
    ctx->pc = 0x103DDCu;
    SET_GPR_U32(ctx, 31, 0x103DE4u);
    ctx->pc = 0x103DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DDCu;
    // 0x103de0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104048u, 0x103DDCu, 0x103DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DE4u;
label_103de4:
    // 0x103de4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x103de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x103de8: 0x3c180038  lui         $t8, 0x38
    ctx->pc = 0x103de8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)56 << 16));
    // 0x103dec: 0x3c0f0038  lui         $t7, 0x38
    ctx->pc = 0x103decu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)56 << 16));
    // 0x103df0: 0x3c190038  lui         $t9, 0x38
    ctx->pc = 0x103df0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)56 << 16));
    // 0x103df4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x103df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    ctx->pc = 0x103df8u;
}
