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

// Function: entry_001c1480
// Address: 0x1c1480 - 0x1c14b8
void entry_001c1480_0x1c1480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1480_0x1c1480");
#endif

    switch (ctx->pc) {
        case 0x1c14a0u: goto label_1c14a0;
        default: break;
    }

    ctx->pc = 0x1c1480u;

    // 0x1c1480: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1484: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1488: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c148c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x1c148cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1c1490: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c1490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1494: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1498: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C1498u;
    SET_GPR_U32(ctx, 31, 0x1C14A0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C1498u, 0x1C14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14A0u;
label_1c14a0:
    // 0x1c14a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c14a4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c14a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c14a8: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1c14a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1c14ac: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1c14acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c14b0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C14B0u;
    SET_GPR_U32(ctx, 31, 0x1C14B8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C14B0u, 0x1C14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14B8u;
}
