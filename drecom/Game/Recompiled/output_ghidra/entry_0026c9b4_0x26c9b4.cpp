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

// Function: entry_0026c9b4
// Address: 0x26c9b4 - 0x26c9d0
void entry_0026c9b4_0x26c9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c9b4_0x26c9b4");
#endif

    ctx->pc = 0x26c9b4u;

    // 0x26c9b4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x26c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26c9b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c9bc: 0xac451b68  sw          $a1, 0x1B68($v0)
    ctx->pc = 0x26c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 5));
    // 0x26c9c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26c9c4: 0x8c24fd50  lw          $a0, -0x2B0($at)
    ctx->pc = 0x26c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD50u));
    // 0x26c9c8: 0xc09b9b0  jal         func_26E6C0
    ctx->pc = 0x26C9C8u;
    SET_GPR_U32(ctx, 31, 0x26C9D0u);
    ctx->pc = 0x26E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E6C0u, 0x26C9C8u, 0x26C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9D0u;
}
