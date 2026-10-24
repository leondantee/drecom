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

// Function: entry_001000e4
// Address: 0x1000e4 - 0x1000f0
void entry_001000e4_0x1000e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001000e4_0x1000e4");
#endif

    switch (ctx->pc) {
        case 0x1000ecu: goto label_1000ec;
        default: break;
    }

    ctx->pc = 0x1000e4u;

    // 0x1000e4: 0xc047520  jal         func_11D480
    ctx->pc = 0x1000E4u;
    SET_GPR_U32(ctx, 31, 0x1000ECu);
    ctx->pc = 0x1000E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1000E4u;
    // 0x1000e8: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D480u, 0x1000E4u, 0x1000ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1000ECu;
label_1000ec:
    // 0x1000ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1000ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1000f0u;
}
