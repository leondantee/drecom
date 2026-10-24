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

// Function: entry_00214490
// Address: 0x214490 - 0x2144a4
void entry_00214490_0x214490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214490_0x214490");
#endif

    switch (ctx->pc) {
        case 0x2144a0u: goto label_2144a0;
        default: break;
    }

    ctx->pc = 0x214490u;

    // 0x214490: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x214490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x214494: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x214494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x214498: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x214498u;
    SET_GPR_U32(ctx, 31, 0x2144A0u);
    ctx->pc = 0x21449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214498u;
    // 0x21449c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x214498u, 0x2144A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144A0u;
label_2144a0:
    // 0x2144a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2144a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2144a4u;
}
